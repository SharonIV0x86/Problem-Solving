#include <bits/stdc++.h>

using namespace std;

int main() {
    float x, y, z;
    std::cin >> x >> y >> x;
    float selfPoints = float(1.0 * x) + float(0.5 * y) + float(0 * z);
    float totalgames = (x + y + z);
    std::cout << selfPoints ;

    return 0;
}
// #include <iostream>
// #include <vector>

// int main()
// {
//     int n, k;
//     std::cin >> n >> k;
//     std::vector<int> vectuh(n);
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         std::cin >> vectuh[i];
//         if (vectuh[i] >= k)
//             count++;
//     }
//     std::cout << count << "\n";
//     return 0;
// }