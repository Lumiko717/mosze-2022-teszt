#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; 	// valtozo neve NELEMENTS elírva N_ELEMENTS helyett
    std::cout << '1-100 ertekek duplazasa' 	// cout parancs szoveg '_' kozbefogva "_" helyett valamint nincs ; a sor vegen
    for (int i = 0;)	// for ciklusbol hianyzik a valtozo es a leptetesi ertek
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)	// nincs megadva a ciklus vegenek a feltetele
    {
        std::cout << "Ertek:"	// hianyzik a ; a sor vegen es a kiirando ertek valamint a sortores
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)		// sima , a ciklusban ; elvalaszto helyett
    {
        atlag += b[i]		// hianyzik a ; a sor vegen
    }	
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
