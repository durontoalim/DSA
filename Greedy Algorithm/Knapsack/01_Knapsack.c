#include<stdio.h>
 
int Max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}

//here m=capacity , n=length , p=profit , wt = weight     
int knapsack(int m,int n,int p[],int wt[])                                                            
{                                                           
    int k[n+1][m+1];  //k[4][6]                             
                                                    
    for(int i=0;i<=n;i++)                                     
    {
        for(int w=0;w<=m;w++)
        {
            if(i==0 || w==0)
                k[i][w]=0;
            else if(wt[i]<=w)
            {
                k[i][w]=Max(k[i-1][w], p[i] + k[i-1][w - wt[i]]);  
            }
            else
                k[i][w]=k[i-1][w];
        }
    }
    return k[n][m];
}
 
int main()
{
    int profit[]={60,100,120};
    int weight[]={10,20,30};
    int n = 2; //count start from 0
    int capacity = 50;
    int maxP;
    maxP = knapsack(capacity,n,profit,weight);
    printf("Max Profit: %d\n",maxP);

    return 0;
}