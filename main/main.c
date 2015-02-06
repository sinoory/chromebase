#include "base/logging.h"
#include "base/debug/stack_trace.h"
#include "base/threading/thread.h"
#include "base/bind.h"
#include "base/at_exit.h"
static void Fun( int para1,int para2 ){
    int res= para1+para2;
    LOG(ERROR)<<"in Fun";
}

class TestT{
    public:
    void t(){
    scoped_ptr<base::Thread> ThreadTest;
    ThreadTest.reset(new base::Thread("thread_test"));
    if (!ThreadTest->IsRunning())
            ThreadTest->Start();
    int para1,para2;
    ThreadTest->message_loop()->PostTask(FROM_HERE,
        base::Bind(&Fun, para1,para2));

    }
};
void ToggleValue(bool* value) {
  LOG(ERROR)<<"OK in task";
  *value = !*value;
}
void test(){
    base::AtExitManager exit_manager;//TODO: must add to avoid crash,how to avoid add?
  bool was_invoked = false;
  {
    base::debug::StackTrace trace;
    trace.Print();
      base::Thread a("TwoTasks");
    (a.Start());

    // Test that all events are dispatched before the Thread object is
    // destroyed.  We do this by dispatching a sleep event before the
    // event that will toggle our sentinel value.
    a.message_loop()->PostTask(
        FROM_HERE,
        base::Bind(
            static_cast<void (*)(base::TimeDelta)>(
                &base::PlatformThread::Sleep),
            base::TimeDelta::FromMilliseconds(2000)));
    a.message_loop()->PostTask(FROM_HERE, base::Bind(&ToggleValue,
                                                     &was_invoked));
  }
  LOG(ERROR)<<"finish";
  //EXPECT_TRUE(was_invoked);

}

int main(){
    logging::GetMinLogLevel();
    int i = logging::LOG_ERROR;
    LOG_IS_ON(ERROR);
    LOG(ERROR)<<"ok";
    TestT tt;
    //tt.t();
    test();
    base::debug::StackTrace trace;
    //trace.Print();
    return 0;
}
