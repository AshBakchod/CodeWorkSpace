#include <stdbool.h>
#include <stdio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// Bubble Sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
    printf("Array after Bubble Sort : ");
    printArray(arr, n);
}
// Selection Sort
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        if (min_idx != i)
            swap(&arr[min_idx], &arr[i]);
    }
    printf("Array after Selection Sort : ");
    printArray(arr, n);
}
// Insetion Sort
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    printf("Array after Insertion Sort : ");
    printArray(arr, n); 
}
// Merge Sort
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergehelper(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergehelper(arr, l, m);
        mergehelper(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}
void mergeSort(int arr[], int n)
{
    mergehelper(arr, 0, n - 1);
    printf("Array after Merge Sort : ");
    printArray(arr, n);
}

// Quick Sort
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickhelper(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickhelper(arr, low, pi - 1);
        quickhelper(arr, pi + 1, high);
    }
}
void quickSort(int arr[], int n)
{
    quickhelper(arr, 0, n - 1);
    printf("Array after Quick Sort : ");
    printArray(arr, n);
}
// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr1[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    bubbleSort(arr1, n);
    int arr2[] = {12,3,45,2,8,9,0};
    n = sizeof(arr2) / sizeof(arr2[0]);
    selectionSort(arr2,n);
    int arr3[] = {1,2,3,5,6,7,4};
    n = sizeof(arr3) / sizeof(arr3[0]);
    insertionSort(arr3,n);
    int arr4[] = {5,2,5,67,42,2,56,6};
    n = sizeof(arr4) / sizeof(arr4[0]);
    mergeSort(arr4,n);
    int arr5[] = {6,3,3,6,7,43,6,7};
    n = sizeof(arr5) / sizeof(arr5[0]);
    quickSort(arr5,n);
    return 0;
}
