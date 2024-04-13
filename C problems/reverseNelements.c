//Write a function to reverse only first n elements of an array

#include <stdio.h>

int main(){
    int N;
    printf("Enter n: ");
    scanf("%d", &N);
    int arr[N];

    printf("Enter array elements: ");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int n;
    printf("Enter the index to reverse upto: ");
    scanf("%d", &n);

    for (int i = 0; i < n/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    printf("Final array: \n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
        
}