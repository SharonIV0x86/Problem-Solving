// Write a program to accept n numbers and display the sum of the highest and lowest numbers.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int maxNum = arr[0];
    int minNum = arr[0];

    for(int i = 0; i < n; i++){
        if(minNum > arr[i]){
            minNum = arr[i];
        }
        if(maxNum < arr[i]){
            maxNum = arr[i];
        }
    }
    printf("\nMax Element: %d , Min element: %d \n", maxNum, minNum);
    printf("\nSum of max and min element is: %d", (maxNum + minNum));
    return 0;
}