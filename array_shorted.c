#include <stdio.h>

int main()
{
    int arr[] = {4, 5, 6, 7, 0, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxLen = 1;
    int currLen = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            currLen++;
        }
        else
        {
            if (currLen > maxLen)
                maxLen = currLen;
            currLen = 1;
        }
    }

    if (currLen > maxLen)
        maxLen = currLen;

    printf("Length of longest sorted subarray = %d\n", maxLen);

    return 0;
}
