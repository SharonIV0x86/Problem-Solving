#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
  int T;
  cin >> T;
  int A, B;

  while (T--) {
    cin >> A;
    cin >> B;

    if((A - B) > 10){
        std::cout << "0\n";
    }
    else{
        std::cout << std::ceil((10.0 - (A - B)) / 3) << std::endl;
    }
  }

  return 0;
}
