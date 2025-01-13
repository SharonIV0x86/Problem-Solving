#include <iostream>

int main(){
    int inX, inY;
    std::string direction;
    std::cin >> inX >> inY;
    std::cin >> direction;
    int posX = inX;
    int posY = inY;
    for(int i = 0; i < direction.length(); i++){
        if(direction[i] == 'U')
            posY += 1;
        else if(direction[i] == 'D')
            posY -= 1;
        else if(direction[i] == 'L')
            posX -= 1;
        else if(direction[i] == 'R')
            posX += 1;
    }
    std::cout << posX << " " << posY << "\n";
    return 0;
       
}