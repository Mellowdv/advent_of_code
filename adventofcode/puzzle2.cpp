#include <iostream>
#include <vector>
#include <fstream>
#include <string>

void puzzle2()
{
    std::vector <int> sonar_results;
    std::vector <int> sonar_sums;
    std::string line;
    int number {};
    int temp_sum {};
    int number_of_increases {0};

    std::ifstream file("puzzle1.txt");

    while (true)
    {
        if (file.eof())
            break;
        std::getline(file, line);
        number = stoi(line);
        sonar_results.push_back(number);
    }

    for (int i = 0; i < sonar_results.size() - 2; i++)
    {
        temp_sum = sonar_results.at(i) + sonar_results.at(i + 1) + sonar_results.at(i + 2);
        sonar_sums.push_back(temp_sum);
    }

    std::cout << sonar_sums.at(sonar_sums.size()-1) << std::endl;

    for (int j = 0; j < sonar_sums.size() - 1; j++)
    {
        if (sonar_sums.at(j + 1) > sonar_sums.at(j))
            number_of_increases++;
    }

    std::cout << number_of_increases;

}