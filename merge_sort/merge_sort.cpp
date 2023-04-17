#include <bits/stdc++.h>
using namespace std;


void merge(int arr[], int left, int mid, int right){
    int i,j,k;
    int left_size = mid-left+1;
    int right_size = right - mid;
    int arr_left[left_size], arr_right[right_size];

    for (i = 0; i < left_size; i++)
    {
        arr_left[i] = arr[left+i];
    }
    for (j = 0; j < right_size; j++)
    {
        arr_right[j] = arr[mid+ 1 + j];
    }

    i = 0;
    j = 0;
    k = left;

    while ( i < left_size && j < right_size)
    {
        if(arr_left[i] <= arr_right[j]){
            arr[k] = arr_left[i];
            i++;
        }
        else{
            arr[k] = arr_right[j];
            j++;
        }
        k++;
    }
    
    while (i < left_size)
    {
        arr[k] = arr_left[i];
        i++;
        k++;
    }
    while (j < right_size)
    {
        arr[k] = arr_right[j];
        j++;
        k++;
    }
    
    
}

void merge_sort(int arr[], int left, int right){

    if(left < right){

        int mid = left + (right-left) / 2;
        merge_sort(arr,left,mid);
        merge_sort(arr,mid+1, right);
        merge(arr, left, mid, right);
    }

}


int main()
{
    int N = 5;
    int arr[N] = {300,5,7,2,675};
    merge_sort(arr,0,N-1);

    for (int i = 0; i < N; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}