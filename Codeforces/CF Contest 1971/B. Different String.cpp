#include <iostream>
#include <unordered_map>

void solve() {
    std::string s;
    std::cin >> s;
    bool ok = false;
    for (int i = 1; i < (int)(s.length()); i++) {
        if (s[i] != s[0]) {
            std::swap(s[i], s[0]);
            ok = true;
            break;
        }
    }   
    if (!ok) {
        std::cout << "NO\n";
        return;
    }
    std::cout << "YES\n";
    std::cout << s << '\n';
}

int main() {
    int tt; 
    std::cin >> tt; 
    for (int i = 0; i < tt; i++) {
        solve();
    }
    return 0;
}

//FAILED APPROACH FOR SOME MYTERIOUS REASON??
// #include <iostream>
// #include <unordered_map>
// int main()
// {
//     int t;
//     std::cin >> t;
//     while (t--)
//     {
//         std::string s;
//         std::cin >> s;
//         std::unordered_map<char, int> mpp;
//         for (char ch : s)
//         {
//             mpp[ch]++;
//         }
//         bool possible = true;
//         for (const auto &[first, second] : mpp)
//         {
//             if (second == s.size())
//             {
//                 possible = false;
//                 break;
//             }
//         }
//         if (possible)
//         {
//             std::cout << "YES\n";
//             if (s.size() > 1)
//             {
//                 char temp = s[0];
//                 s[0] = s[1];
//                 s[1] = temp;
//                 std::cout << s << "\n";
//             }
//         }
//         else
//         {

//             std::cout << "NO\n";
//         }
//     }
//     return 0;
// }