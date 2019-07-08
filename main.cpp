
#include <iostream>
#include <string>
#include <iomanip>
#include <chrono>
#include <thread>
#include <stdint.h>


int main(int argc, char** argv)
{
    std::cout << "Progress: ";

    for (uint8_t i = 0; i <= 100; i++)
    {
        if (i == 100)
        {
            std::cout << "100";
        }
        else
        {
            std::cout << " " << std::setw(2) << std::setfill('0') << std::to_string(i);
        }

        std::cout << "%   [";

        uint8_t progress_amt = i / 10;
        for (uint8_t j = 0; j < 10; j++)
        {
            if (progress_amt >= j+1)
            {
                std::cout << "X";
            }
            else
            {
                std::cout << "-";
            }
        }

        std::cout << "]" << std::flush;

        std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";

        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }
    
    std::cout << std::endl;
}
