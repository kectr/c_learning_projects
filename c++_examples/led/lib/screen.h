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

    Screen(uint8_t x, uint8_t y, uint8_t fill_option = 0x00);
    ~Screen();

    void print();

    void fill(uint8_t choice);
    void write_to_cordinate(uint8_t x, uint8_t y, uint8_t value);
    void draw_line(uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2, uint8_t value);
    void draw_shape(uint8_t x1, uint8_t y1, const uint8_t *shape, uint8_t shape_width, uint8_t shape_height);
    void draw_traverse(uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2, uint8_t value);
    void move_cordinate(uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2, uint8_t copy = 0, uint8_t shadow = 0);
    uint8_t read_cordinate(uint8_t x, uint8_t y);
    void move_area(uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2, uint8_t x3, uint8_t y3, uint8_t copy = 0, uint8_t shadow = 0);
    
};
