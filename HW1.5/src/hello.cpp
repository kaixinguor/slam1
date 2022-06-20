#include "hello.h"
#include <iostream>
#include "glog/logging.h"

void sayHello() {
    //std::cout<<"Hello SLAM"<<std::endl;
    LOG(INFO)<<"Hello SLAM";
}
