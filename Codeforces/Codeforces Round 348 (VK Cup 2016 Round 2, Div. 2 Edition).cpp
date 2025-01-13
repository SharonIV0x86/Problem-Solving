#include <iostream>
#include <algorithm>
int main()
{
    long long t;
    while (std::cin >> t)
    {
        long long n;
        n = t;
        long long c1 = 0;
        long long c2 = 0;
        if (n == 1)
        {
            std::cout << n << std::endl;
            continue;
        }
        else if(n == 2){
            std::cout << "1\n";
            continue;
        }
        else
        {
            bool in = false;
            while (n >= 0)
            {
                if (in && n > 0)
                {
                    n -= 1;
                    c1++;
                }
                else
                {
                    n -= 2;
                    c1++;
                }
            }
            in = false;
            while (n >= 0)
            {
                if (!in && t > 0)
                {
                    n -= 2;
                    c2++;
                }
                else
                {
                    n -= 1;
                    c2++;
                }
            }
        }
        std::cout << std::max(c1, c2) << std::endl;
        }

    return 0;
}