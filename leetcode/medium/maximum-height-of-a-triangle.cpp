class Solution {
public:
    int getMax(int a, int b){
        int level = 0;
        int i = 1;
        while (true) {
            if (i % 2 != 0) {  
                if (a >= i) {
                    a -= i;
                    level++;
                } else {
                    break;
                }
            } else {  
                if (b >= i) {
                    b -= i;
                    level++;
                } else {
                    break;
                }
            }
            i++;
        }
        return level;
    }

    int maxHeightOfTriangle(int red, int blue) {
        return std::max(getMax(red, blue), getMax(blue, red));
    }
};