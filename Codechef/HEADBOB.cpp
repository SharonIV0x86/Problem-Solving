#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--){
	    int N;
	    std::cin >> N;
	    std::string gesture;
	    std::cin >> gesture;
        bool notSure = true;

        for(int i = 0; i < gesture.size(); i++){
            if(gesture[i] == 'I'){
                std::cout << "INDIAN\n";
                notSure = false;
                break;
            }
            else if(gesture[i] == 'Y'){
                std::cout << "NOT INDIAN\n";
                notSure = false;
                break;
            }
            
        }
	    if(notSure){
	        std::cout << "NOT SURE\n";
	    }

	}
    return 0;
}
