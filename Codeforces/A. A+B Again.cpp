#include <iostream>
int main(){
    int t;
    std::cin >> t;
    while (t--)
    {
        int num;
        std::cin >> num;
        int sum = 0;
        int temp = num;
        while(temp != 0){
            int rem = temp % 10;
            sum += rem;
            temp = temp / 10;
        }
        std::cout << sum << "\n";
    }
    
}