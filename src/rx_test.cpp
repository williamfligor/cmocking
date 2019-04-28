#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"
#include "CppUTest/CommandLineTestRunner.h"

extern "C"
{
#include "rx.h"
}


TEST_GROUP(rx)
{
    void setup() {
    }


    void teardown() {
        mock().clear();
    }
};


TEST(rx, simpleTest)
{

    mock().expectOneCall("device_rx")
          .withParameter("number", 1024)
          .andReturnValue(true);

    bool result = rx(512);

    // assert
    mock().checkExpectations();
    CHECK_EQUAL(true, result);
}


int main(int ac, char** av)
{
    return CommandLineTestRunner::RunAllTests(ac, av);
}
