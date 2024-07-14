class Solution {
public:
string getSmallestString(string s) {
        std::string res = s;
        for(int i = 1; i <= s.size() -1; i++){
            int leftDigit = s[i] - '0';
            int rightDigit = s[i-1] - '0';

            if((rightDigit > leftDigit) && (leftDigit % 2 == 0 && rightDigit % 2 == 0)){
                std::swap(s[i], s[i-1]);
                break;
            }else if((rightDigit > leftDigit) && (leftDigit % 2 != 0 && rightDigit % 2 != 0)){
                std::swap(s[i], s[i-1]);
                break;
            }
        }
        if(s < res){
            return s;
        }
            return res;
        
    }
};