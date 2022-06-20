#include "hello.h"
#include "glog/logging.h"
#include "gflags/gflags.h"

DEFINE_int32(print_times, 1, "print times");

int main( int argc, char** argv ) {

    gflags::ParseCommandLineFlags(&argc, &argv, true);

    google::InitGoogleLogging(argv[0]);
    FLAGS_log_dir = "./";

    LOG(INFO) << "LOG";
  
    sayHello();

    google::ShutdownGoogleLogging();
}
