#include <iostream>
#include <algorithm>
using namespace std;

int countWaysToWin(int a1, int a2, int b1, int b2) {
    int wins = 0;

    if (a1 > b1 && a2 > b2) wins++;
    if (a1 > b2 && a2 > b1) wins++;
    if (a2 > b1 && a1 > b2) wins++;
    if (a2 > b2 && a1 > b1) wins++;

    return wins;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        cout << countWaysToWin(a1, a2, b1, b2) << endl;
    }
    return 0;
}
