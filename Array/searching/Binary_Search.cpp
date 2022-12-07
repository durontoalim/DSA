#include <bits/stdc++.h>

using namespace std;

int binary_search(int arr[], int N, int search_value){

    int mid,left = 0;
    int right = N-1;

    while(left <= right){

        mid = ( left + right ) / 2;

        if( arr[mid] == search_value ){
            return mid;
        }

        if(arr[mid] < search_value){
            left = mid + 1;
        }
        else{
            right = mid-1;
        }
    }
    return -1;
}

int main(){

    int n,search_value,t;

    cout<<"Total Number of value : \n";
    cin>>n;

    int arr[n];

    // input array
    cout<<"Please input value : \n";

    t = 0;
    while(n != t){
        cin>>arr[t];
        t++;
    }

    cout<<"Your search Value : \n";
    cin>>search_value;

    // binary search
    int result = binary_search(arr, n, search_value);

    cout<<result;

    

    return 0;
}