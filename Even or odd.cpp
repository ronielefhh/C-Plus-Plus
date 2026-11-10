#include <iostream>

int main()
{
    int numero;
    
    std::cin >> numero;
    
    if(numero % 2 == 0)
    {
        std::cout << "É um número par!\n";
    }
    else
    {
        std::cout << "É um número impar!\n";
    }

    return 0;
}