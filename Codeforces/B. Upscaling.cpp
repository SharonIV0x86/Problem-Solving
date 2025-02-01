#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        std::vector<char> row;
        std::vector<char> reversedRow;
        std::vector<std::vector<char>> result;
        bool push = true;

        for (int i = 0; i < n; i++)
        {
            if (push)
            {
                row.push_back('#');
                row.push_back('#');
                push = false;
            }
            else
            {
                row.push_back('.');
                row.push_back('.');
                push = true;
            }
        }
        push = true;
        for(int i = 0; i < n; i++){
            if(push){
                reversedRow.push_back('.');
                reversedRow.push_back('.');
                push = false;
            }else{
                reversedRow.push_back('#');
                reversedRow.push_back('#');
                push = true;
            }
        }
        push = true;
        for (int i = 0; i < n; i++)
        {
            if (push)
            {
                result.push_back(row);
                result.push_back(row);
                push = false;
            }
            else
            {
                result.push_back(reversedRow);
                result.push_back(reversedRow);
                push = true;
            }
        }
        for (auto row : result)
        {
            for (char ch : row)
            {
                std::cout << ch;
            }
            std::cout << "\n";
        }
        // for (int i = 0; i < 2 * n; i++)
        // {
        //     for (int j = 0; j < 2 * n; j++)
        //     {
        //         std::cout << result[i][j];
        //     }
        //     std::cout << "\n";
        // }
    }
    return 0;
}