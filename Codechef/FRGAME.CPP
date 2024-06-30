#include <bits/stdc++.h>
using namespace std;
// https://www.codechef.com/problems/FRGAME?tab=statement
int main() {
	int t;
	std::cin >> t;
	while(t--){
	    int nitin,sobhagya,ritik,satyarth;
	    std::cin >> nitin >> sobhagya >> ritik >> satyarth;
	    if(nitin >= sobhagya){
	        sobhagya += ritik;
	    }else{
	        nitin += ritik;
	    }
	    
	    if(nitin >= sobhagya){
	        sobhagya += satyarth;
	    }else{
	        nitin += satyarth;
	    }
	    
	    if(nitin >= sobhagya){
	        std::cout << "N\n";
	    }else{
	        std::cout << "S\n";
	    }
	}
    return 0;
}
