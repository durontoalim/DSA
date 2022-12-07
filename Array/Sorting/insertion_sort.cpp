#include <bits/stdc++.h>

using namespace std;

void insertion_sort(int arr[], int n);

int main()
{
    int arr[] = {2,9,3,5,7,1,3,9};

    int len = sizeof(arr)/sizeof(arr[0]);

    insertion_sort(arr, len);

    for (int i = 0; i < len ; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    

    return 0;
}



void insertion_sort(int arr[], int n){

    int item, j ;

    for(int i=1; i < n; i++){
        item = arr[i];

        j = i -1 ;

        while (j >= 0 && arr[j] > item )
        {
            /* code */
            arr[j+1] =  arr[j];
            j = j - 1;
        }
        
        arr[j+1] = item;
    }
}