#include<stdio.h>

int binarySearch(int arr[], int key, int low, int high)
{
    while(low <= high)
    {
         int mid = (low + high) / 2;

        if(key == arr[mid])
            return mid + 1;
        else if(key > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}
void insertion(int arr[], int n)
{
    int i, j, key, pos;
    for(i = 1; i < n; i++)
    {
        key = arr[i];
        pos = binarySearch(arr, key, 0, i - 1);
        for(j = i - 1; j >= pos; j--)
        {
            arr[j + 1] = arr[j];
        }

    arr[pos] = key;
    }
}

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
int main()
{
    int arr[] = {25, 10, 30, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertion(arr, n);
    printf("Sorted array:\n");
    printArray(arr, n);
    return 0;
}