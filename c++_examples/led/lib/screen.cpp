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

// Writes to point x,y a value
void Screen::write_to_cordinate(uint16_t x, uint16_t y, uint8_t value)
{
    writeBit(&array[y * width_8 + x / 8], 7 - (x % 8), value);
}

// If points those are not in same x nor y is given then function will draw a rectangle
void Screen::draw_line(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint8_t value)
{
    if (x1 >= width || x2 >= width || y1 >= height || y2 >= height || x1 < 0 || x2 < 0 || y1 < 0 || y2 < 0)
    {
        return;
    }

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

// Draws traverse with DDA
void Screen::draw_traverse(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t value)
{
    int8_t dx = x2 - x1;
    int8_t dy = y2 - y1;

    int8_t steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    float xIncrement = static_cast<float>(dx) / static_cast<float>(steps);
    float yIncrement = static_cast<float>(dy) / static_cast<float>(steps);

    float x = x1;
    float y = y1;

    for (int i = 0; i <= steps; ++i)
    {
        write_to_cordinate(static_cast<uint16_t>(x), static_cast<uint16_t>(y), value);
        x += xIncrement;
        y += yIncrement;
    }
}

// Reads a value from point x,y
uint8_t Screen::read_cordinate(uint16_t x, uint16_t y)
{
    return readBit(array[x / 8 + y * width_8], 7 - (x % 8));
}

// Moves a point from x1,y1 to x2,y2.
void Screen::move_cordinate(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint8_t copy, uint8_t shadow)
{
    write_to_cordinate(x2, y2, read_cordinate(x1, y1));
    printf("%x", copy);
    if (!copy)
    {
        write_to_cordinate(x1, y1, shadow);
    }
}

// Moves x1,y1;x2,y2 area to x3,y3 if you selelct copy it will not change area you are copying but id you selelct copy 0 it will apply a shadow
void Screen::move_area(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t x3, uint16_t y3, uint8_t copy, uint8_t shadow)
{
    if (y1 > y2)
    {
        uint8_t temp = y1;
        y1 = y2;
        y2 = temp;
    }
    if (x1 > x2)
    {
        uint8_t temp = x1;
        x1 = x2;
        x2 = temp;
    }

    uint8_t i = 0;
    uint8_t j = 0;

    if (width - x3 - 1 < x2 - x1)
    {
        x2 = x1 + width - 1 - x3;
    }

    if (height - y3 - 1 < y2 - y1)
    {
        y2 = y1 + height - 1 - y3;
    }

    for (; y1 <= y2; y1++)
    {
        for (; x1 <= x2; x1++)
        {
            move_cordinate(x1, y1, x3 + i, y3 + j, copy, shadow);
            i++;
        }
        j++;
    }
}

// Row major,big endian
void Screen::draw_shape(int16_t x1, int16_t y1, const uint8_t *shape, uint16_t shape_width, uint16_t shape_height)
{
    uint16_t shape_width_8 = shape_width / 8;
    uint16_t start_relative_x = 0, start_relative_y = 0;

    if (x1 < 0)
    {
        start_relative_x = -x1;
    }
    else if (width <= x1)
    {
        start_relative_x = shape_width - 1 - x1 + width;
    }

    if (y1 < 0)
    {
        start_relative_y = y1;
    }
    else if (height <= y1)
    {
        start_relative_y = shape_height - 1 - y1 + height;
    }

    uint16_t shape_x = start_relative_x;

    for (; start_relative_y < shape_height; start_relative_y++)
    {
        for (uint16_t shape_x = start_relative_x; shape_x < shape_width; shape_x++)
        {
            write_to_cordinate(x1 + shape_x, y1 + start_relative_y, readBit(shape_x/8 + start_relative_y * shape_width_8, 7-(shape_x % 8)));
        }
    }
}
