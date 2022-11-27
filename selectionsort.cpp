// def selection_sort(arr):
//     for i in range(0,len(arr) - 1):
//         cur_min_idx = i
//         for j in range(i + 1, len(arr)):
//             if arr[j] < arr[cur_min_idx]:
//                 cur_min_idx = j
//         print("Element that is changing ",arr[i],",", arr[cur_min_idx])

//         arr[i], arr[cur_min_idx] = arr[cur_min_idx], arr[i]
//         print("THE Array will be ",arr)


#include<iostream>
using namespace std;

void print(int arr[100], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int selection_sort (int arr[] , int size )
{
    for (int i = 0; i < size; i++)
    {
        int min_index = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_index] )
            {
                min_index = j;
            }
        }

        cout<<"Element that is changing "<<arr[i]<<","<<arr[min_index];

        swap(arr[i] , arr[min_index]);

        print(arr,size);
        cout<<endl;
    }
}

int main()
{
    int size, arr[100];
    cout << "Enter the size of the array: " << endl;
    cin >> size; 

    cout << "Enter the elements in the array: " << endl; 
    for (int k = 0; k < size; k++)
    {
        cin >> arr[k];
    }

    selection_sort(arr, size);
    
    cout << "After sorting the elements are: " << endl;

    print(arr, size);
}
