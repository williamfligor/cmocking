#include "CppUTestExt/MockSupport_c.h"

#include <stdio.h>
#include "device.h"


bool device_rx(int len)
{
    printf("%s:%s rx %d\n", __FILE__, __func__, len);

    return mock_c()->actualCall(__func__)
                    ->withIntParameters("len", len)
                    ->boolReturnValue();
}
