#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
//https://codeforces.com/contest/1933/problem/A
int main()
{
    int testCases;
    std::cin >> testCases;
    while (testCases--)
    {
        int size;
        std::cin >> size;
        std::vector<int> vectuh(size);

        for (int i = 0; i < size; i++)
            std::cin >> vectuh[i];

        std::transform(vectuh.begin(), vectuh.end(), vectuh.begin(), [](int &elem)
                       {
            if(elem < 0) return -elem;
            else return elem; });


        int sum = std::accumulate(vectuh.begin(), vectuh.end(), 0);
        std::cout << sum << std::endl;
    }
    return 0;
}