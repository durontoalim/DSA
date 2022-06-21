#include <bits/stdc++.h>

using namespace std;


#define endl "\n" 

int main(){

    int arr[] = {4,3,1,4,6,7,43,323,2};

    int exist_element = 7;

    int len = sizeof(arr)/ sizeof(arr[0]);

    int count = 0,index ;

    for(int i=0; i< len ; i++){
        if(arr[i] == exist_element){
            count++;
            index = i;
            break;
        }
    }

    if(count == 0){
        cout<<"No exist element."<<endl;
    }
    else cout<<"exist element index : "<<index<<endl;


    

    return 0;
}