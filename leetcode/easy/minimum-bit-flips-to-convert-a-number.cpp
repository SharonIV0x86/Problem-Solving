#include <iostream>
#include <bitset>

int main()
{
    std::bitset<8> uniB;
    std::bitset<8> decB(10);

    std::bitset<31> strB(3);
    std::bitset<31> strA(4);
    int mins = 0;
    for (int i = 0; i < strB.size(); i++)
    {
        if (strA[i] != strB[i])
            mins++;
    }
    std::cout << mins << "\n";
}