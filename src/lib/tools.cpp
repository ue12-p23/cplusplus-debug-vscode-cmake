#include <iostream>

void printArguments(int argc, char **argv)
{
    std::cout << "Input Args are : \n";
    for (std::size_t i = 1; i < static_cast<std::size_t>(argc); i++)
    {
        std::cout << argv[i] << " ";
    }
    std::cout << std::endl;
}