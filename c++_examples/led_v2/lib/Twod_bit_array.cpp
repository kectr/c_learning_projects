#include "Twod_bit_array.h"

Twod_bit_array::Twod_bit_array(uint16_t width_in, uint16_t height_in, uint8_t *data_in)
{
    initialize(width_in, height_in);
    data = data_in;
}

Twod_bit_array::Twod_bit_array(uint16_t width_in, uint16_t height_in)
{
    initialize(width_in, height_in);
    data = new uint8_t[height * width_in_bytes];
}

void Twod_bit_array::initialize(uint16_t width_in, uint16_t height_in)
{
    Twod_bit_array::width = width_in;
    Twod_bit_array::width_in_bytes = (width + 7) / 8;
    Twod_bit_array::height = height_in;
}

uint8_t Twod_bit_array::in_data_byte_index(cordinate find_crd)
{
    if (is_contains_negative(find_crd))
    {
        return 0;
    }
    return find_crd.x / 8 + find_crd.y * width_in_bytes;
}

uint8_t *Twod_bit_array::byte_address(cordinate find_crd)
{
    if (is_contains_negative(find_crd))
    {
        return 0;
    }
    return data + in_data_byte_index(find_crd);
}

uint8_t Twod_bit_array::read(cordinate read_cordinate)
{
    if (is_contains_negative(read_cordinate))
    {
        return 0;
    }
    return readBit(*byte_address(read_cordinate), in_byte_index(read_cordinate.x));
}

void Twod_bit_array::write(cordinate to_crd, uint8_t value)
{
    if (is_contains_negative(to_crd))
    {
        return;
    }
    writeBit(byte_address(to_crd), in_data_byte_index(to_crd), value);
}

void Twod_bit_array::copy(cordinate start_left_bot, class Twod_bit_array from_arr)
{
    cordinate temp;
    cordinate read_cords;
    for (read_cords.y = 0; read_cords.y < from_arr.height; read_cords.y++)
    {
        temp.y = start_left_bot.y + read_cords.y;
        for (read_cords.x = 0; read_cords.x < from_arr.width; read_cords.x++)
        {
            temp.x = start_left_bot.x + read_cords.x;
            write(temp, from_arr.read(read_cords));
        }
    }
}

Twod_bit_array::~Twod_bit_array()
{
    delete[] data;
}

uint8_t in_byte_index(int16_t x)
{
    return 7 - (x % 8);
}

uint8_t is_contains_negative(cordinate cord)
{
    return (cord.x < 0 || cord.y < 0);
}