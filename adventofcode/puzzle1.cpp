#include <iostream>
#include <fstream>
#include <string>

void puzzle1()
{
    int number {0};
    int prev_number {0};
    int number_of_increases {0};
    std::ifstream file("puzzle1.txt");
    std::string line;
    std::getline(file, line);
    prev_number = stoi(line);

    while (true)
    {
        if (file.eof())
            break;
        
        std::getline(file, line);
        number = stoi(line);
        if (number > prev_number)
            number_of_increases++;
        prev_number = number;
    }
    
    std::cout << number_of_increases;
}