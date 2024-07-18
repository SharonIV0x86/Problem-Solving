#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long

void printMatrix(std::vector<std::vector<ll>> matrix)
{
    for (const auto &ae : matrix)
    {
        for (const auto &be : ae)
        {
            std::cout << be << " ";
        }
        std::cout << "\n";
    }
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        ll n, m;
        std::cin >> n >> m;
        ll order = n * m;
        std::vector<std::vector<ll>> matrix(n, std::vector<ll>(m));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                std::cin >> matrix[i][j];
            }
        }
        if (n == 1 && m == 1)
        {
            std::cout << "-1\n";
        }
        else
        {
            for(int i = 0; i < n-1; i++){
                std::swap(matrix[i], matrix[i+1]);
            }
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m-1; j++){
                    std::swap(matrix[i][j], matrix[i][j+1]);
                }
            }
            printMatrix(matrix);
        }
    }
    return 0;
}