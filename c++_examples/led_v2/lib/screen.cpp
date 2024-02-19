#include "screen.h"

Screen::Screen(uint16_t x, uint16_t y, uint8_t fill_option)
{
    width = x;
    height = y;
    width_8 = (width + 7) / 8;
    array = new uint8_t[width_8 * height];
    fill(fill_option);
}

Screen::~Screen()
{
    delete[] array;
}

// Prints screen to terminal
void Screen::print()
{
    for (int8_t j = height - 1; j >= 0; j--)
    {
        for (int8_t i = 0; i < width_8; i++)
        {
            for (int8_t k = 7; k >= 0; k--)
            {
                printf("%d", readBit(array[i + j * width_8], k));
            }
            cout << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl;
}

// Fills whole screen with byte ex 0xff
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
