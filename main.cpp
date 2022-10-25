#include <iostream>
#include <cmath>

short countBits(unsigned int x);

bool is_in_use(uint8_t carNum);

int main(int argc, char* argv[])
{
    uint8_t x = 0b00110011;
    uint8_t y = 0b11001100;

    x = ~x;

    uint16_t c = 0;
    uint16_t b = ~c;

    std::cout << b << std::endl;

    if (x = y)
        std::cout << "yes" << std::endl;
    else    
        std::cout << "no" << std::endl;
    return 0;
}

short countBits(unsigned int x)
{
    short num_bits = 0;
    while(x)
    {
        num_bits += x & 1;
        x >>= 1;
    }

    return num_bits;
}

bool is_in_use(uint8_t carNum)
{
    uint8_t in_use = 0;
    switch(carNum)
    {
        case 0:
        in_use = 0b00000001;
        break;

        case 1:
        in_use = 0b00000010;
        break;

        case 2:
        in_use = 0b00000100;
        break;

        case 3:
        in_use = 0b00001000;
        break;

        case 4:
        in_use = 0b00010000;
        break;

        case 5:
        in_use = 0b00100000;
        break;

        case 6:
        in_use = 0b01000000;
        break;

        case 7:
        in_use = 0b10000000;
        break;
    }

    return in_use & static_cast<uint8_t>(pow(2, carNum));
}