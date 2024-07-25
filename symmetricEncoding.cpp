#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <vector>
int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        std::string s;
        std::cin >> s;

        std::string r;
        std::vector<int> rFreq(256, -1);

        for(int i = 0; i < n; i++){
            if(rFreq[s[i]] == -1){
                r.push_back(s[i]);
            }
            rFreq[s[i]]++;
        }
        std::sort(r.begin(), r.end());
        int rSize = r.size();
        std::unordered_map<char, int> indexMap;
        for(int i = 0; i < rSize; i++){
            indexMap[(char)r[i]] = i;
        }
        std::string res;
        for(int i = 0; i < n; i++){
            int mirrorIndex = indexMap[(char)s[i]];
            mirrorIndex = rSize - mirrorIndex - 1;
            res.push_back(r[mirrorIndex]);
        }
        std::cout << res << "\n";
    }
}