#include <bits/stdc++.h>

bool checkPowerof8(std::vector<int> &arr, int size)
{
    int count = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] == 2){
            count++;
        }
    }
    if(count % 8 == 0){
        return true;
    }
    else{
        return false;
    }
}


int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int N;
        std::cin >> N;
        std::vector < int > vectuh;
        int inp;
        for (int i = 0; i < N; i++) {
            std::cin >> inp;
            vectuh.push_back(inp);
        }
        

        if (checkPowerof8(vectuh, N)) {
            std::cout << "YES\n";
        }
        else {
            std::cout << "NO\n";
        }
    }
    return 0;
}