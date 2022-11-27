#include<iostream>
#include<vector>
using namespace std;


// int linearsearch(int size , int arr[], int n)
// {
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]==n)
//         {
//             return i;
//         }
//     }
//         return -1;   
// }


int binary_search(const vector<int>& arr, const int& x) 
{
	int low = 0, high = arr.size();
	while (low <= high) 
    {
		int mid = ((low + high) / 2);
		if (arr[mid] > x) 
        { 
            high = mid - 1; 
        }
		else if (arr[mid] < x) 
        { 
            low = mid + 1; 
        }
		else 
        { 
            return mid; 
        }
	}
	return -1;
}