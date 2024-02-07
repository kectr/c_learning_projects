#include "screen.h"

Screen::Screen(uint8_t x, uint8_t y, uint8_t fill_option)
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

void Screen::draw_shape(uint8_t x1, uint8_t y1, const uint8_t *shape, uint8_t shape_x, uint8_t shape_y)
{
    uint8_t endx = x1 + shape_x -1;
    uint8_t endy = y1 - shape_y -1;
    uint8_t shape_x_8 = shape_x / 8;

    if (endx >= Screen::width)
    {
        endx = Screen::width - 1;
    }

    if (endy < 0)
    {
        endy = 0;
    }

    int8_t i = 0;
    int8_t j = 0;

    for (; y1 > endy; y1--)
    {
        i = 0;
        for (uint8_t x = x1; x < endx; x++)
        {
            Screen::write_to_cordinate(x, y1, readBit(shape[i / 8 + j * shape_x_8], i % 8));
            i++;
        }

        j++;
    }
}