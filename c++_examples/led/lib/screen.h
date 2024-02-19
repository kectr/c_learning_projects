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
    void write_to_cordinate(uint16_t x, uint16_t y, uint8_t value);
    void draw_line(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint8_t value);
    void draw_shape(int16_t x1, int16_t y1, const uint8_t *shape, uint16_t shape_width, uint16_t shape_height);
    void draw_traverse(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t value);
    void move_cordinate(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint8_t copy = 0, uint8_t shadow = 0);
    uint8_t read_cordinate(uint16_t x, uint16_t y);
    void move_area(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t x3, uint16_t y3, uint8_t copy = 0, uint8_t shadow = 0);
    
};
