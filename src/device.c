#include "device.h"

bool device_rx(int len)
{
    printf("%s:%s rx %d\n", __FILE__, __func__, len);
    return true;
}
