#include "hello.h"
#include "glog/logging.h"

int main( int argc, char** argv ) {

    google::InitGoogleLogging(argv[0]);
    FLAGS_log_dir = "./";

    LOG(INFO) << "LOG";
  
    sayHello();

    google::ShutdownGoogleLogging();
}
