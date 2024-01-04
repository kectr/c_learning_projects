#include <iostream>
#include <cstdint>
using namespace std;

uint8_t readBit(uint8_t value, uint8_t position);
void writeBit(uint8_t *byteAdr, uint8_t position, uint8_t value);

class screen
{
public:
    uint8_t width;
    uint8_t width_8;
    uint8_t height;
    uint8_t *array;

    screen(uint8_t x, uint8_t y, uint8_t fill_option);
    ~screen();  // Destructor to free the allocated memory

    void print();

    class draw
    {
    public:
        static void fill(screen& scr, uint8_t fill_option);
        static void write_to_coordinate(screen& scr, uint8_t x, uint8_t y, uint8_t value);
        static void draw_line(screen& scr, uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2, uint8_t value);
    };
};

screen::screen(uint8_t x, uint8_t y, uint8_t fill_option)
{
    width = x;
    height = y;
    width_8 = (width + 7) / 8;
    array = new uint8_t[width_8 * height];  // Use 'new' to allocate an array
    draw::fill(*this, fill_option);  // Call fill using the screen object
}

screen::~screen()
{
    delete[] array;  // Free the allocated memory
}

void screen::print()
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
    cout << endl << endl;
}

void screen::draw::fill(screen& scr, uint8_t fill_option)
{
    for (int8_t j = 0; j < scr.height; j++)
    {
        for (int8_t i = 0; i < scr.width_8; i++)
        {
            scr.array[i + j * scr.width_8] = fill_option;
        }
    }
}

void screen::draw::write_to_coordinate(screen& scr, uint8_t x, uint8_t y, uint8_t value)
{
    writeBit(&scr.array[y * scr.width_8 + x / 8], 7 - (x % 8), value);
}

void screen::draw::draw_line(screen& scr, uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2, uint8_t value)
{
    // Implement draw_line function
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
    screen sc(32, 16, 0x00);
    screen::draw::write_to_coordinate(sc, 0, 0, 1);

    sc.print();  // Print the screen

    return 0;
}
