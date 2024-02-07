#include <iostream>
#include <cstdint>
#include "byte_operations.h"
using namespace std;
#define byte uint8_t

class Screen
{
private:
public:
    uint8_t width;
    uint8_t width_8;
    uint8_t height;
    uint8_t *array;

    Screen(uint8_t x, uint8_t y, uint8_t fill_option);
    ~Screen();

    void print();

    void fill(uint8_t choice);
    void write_to_cordinate(uint8_t x, uint8_t y, uint8_t value);
    void draw_line(uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2, uint8_t value);
    void draw_shape(uint8_t x1, uint8_t y1, const uint8_t* shape, uint8_t shape_x, uint8_t shape_y);
    void draw_traverse(uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2, uint8_t value);
};
