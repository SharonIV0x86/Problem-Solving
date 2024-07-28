#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int diff = (arr[n - 1] - arr[0]) / n;
    int missingTerms[n];
    int missingCount = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - arr[i - 1] != diff)
        {
            missingTerms[missingCount] = arr[i - 1] + diff;
            missingCount++;
        }
    }
    printf("Original sequence is:");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf(" with missing numbers: ");
    for (int i = 0; i < missingCount; i++)
        printf("%d ", missingTerms[i]);
    printf("\n");
}