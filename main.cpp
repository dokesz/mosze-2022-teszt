#include <iostream>

constexpr int N_ELEMENTS = 100; // #define hasznalata inkabb 

int main()
{
    int *b = new int[NELEMENTS]; // elgepelt valtozo
    std::cout << '1-100 ertekek duplazasa'
    for (int i = 0;)   // felig kesz for ciklus
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
