#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    int N;
    while(cin>>N && N != 0){

        int arr[N],temp,count = 0,count2=0, index_min;

        for (int i = 0; i < N; i++)
        {
            cin>>arr[i];
        }
      
        for (int i = 0; i < N-1; i++)
        {
            index_min = i;
            for (int j = i+1; j < N; j++)
            {
                if( arr[index_min] > arr[j]){
                    index_min = j;
                }
            }
            if(index_min != i){
                
                temp = arr[i];
                arr[i] = arr[index_min];
                arr[index_min] = temp;
                count++;
            }
            
        }

        cout<<"Minimum exchange operations : "<<count<<endl;
        cout<<"Minimum exchange operations : "<<count2<<endl;
       
        
    }
    
    
    return 0;
}