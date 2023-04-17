#include <bits/stdc++.h>

using namespace std;

void selection_sort(int arr[], int n){
    int i,j, temp, min_index;

    for(int i=0; i<n-1; i++){
        min_index = i;

        for(j = i+1; j< n; j++){
            if(arr[min_index] > arr[j]){
                min_index= j;
            }
        }

        if(min_index != i){
            temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }

}

int main()
{
    int N = 5;
    int arr[5] = {34,43,5,3,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    selection_sort(arr, len);

    for (int i = 0; i < N; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}