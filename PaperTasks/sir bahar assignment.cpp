#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int comparison_count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            comparison_count++; 

            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Bubble Sort:\n";
    cout << "Sorted List: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << "\nTotal Comparisons: " << comparison_count << endl;
}


void selectionSort(int arr[], int n)
{
    int comparison_count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            comparison_count++;  

            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    cout << "\nSelection Sort:\n";
    cout << "Sorted List: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << "\nTotal Comparisons: " << comparison_count << endl;
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    int arr2[] = {64, 34, 25, 12, 22, 11, 90};

    selectionSort(arr2, n);

    return 0;
}

