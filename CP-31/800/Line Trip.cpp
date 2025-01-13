#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n, x;
        std::cin >> n >> x;
        std::vector<int> inp(n);
        for (int i = 0; i < n; i++)
            std::cin >> inp[i];

        int runningSum = 0;
        int answer = -1;
        for(int i = 0; i < n; i++){
            answer = std::max(answer, inp[i] - runningSum);
            runningSum = inp[i];
        }
        answer = std::max(answer, 2*(x - inp[n-1]));
        std::cout << answer << "\n";
    }
    return 0;
}
// 0     1      2        5       7
//  1l ->  1l      -> 3l   -> 2l
//                        <- +2l more