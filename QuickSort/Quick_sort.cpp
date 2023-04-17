#include <bits/stdc++.h>

using namespace std;

int Partition(int arr[], int left, int right){
    int i,j;
    int pivot = arr[left];
    i = left, j = right;

    while (i < j)
    {
        while(arr[i] <= pivot) i++;
        while(arr[j] > pivot) j--;
        if(i < j) swap(arr[i],arr[j]);
    }
    swap(arr[left],arr[j]);
    return j;
}

void QuickSort(int arr[], int left, int right){
    if(left < right){
        int j = Partition(arr,left,right);
        QuickSort(arr,left, j-1);
        QuickSort(arr,j+1,right);
    }
}

int main()
{
    int arr[] = {5,6,876,34,65,7,68,65,3};
    int len = sizeof(arr)/sizeof(arr[0]);

    QuickSort(arr,0,len-1);

    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}