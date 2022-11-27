
// def merge(K, first, second, third):
//     n1 = second - first + 1
//     n2 = third - second

//     x = [0] * (n1)
//     y = [0] * (n2)

//     for i in range(0, n1):
//         x[i] = K[first + i]

//     for j in range(0, n2):
//         y[j] = K[second + 1 + j]

//     i = 0
//     j = 0
//     k = first

//     while i < n1 and j < n2:
//         if x[i] <= y[j]:
//             K[k] = x[i]
//             i += 1
//         else:
//             K[k] = y[j]
//             j += 1
//         k += 1

//     while i < n1:
//         K[k] = x[i]
//         i += 1
//         k += 1

//     while j < n2:
//         K[k] = y[j]
//         j += 1
//         k += 1


// def mergeSort(K, start, finish):
//     if start < finish:
//         middle = start + (finish - start) // 2

//         mergeSort(K, start, middle)
//         mergeSort(K, middle + 1, finish)
//         merge(K, start, middle, finish)
//         print('\nelements that is checking and getting sorted ', array[middle], "and", array[middle + 1])
//         print('\n updated array', array)


#include<iostream>
using namespace std;

void printarray(int arr[], int size)
{
    for (int l = 0; l < size; l++)
        cout << arr[l] << " ";
        
    cout << endl;
}

void merge(int arr[], int l, int mid, int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    
    // creating temp arrays
    int a[n1];
    int b[n2];

    for(int i=0;i<n1;i++) 
        a[i]=arr[l+i];

    for(int i=0;i<n2;i++) 
        b[i]=arr[mid+1+i];
    
    int i=0;
    int j=0;
    int k=l;  //k element is for traversing the whole arraytp6kj7k6oh/6;k/

    while(i<n1 && j<n2)
    {
        if(a[i] < b[j]) 
            arr[k++] = a[i++];
        else 
            arr[k++] = b[j++];
    }
    while(i<n1) 
        arr[k++] = a[i++];

    while(j<n2) 
        arr[k++] = b[j++];
}

void mergesort(int arr[], int l, int r, int size)
{
    if(l<r)
    {
        int mid = (l+r)/2;
        mergesort(arr,l,mid,size);
        mergesort(arr,mid+1,r,size);
        merge(arr,l,mid,r);
        printarray(arr,size);
    }
}
