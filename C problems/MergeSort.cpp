#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int> unionResult;
        int i = 0, j = 0;
        
        // Traverse both arrays using two pointers
        while (i < n && j < m) {
            if (arr1[i] < arr2[j]) {
                unionResult.push_back(arr1[i]);
                i++;
            } else if (arr1[i] > arr2[j]) {
                unionResult.push_back(arr2[j]);
                j++;
            } else {
                unionResult.push_back(arr1[i]); // or arr2[j]
                i++;
                j++;
            }
        }
        
        // Add remaining elements of arr1, if any
        while (i < n) {
            unionResult.push_back(arr1[i]);
            i++;
        }
        
        // Add remaining elements of arr2, if any
        while (j < m) {
            unionResult.push_back(arr2[j]);
            j++;
        }
        
        // Return the union vector
        return unionResult;
    }
};

int main() {
    int T;
    cin >> T;
    
    while(T--){
        int N, M;
        cin >> N >> M;
        
        int arr1[N], arr2[M];
        
        for(int i = 0; i < N; i++){
            cin >> arr1[i];
        }
        
        for(int i = 0; i < M; i++){
            cin >> arr2[i];
        }
        
        Solution ob;
        vector<int> ans = ob.findUnion(arr1, arr2, N, M);
        
        for(int i: ans) {
            cout << i << ' ';
        }
        cout << endl;
    }
    
    return 0;
}
