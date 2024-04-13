#include <stdio.h>
//Write a function to reverse only first n elements of an array

// Function to reverse the first n elements of an array
void reverseFirstN(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        // Swap elements at start and end positions
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move pointers towards each other
        start++;
        end--;
    }
}

int main() {
    int N;
    printf("Enter n: ");
    scanf("%d", &N);
    int arr[N];

    printf("Enter array elements: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int n;
    printf("Enter the index to reverse up to: ");
    scanf("%d", &n);

    reverseFirstN(arr, n);

    printf("Final array: \n");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
