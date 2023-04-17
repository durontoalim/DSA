#include <bits/stdc++.h>

using namespace std;

void insertion_sort(int arr[], int n){
    int item,i,j;

    for(i = 1; i < n; i++){
        item = arr[i];
        j = i-1;

        while (j >= 0 && arr[j] > item)
        {
            arr[j+1] = arr[j];

            j = j - 1;
        }

        arr[j+1] = item;
        
    }
}

int main()
{
    int N = 5;
    int arr[5] = {34,43,5,3,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    insertion_sort(arr, len);

    for (int i = 0; i < N; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}