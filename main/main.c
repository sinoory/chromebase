#include "base/logging.h"

int main(){
    logging::GetMinLogLevel();
    int i = logging::LOG_ERROR;
    LOG_IS_ON(ERROR);
    LOG(ERROR)<<"ok";
    return 0;
}
