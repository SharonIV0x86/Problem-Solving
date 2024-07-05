#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() { 
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<int> problems(n);
        for (int i = 0; i < n; i++) {
            cin >> problems[i];
        }
        sort(problems.begin(), problems.end());

        int maxLength = 1; 
        int currentLength = 1;

        for (int i = 1; i < n; i++) {
            if (problems[i] - problems[i - 1] <= k) {
                currentLength++;
            } else {
                currentLength = 1; 
            }
            maxLength = max(maxLength, currentLength);
        }
        int minRemovals = n - maxLength;
        cout << minRemovals << endl;
    }
    return 0;
}
