// Write a program to accept n numbers in array and display the addition of all even numbers and
// multiplication of all odd numbers. 

#include <stdio.h>

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int evenAdd = 0;
    int mulOdd = 1;

    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            evenAdd += arr[i];
        }
        else{
            mulOdd *= arr[i];
        }
    }
    printf("Addition of even elements: %d \n", evenAdd);
    printf("Multiplication of odd elements: %d \n", mulOdd);
    
    return 0;
}