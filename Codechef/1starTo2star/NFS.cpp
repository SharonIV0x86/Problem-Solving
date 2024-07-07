#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        double U, V, A, S;
        cin >> U >> V >> A >> S;
        if(U == V){
            std::cout << "YES\n";
            continue;
        }
        double value = pow(U, 2) - (2.0 * A * S);

        if(value < 0) {
            cout << "YES\n"; 
            continue;
        }
        double newVelo = sqrt(value);

        if(newVelo <= V) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
