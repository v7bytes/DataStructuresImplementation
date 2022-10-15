#include <stdio.h>
int main()
{
    printf("Enter the size of array\n");
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the element at index %d\n", i);
        scanf("%d", &arr[i]);
    }

    int low = 0;
    int high = size - 1; // indexing if size of array is 3 element index would be 0 1 2
    int tbf;

    printf("Enter number to be found\n");
    scanf("%d", &tbf);

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (tbf == arr[mid])
        {
            printf("Element found at index %d", mid);
            break;
        }
        if (tbf > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return 0;
}
