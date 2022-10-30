#include <iostream>
#include <string>

void hash();
void dehash();

int main()
{
    int option = 0;
    std::cout << "[1]: hash string" << std::endl << "[2]: dehash string" << std::endl;
    std::cin >> option;
    switch(option)
    {
        case(1): hash();
        case(2): dehash();
    }
}

void hash()
{
    std::string inputString;
    std::cout << "Input string to hash: ";
    std::cin >> inputString;
    std::cout << inputString;
}

void dehash()
{
    std::string inputHash;
    std::cout << "Input hash to dehash: ";
    std::cin >> inputHash;
    std::cout << inputHash;
}