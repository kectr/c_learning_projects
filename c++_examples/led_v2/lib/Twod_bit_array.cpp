#include "Twod_bit_array.h"

Twod_bit_array::Twod_bit_array(uint16_t width_in, uint16_t height_in, uint8_t *data_in)
{
    initialize(width_in, height_in);
    data = data_in;
}

Twod_bit_array::Twod_bit_array(uint16_t width_in, uint16_t height_in)
{
    initialize(width_in, height_in);
    data = new uint8_t[height*width_in_bytes];
}

void Twod_bit_array::initialize(uint16_t width_in, uint16_t height_in)
{
    Twod_bit_array::width = width_in;
    Twod_bit_array::width_in_bytes = (width + 7) / 8;
    Twod_bit_array::height = height_in;
}

uint8_t in_byte_index(int16_t x){
    return 7-(x%8);
}

uint8_t Twod_bit_array::in_data_byte_index(cordinate find_crd){
    return find_crd.x/8 + find_crd.y*width_in_bytes;
}

uint8_t* Twod_bit_array::byte_address(cordinate find_crd){
    return data+in_data_byte_index(find_crd);
}

uint8_t Twod_bit_array::read(cordinate read_cordinate){
    return readBit(*byte_address(read_cordinate),in_byte_index(read_cordinate.x));
}

void Twod_bit_array::write(cordinate to_crd,uint8_t value){
    
}

Twod_bit_array::~Twod_bit_array(){
    delete[] data;
}