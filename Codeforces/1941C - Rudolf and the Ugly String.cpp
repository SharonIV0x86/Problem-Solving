#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
    long long T;
    std::cin >> T;

    for (long long c = 0; c < T; c++)
    {
        long long n;
        std::cin >> n;
        std::string str;
        std::cin >> str;

        std::vector<long long> vectuh;
        for (std::string aeSul : {"mapie", "pie", "map"})
        { // combining initialization and searching
            for (size_t pos = 0; (pos = str.find(aeSul, pos)) != std::string::npos;)
            {
                str[pos + aeSul.length() / 2] = '?';
                vectuh.push_back(pos + aeSul.length() / 2);
            }
        }
        std::cout << vectuh.size() << std::endl;
    }
    return 0;
}

//!!Approach 2 fixed version of approach 3 i believe
// #include <iostream>
// #include <string>

// int countSubstr(const std::string& str, const std::string& sub) {
//     int count = 0;
//     size_t pos = 0;
//     while ((pos = str.find(sub, pos)) != std::string::npos) {
//         ++count;
//         pos += sub.length();
//     }
//     return count;
// }

// int main() {
//     int T;
//     std::cin >> T;
//     while (T--) {
//         int N;
//         std::cin >> N;
//         std::string str;
//         std::cin >> str;

//         int countMAP = countSubstr(str, "map");
//         int countPIE = countSubstr(str, "pie");
//         int countMAPIE = countSubstr(str, "mapie");

//         // Adjust the count for overlapping occurrences
//         countMAPIE -= countPIE; // subtract the count of "pie" as it's counted twice
//         countMAPIE -= countMAP; // subtract the count of "map" as it's counted twice
            //subtracting from MAPIE as is is a subset of map and pie both
//         std::cout << countMAP + countPIE + countMAPIE << std::endl;
//     }
//     return 0;
// }










//!!!Approach 3, fails, written by me lol
// #include <iostream>
// #include <string>

// int countSubstr(const std::string& str, const std::string& sub){
//     int count = 0;
//     size_t pos = 0;
//             //find substr from pos
//     while((pos = str.find(sub, pos)) != std::string::npos){
//         ++count;
//         pos += sub.length();
//     }
//     return count;
// }

// int main(){
//     int T;
//     std::cin >> T;
//     while(T--){
//         int N;
//         std::cin >> N;
//         std::string sub1 = "map";
//         std::string sub2 = "pie";
//         std::string sub3 = "mapie";
//         std::string str;
//         std::cin >> str;

//         int countMAP = countSubstr(str, sub1);
//         int countPIE = countSubstr(str, sub2);
//         int countMAPIE = countSubstr(str, sub3);
//         std::cout << countMAP + countPIE + countMAPIE<< std::endl;
//         //fails for mapie.
//     }
//     return 0;
// }