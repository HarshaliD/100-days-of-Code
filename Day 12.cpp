//Problem Statement 29
//Kadane's Algo

#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    int sum=0;
    int maxi=INT_MIN;
    for (int i;i<n;i++){
        sum=sum+arr[i];
        maxi=max(sum,maxi);
        if(sum<0){
            sum=0;
        }
    }
    if (maxi<0){
        return 0;
    }
    return maxi;
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Problem Statement 30
//Dutch National Flag Algo

