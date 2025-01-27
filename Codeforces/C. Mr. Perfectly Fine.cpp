#include <iostream>
#include <utility>
#include <vector>
#include <climits>
int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        std::vector<std::pair<int, std::string>> viktor(n);
        for (int i = 0; i < n; i++)
        {
            std::cin >> viktor[i].first >> viktor[i].second;
        }
        int minTimeSkill1 = INT_MAX;
        int minTimeSkill2 = INT_MAX;
        int minTimeSkillall = INT_MAX;
        int temp1 = 0, temp2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (viktor[i].second == "11")
            {
                minTimeSkillall = std::min(minTimeSkillall, viktor[i].first);
            }
            else if (viktor[i].first < minTimeSkill1 && viktor[i].second == "10")
            {
                minTimeSkill1 = std::min(viktor[i].first, minTimeSkill1);
            }
            else if (viktor[i].first < minTimeSkill2 && viktor[i].second == "01")
            {
                minTimeSkill2 = std::min(viktor[i].first, minTimeSkill2);
            }
        }
        int result = INT_MAX;
        if(minTimeSkillall != INT_MAX){
            result = minTimeSkillall;
        }
        
        if(minTimeSkill1 != INT_MAX && minTimeSkill2 != INT_MAX){
            result = std::min(result, (minTimeSkill1 + minTimeSkill2));
        }

        if(result == INT_MAX){
            std::cout << "-1\n";
        }else{
            std::cout << result << "\n";
        }
    }
    return 0;
}