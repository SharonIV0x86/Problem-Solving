#include <iostream>
#include <string>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        std::string strr;
        std::cin >> strr;
        std::string hours = strr.substr(0, 2);
        std::string minutes = strr.substr(3, 2);
        int hrs = std::stoi(hours);
        int mins = std::stoi(minutes);
        if (hrs == 0)
        {
            std::cout << "12:";
            if (mins <= 9)
            {
                std::cout << "0" << mins << " AM\n";
            }
            else
            {
                std::cout << mins << " AM\n";
            }
        }
        else if (hrs > 12)
        {
            int h = (hrs + 12) % 12;
            if (h <= 9 && h != 0)
            {
                std::cout << "0" << h << ":";
            }
            if (mins <= 9)
            {
                std::cout << "0" << mins << " PM\n";
            }
            else
            {
                std::cout << mins << " PM\n";
            }
        }
        else
        {
            int h = (hrs + 12) % 12;
            if (h <= 9 && h != 0)
            {
                std::cout << "0" << h << ":";
            }
            else
            {
                std::cout << hrs << ":";
                if (mins <= 9)
                {
                    std::cout << "0" << mins << " PM\n";
                }
                else
                {
                    std::cout << mins << " PM\n";
                }
            }
            if (mins <= 9 && h != 0)
            {
                std::cout << "0" << mins << " AM\n";
            }
            else
            {
                std::cout << mins << " AM\n";
            }
        }
    }
}