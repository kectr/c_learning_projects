#include "lib/screen.h"
#include <cstdint>



int main()
{

    const uint8_t data[] =
{
0x00, 0x00, 0x00, 0x6e, 0x02, 0x00, 0x00, 0x3e, 0x3c, 0x00, 0x00, 0x7e, 0xe0, 0x00, 0x00, 0x3e, 0x00, 0x01, 0x00, 0xff, 0x00, 0x03, 0x00, 0x5f, 0x00, 0x02, 0x60, 0xff, 0x00, 0x0c, 0x68, 0xff, 0x00, 0xf0, 0x0d, 0xde, 0x00, 0x00, 0x06, 0xde, 0x00, 0x00, 0x00, 0xde, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0xee, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0xde, 0x00, 0x00, 0x00, 0x5e
};

    Screen sc(32, 16, 0x00);

    sc.draw_shape(0,15,data,32,16);
    sc.print();

    return 0;
} 