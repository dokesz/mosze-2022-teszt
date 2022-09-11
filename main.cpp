#include <iostream>

#define N_ELEMENTS 100 

int main()
{
    int *b = new int[N_ELEMENTS]; 
    std::cout << '1-100 ertekek duplazasa';
    for (int i = 0; i < N_ELEMENTS + 1; i++)   
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:"   // hianyzo ; es ertek 
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)  // , hasznalata ; helyett
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
