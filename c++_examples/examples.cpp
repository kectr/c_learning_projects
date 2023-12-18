#include <iostream>

class screen
{
private:
    
public:
    uint8_t rowNumber;
    uint8_t columnNumber;
    uint8_t status[rowNumber*columnNumber/8];
    uint8_t* create();
    screen(/* args */);
    ~screen(); 
};

uint8_t* screen::create(){
    uint8_t status_of_screen[screen::rowNumber*screen::columnNumber/8];
    return status_of_screen;
}

screen::screen(/* args */)
{
}

screen::~screen()
{
}



int main()
{   screen sc = screen();
    sc.rowNumber = 16;
    sc.columnNumber = 64;
    sc.create();
    std::cout<<"sa\n";
}
