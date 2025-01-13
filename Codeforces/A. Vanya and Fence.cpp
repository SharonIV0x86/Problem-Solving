#include <iostream>
#include <vector>

int main()
{
    int n, h;
    std::cin >> n >> h;
    std::vector<int> vec(n);

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        std::cin >> vec[i];
        if (vec[i] > h)
            count += 2;
        else
            count += 1;
    }
    std::cout << count << "\n";
    return 0;
}