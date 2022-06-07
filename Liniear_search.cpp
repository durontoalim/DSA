#include <bits/stdc++.h>

using namespace std;


int linear_search( int arr[], int N , int search_element ){
    
    int i;

    for(i=0; i< N; i++){
        if(arr[i] == search_element){
            return i;
            break;
        }
    }
    i = -1;

    return i;

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

    int result = linear_search(arr ,n, search_value);

    (result == -1) ? cout<<"Element is not present in array.\n" : cout<<"Element is present in array.\n" <<"Index : "<<linear_search(arr ,n, search_value);

    return 0;
}