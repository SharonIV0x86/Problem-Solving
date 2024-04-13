// Write a _program to modify the elements of an array such that the last element becomes the first
// element of the array and all other elements are shifted to right.
// 1 2 3 4 5 6 7 8 9  - 7 9 1 2 3 4 5 6 7 8

#include <stdio.h>

void reverse(int arr[], int start, int end){
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    reverse(arr, 0, n - 1);
    reverse(arr, 1, n - 1);
    printf("Final array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;


}