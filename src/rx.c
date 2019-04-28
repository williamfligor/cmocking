#include "rx.h"

#include "device.h"

bool rx(int len)
{
    printf("%s:%s rx %d\n", __FILE__, __func__, len);
    return device_rx(len * 2);
}
