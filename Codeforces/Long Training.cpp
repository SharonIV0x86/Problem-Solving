#include <iostream>

int main()
{
    int n, m, s, p;
    std::cin >> n >> m >> s >> p;
    int totSecs = n * ((m * 60) + s) + ((n-1) * p);
    int mins = totSecs / 60;
    int secs = totSecs % 60;
    std::cout << mins << "\n" << secs << "\n";
}