#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> input(n);
        map<int, int> mpp;
        set<int> disqualified;

        for (int i = 0; i < n; i++) {
            cin >> input[i];
            if (i + 1 == input[i]) {
                disqualified.insert(i + 1);
            }
        }

        for (int i = 0; i < n; i++) {
            if (disqualified.find(i + 1) == disqualified.end() && disqualified.find(input[i]) == disqualified.end()) {
                mpp[input[i]]++;
            }
        }

        int eligible = 0;
        for (const auto& mp : mpp) {
            if (mp.second >= k) {
                eligible++;
            }
        }

        cout << eligible << "\n";
    }
}
