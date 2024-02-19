#include <iostream>
#include <cstdint>
#include "byte_operations.h"
using namespace std;
#define byte uint8_t

class Screen
{
private:
public:
    uint16_t width;
    uint16_t width_8;
    uint16_t height;
    uint8_t *array;

    Screen(uint16_t x, uint16_t y, uint8_t fill_option = 0x00);
    ~Screen();

    void print();

    void fill(uint8_t choice);


};
