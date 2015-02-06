#include "base/logging.h"
#include "base/debug/stack_trace.h"
#include "base/threading/thread.h"
#include "base/bind.h"
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

int main(){
    logging::GetMinLogLevel();
    int i = logging::LOG_ERROR;
    LOG_IS_ON(ERROR);
    LOG(ERROR)<<"ok";
    TestT tt;
    tt.t();
    base::debug::StackTrace trace;
    trace.Print();
    return 0;
}
