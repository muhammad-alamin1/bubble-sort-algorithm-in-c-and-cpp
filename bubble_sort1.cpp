#include <iostream>
#include <conio.h>
using namespace std;


int bubble_sort(int A[], int n);

int main()
{
    int n, i;

    cout << "Enter total array elements: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter array elements: " << endl;
    for(i = 0; i < n; i++)
    {
        cout << "Enter array["<<i <<"]"<< " value : ";
        cin >> arr[i];
    }

    cout <<endl<< "Unsorted array: ";
    for(i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // call sort func
    bubble_sort(arr, n);
    cout <<endl<< "Sorted array: ";
    for(i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }


    getch();
}

int bubble_sort(int A[], int n)
{
    int i, j, temp;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(A[j] > A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

