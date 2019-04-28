#include "CppUTestExt/MockSupport.h"

extern "C"
{
#include <stdio.h>
#include "device.h"
}


bool device_rx(int len)
{
    printf("%s:%s rx %d\n", __FILE__, __func__, len);

    return bool(mock().actualCall(__func__)
        .withParameter("number", len)
        .returnBoolValue());
}
