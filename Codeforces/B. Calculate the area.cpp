#include <iostream>
#include <cmath>

int main() {
    int area;
    std::cin >> area;
    
    int length = 1, width = area;  

    for (int i = 1; i <= sqrt(area); ++i) {
        if (area % i == 0) { 
            int possibleWidth = area / i;
            length = i;
            width = possibleWidth;
        }
    }

    std::cout << length << " " << width << "\n";
    return 0;
}
