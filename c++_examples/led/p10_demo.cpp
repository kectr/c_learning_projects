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
    void draw_shape(uint8_t x1,uint8_t y1,uint8_t* shape,uint8_t shape_x,uint8_t shape_y,uint8_t reverse = 0);
    void draw_traverse(uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2, uint8_t value);
};

Screen::Screen(uint8_t x, uint8_t y, uint8_t fill_option)
{
    width = x;
    height = y;
    width_8 = (width+7) / 8;
    array = new uint8_t[width_8 * height];
    fill(fill_option);
}

Screen::~Screen()
{
    delete[] array;
}

void Screen::print()
{
    for (int8_t j = height - 1; j >= 0; j--)
    {
        for (int8_t i = 0; i < width_8; i++)
        {
            for (int8_t k = 7; k >= 0; k--)
            {
                printf("%d", readBit(array[i + j * width / 8], k));
            }
            cout << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl;
}

void Screen::fill(uint8_t fill_option)
{
    for (int8_t j = 0; j < height; j++)
    {
        for (int8_t i = 0; i < width_8; i++)
        {
            array[i + j * width_8] = fill_option;
        }
    }
}

void Screen::write_to_cordinate(uint8_t x, uint8_t y, uint8_t value)
{
    writeBit(&array[y * width_8 + x / 8], 7 - (x % 8), value);
}

// If points those are not in same x nor y is given then function will draw a rectangle
void Screen::draw_line(uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2, uint8_t value)
{
    if (x1 == x2)
    {
        if (y1 > y2)
        {
            uint8_t temp = y1;
            y1 = y2;
            y2 = temp;
        }
        for (; y1 <= y2; y1++)
        {
            write_to_cordinate(x1, y1, value);
        }
    }
    else if (y1 == y2)
    {
        if (x1 > x2)
        {
            uint8_t temp = x1;
            x1 = x2;
            x2 = temp;
        }
        for (; x1 <= x2; x1++)
        {
            write_to_cordinate(x1, y1, value);
        }
    }
    else
    {
        draw_line(x1, y1, x2, y1, value);
        draw_line(x1, y1, x1, y2, value);
        draw_line(x2, y2, x2, y1, value);
        draw_line(x2, y2, x1, y2, value);
    }
}

void Screen::draw_traverse(uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2, uint8_t value){
    uint8_t dx = (y2-y1);
    uint8_t dy = (x2-x1);
    if(dx>dy){

    }
}

int main()
{
    Screen sc(32, 16, 0xff);
    sc.draw_line(0, 0, 31, 15, 1);

    sc.write_to_cordinate(3, 4, 1);
    sc.write_to_cordinate(0, 0, 0); // çözüldü
    sc.print();
}