#include<stdio.h>
#include<conio.h>

int linear_search(int *arr, int size, int number)
{
    for (int i = 0; i < size; i++)
    {
        // printf("%d ", arr[i]);
        if (arr[i] == number)
        {
            return i;
        }
    }
    return -1;
}

int binary_search(int *arr, int size, int number)
{
    int start = 0, end = size - 1, mid = (start + end)/2;
    if (number < arr[0] || number > arr[size - 1])
    {
        return -1;
    }
    else
    {
        while (number != arr[mid])
        {
            if (number < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
            mid = (start + end)/2;
        }
        return mid;
    }
}

void main()
{
    int size, arr[] = { 2,3,5,7,10,14,18,21,23,27,32,38,43,50 };
    int number = 43;
    size = (sizeof(arr)/sizeof(int));
    printf("It is present at index : %d", linear_search(arr, size, number));
    printf("\nIt is present at index : %d", binary_search(arr, size, number));
}
