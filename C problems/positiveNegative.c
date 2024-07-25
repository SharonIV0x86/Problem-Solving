#include <stdio.h>

// Function to shift elements to the right
void shiftRight(int arr[], int start, int end) {
    int temp = arr[end];
    for (int i = end; i > start; i--) {
        arr[i] = arr[i - 1];
    }
    arr[start] = temp;
}

// Function to rearrange the array
void rearrange(int arr[], int n) {
    int pos = 0;

    // Move negative elements to the beginning
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != pos) {
                shiftRight(arr, pos, i);
            }
            pos++;
        }
    }
}
// -1, 2, -4, -3, 5, 6, 7, -10, -9, 33
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    rearrange(arr, n);

    printf("Final array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// #include <stdio.h>

// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main()
// {
//     int n;
//     printf("Enter n: ");
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     // int l = 0;
//     // int r = n - 1;
//     // for (int l = 0; l <= r; l++)
//     // {
//     //     if (arr[l] > 0 && arr[r] < 0)
//     //     {
//     //         swap(&arr[r], &arr[l]);
//     //         l++;
//     //         r--;
//     //     }else if(arr[l] < 0 && arr[r] < 0){
//     //         l++;
//     //     }else{
//     //         r--;
//     //     }
//     // }
//     printf("Final array: ");
//     for(int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
// }