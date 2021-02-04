#include <iostream>
using namespace std;
void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}
void Merged(int arr[], int l, int mid, int h)
{
    int n1 = mid - l + 1;
    int n2 = h - mid;
    int L[n1];
    int R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }
}
void MergeSort(int arr[], int l, int h)
{
    int mid;
    if (l >= h)
    {
        return;
    }
    mid = (l + (h - 1)) / 2;
    MergeSort(arr, l, mid);
    MergeSort(arr, mid + 1, h);
    Merged(arr, l, mid, h);
}
int main()
{
    int arr[] = {5, 4, 6, 2, 1, 3, 7};
    MergeSort(arr, 0, 6);
    printArray(arr, 7);
    return 0;
}