#include <cstdint>
#include <iostream>
#include "byte_operations.h"


typedef struct
{
    int16_t x;
    int16_t y;
} cordinate;

class Twod_bit_array
{
private:
public:
    uint16_t width;
    uint16_t height;
    uint8_t *data;
    uint16_t width_in_bytes;

    void initialize(uint16_t width_in, uint16_t height_in);

    Twod_bit_array(uint16_t width_in, uint16_t height_in, uint8_t* data_in);
    Twod_bit_array(uint16_t width_in, uint16_t height_in);

    ~Twod_bit_array();

    uint8_t read(cordinate read_cordinate);

    void write(cordinate to_crd,uint8_t value);

    uint8_t in_data_byte_index(cordinate find_crd);

    uint8_t* byte_address(cordinate find_crd);

    void copy(cordinate start_left_bot, class Twod_bit_array from_arr);

    void print();

    void fill(uint8_t value);

};

uint8_t in_byte_index(int16_t x);

uint8_t is_contains_negative(cordinate cord);
