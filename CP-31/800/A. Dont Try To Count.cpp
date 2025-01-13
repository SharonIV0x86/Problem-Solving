#include <iostream>
#include <string>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int m, n;
        std::string x, s;
        std::cin >> m >> n >> x >> s;
        bool is = false;
        for (int i = 0; i < 6; i++)
        {
            if (x.find(s) != std::string::npos)
            {
                std::cout << i << "\n";
                is = true;
                break;
            }else{
                x += x;
            }
        }
        if (!is)
        {
            std::cout << "-1\n";
        }
    }
    return 0;
}

// Note that the answer is always not greater than 5. When n=1, m=25, the answer is either 5 or −1
// , it is easy to see that the answer cannot be greater.

// This allows us to simply iterate over the number of operations, each time checking if s
// occurs in x. The time complexity of this solution is O(2⋅5⋅n⋅m).