#include <stdio.h>

int bubble_sort(int arr[], int n);
void swap(int *x, int *y);

int main(void)
{
    int i;
    int numbers[] = {5, 9, 1, 19, 7, 3, 13, 2, 9, 5};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    printf("Unsorted array : ");
    for(i = 0; i < n; i++)
        printf("%d ", numbers[i]);

    bubble_sort(numbers, n);
    printf("\n\nSorted array : ");
    for(i = 0; i < n; i++)
        printf("%d ", numbers[i]);


    return 0;
}

// bubble sort func
int bubble_sort(int arr[], int n)
{
    int i, j;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
        }
    }
}

// swap
void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}
