#include "hello.h"
#include "glog/logging.h"
#include "gflags/gflags.h"
#include "gtest/gtest.h"

DEFINE_int32(print_times, 1, "print times");

TEST(PRINT_TEST, Positive) {
    FLAGS_print_times = 5;
    EXPECT_EQ(sayHello(),5);
    FLAGS_print_times = 1;
    EXPECT_EQ(sayHello(),1);
}

TEST(PRINT_TEST, Zero) {
    FLAGS_print_times = 0;
    EXPECT_EQ(sayHello(),0);
}

TEST(PRINT_TEST, Negative) {
    FLAGS_print_times = -1;
    EXPECT_EQ(sayHello(),0) << "FAILED: EXPECT: 0, but give -1";
}


int main( int argc, char** argv ) {

    gflags::ParseCommandLineFlags(&argc, &argv, true);

    google::InitGoogleLogging(argv[0]);
    FLAGS_log_dir = "./";

    LOG(INFO) << "LOG";
  
    //EXPECT_EQ(sayHello(),1);
    //EXPECT_EQ(sayHello(),5) << "FAILED: EXPECT: 5, but give 5";
    testing::InitGoogleTest(&argc, argv);
    int test_status = RUN_ALL_TESTS(); 
    google::ShutdownGoogleLogging();
}
