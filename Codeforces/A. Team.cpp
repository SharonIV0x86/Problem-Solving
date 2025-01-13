#include <iostream>
#include <vector>
typedef struct Problems
{
    bool petya;
    bool vasya;
    bool tonya;
} pb;

int main()
{
    int n;
    std::cin >> n;
    std::vector<pb> problems(n);
    int countProblems = 0;
    for(auto& [first, second, third]: problems){
        std::cin >> first >> second >> third;
        if((first + second + third) >= 2)
            countProblems++;
    }
    std::cout << countProblems << "\n";
    return 0;

}
// #include <iostream>
// #include <vector>
// typedef struct Problems
// {
//     bool petya;
//     bool vasya;
//     bool tonya;
// } pb;

// int main()
// {
//     int n;
//     std::cin >> n;
//     std::vector<pb> problems(n);
//     int solvedProblems = 0;
//     for (auto &pb : problems)
//     {
//         std::cin >> pb.petya >> pb.vasya >> pb.tonya;
//         if (pb.petya + pb.vasya + pb.tonya >= 2)
//             solvedProblems++;
//     }
//     std::cout << solvedProblems << "\n";
// }
