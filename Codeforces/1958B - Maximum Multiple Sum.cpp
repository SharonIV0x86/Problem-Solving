    #include <iostream>
     
    int main(){
        int t;
        std::cin >> t;
        while(t--){
            int n;
            std::cin >> n;
            if(n == 3){
                std::cout << "3\n";
            }else{
                std::cout << "2\n";
            }
        }
        return 0;
    }