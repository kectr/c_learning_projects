#include <iostream>
using namespace std;

uint8_t readBit(uint8_t value, uint8_t position);
void writeBit(uint8_t *byteAdr, uint8_t position, uint8_t value);

class screen
{
private:
public:
    uint8_t width;
    uint8_t width_8;
    uint8_t height;
    uint8_t *array;

    screen(uint8_t x,uint8_t y,uint8_t fill_option);
    //screen(uint8_t x,uint8_t y);

    void print();
    class draw;
    
};

class draw:public screen
{
public:
    draw();
    void write_to_cordinate(uint8_t x,uint8_t y,uint8_t value);
    void draw_line(uint8_t x1,uint8_t y1,uint8_t x2,uint8_t y2,uint8_t value);  
    void fill(uint8_t choice);
};



screen::screen(uint8_t x,uint8_t y,uint8_t fill_option)
{
    width = x;
    height = y;
    width_8 = width/8;
    array = (uint8_t *)malloc(width * height / 8);
    screen::draw::fill(fill_option);
}
/*
screen::screen(uint8_t x,uint8_t y)
{   
    printf("\n%d-%d\n",x,y);
    width = x;
    height = y;
    uint8_t fill_option = 0x00;
    array = (uint8_t *)malloc(width * height / 8);
    fill(fill_option);
    
}
*/
void screen::print()
{
    for (int8_t j = height-1; j>=0; j--)
    {
        for (int8_t i = 0; i < width_8; i++)
        {
            for (int8_t k = 7; k >= 0; k--)
            {
                // cout << readBit(array[i + j * width / 8], k);
                printf("%d", readBit(array[i + j * width / 8], k));
            }
            cout << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl;
}

void draw::fill(uint8_t fill_option)
{
    for (int8_t j = 0; j < height; j++)
    {
        for (int8_t i = 0; i < width_8; i++)
        {
            array[i + j * width_8] = fill_option;
        }
    }
}

void draw::write_to_cordinate(uint8_t x,uint8_t y,uint8_t value)
{
    //Assuming that 0,0 is the bottom left of the screen this will change only the memory layout
    writeBit(&array[y*width_8+x/8],7-(x%8),value);
}

void draw::draw_line(uint8_t x1,uint8_t y1,uint8_t x2,uint8_t y2,uint8_t value){

}

uint8_t readBit(uint8_t value, uint8_t position)
{
    return (value >> position) & 1;
}

void writeBit(uint8_t *byteAdr, uint8_t position, uint8_t value)
{
    *byteAdr = *byteAdr | (value << position);
}

int main()
{
    screen sc(32,16,0x00);
    sc.draw.write_to_cordinate(0,0,1);
    
    
}