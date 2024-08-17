#include <bits/stdc++.h>
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, u, d;
        cin >> n >> u >> d;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int use = 1;
        int count = 1;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] <= arr[i + 1] && arr[i + 1] - arr[i] <= u) {
                count++;
            }
            else if (arr[i] > arr[i + 1] && arr[i] - arr[i + 1] <= d) {
                count++;
            }
            else if (arr[i] > arr[i + 1] && arr[i] - arr[i + 1] > d && use == 1) {
                count++;
                use--;
            }
            else {
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}