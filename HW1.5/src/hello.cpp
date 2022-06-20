#include "hello.h"
#include <iostream>
#include "glog/logging.h"
#include "gflags/gflags.h"

DECLARE_int32(print_times);

void sayHello() {
    //std::cout<<"Hello SLAM"<<std::endl;

    for(int i=0; i<FLAGS_print_times;i++) {
        LOG(INFO)<<"Hello SLAM";
    }
}
