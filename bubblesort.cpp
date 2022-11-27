// def bubblesort(elements):
//     for n in range(len(elements) - 1, 0, -1):
//         for i in range(n):
//             if elements[i] > elements[i + 1]:
//                 print("Then the array will be ", array)
//                 print("Element that is changing ", array[i],",", array[i + 1])
//             elements[i], elements[i + 1] = elements[i + 1], elements[i]

#include <iostream>
using namespace std;


void bubble(int arr[100], int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[i])
            {
                swap(arr[i] , arr[j]);
                // int temp=arr[i];
                // arr[i]=arr[j];
                // arr[j]=temp;
                // cout<<"Array after swapping : "<<endl;
                
            }
        }
        
        
    }
}