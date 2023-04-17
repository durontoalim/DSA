#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n = 7;

    int obj[7] = {1,2,3,4,5,6,7};
    int profit[7] = {12, 5, 16, 7, 9, 11, 6};
    int weight[7] = {3,1,4,2,9,4,3};
    double max_profit[10]; 
    double subMax_profit[10]; 
    for (int i = 0; i < n; i++)
    {
        max_profit[i] = profit[i] / weight[i];
        subMax_profit[i] = profit[i] / weight[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(subMax_profit[i] < subMax_profit[j]){
                subMax_profit[i] = subMax_profit[j];
            }
        }
        
    }  
    int profit_result = 0;
    int remaining_weight = 15;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(remaining_weight == 0) break;
            if((int)subMax_profit[i] == max_profit[j]){
                if(remaining_weight - weight[j] < 0){
                    profit_result += (max_profit[j]*remaining_weight);
                    int rem = remaining_weight;
                    remaining_weight -= rem;
                    profit[j] = -1;
                    break;
                }
                else{
                    profit_result += profit[j];
                    remaining_weight -= weight[j];
                    profit[j] = -1;
                    break;
                }
                
            }
        }
        
    }

    printf("Profit : %d",profit_result);
    
    

    return 0;
}