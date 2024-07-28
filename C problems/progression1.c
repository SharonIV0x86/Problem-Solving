#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter progression elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int progression = 1;
    int diff = (arr[n-1] - arr[0]) / n;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - arr[i - 1] != diff)
        {
            progression = 0;
            break;
        }
    }
    if (progression)
    {
        printf("Sequence is in AP\n");
    }
    else
    {
        printf("Sequence is not in AP\n");
    }
    return 0;
}