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

#Count the numbers and refill method
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{  
   int i, cnt0 = 0, cnt1 = 0, cnt2 = 0;
  
    // Count the number of 0s, 1s and 2s in the array
    for (i = 0; i < n; i++) {
        switch (arr[i]) {
        case 0:
            cnt0++;
            break;
        case 1:
            cnt1++;
            break;
        case 2:
            cnt2++;
            break;
        }
    }
  
    // Update the array
    i = 0;
  
    // Store all the 0s in the beginning
    while (cnt0 > 0) {
        arr[i++] = 0;
        cnt0--;
    }
  
    // Then all the 1s
    while (cnt1 > 0) {
        arr[i++] = 1;
        cnt1--;
    }
  
    // Finally all the 2s
    while (cnt2 > 0) {
        arr[i++] = 2;
        cnt2--;
    }
}


#Optimal solution - 3 pointer
#include <bits/stdc++.h> 
void sort012(int *a, int n)
{
   int low=0 , mid=0 , high=n-1;
   while(mid<=high){
       if(a[mid]==0){
           swap(a[low],a[mid]);
           low++;
           mid++;
       }
       else if(a[mid]==1){
           mid++;
       }
       else if(a[mid]==2){
           swap(a[high],a[mid]);
           high--;
       }
   }
   
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Problem Statement 31
//Moore's Voting Algorithm

#Better Solution
#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	unordered_map<int,int>hashtable;
    for(int i=0;i<n;i++){
        hashtable[arr[i]]++;
    }
    for(auto element : hashtable){
        if (element.second > n/ 2) {
            return element.first;
        }
    }
    return -1;
}

#Optimal Solution
#include <bits/stdc++.h>

int findMajorityElement(int v[], int n) {
    //size of the given array:
    int cnt = 0; // count
    int el; // Element

    //applying the algorithm:
    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            cnt = 1;
            el = v[i];
        }
        else if (el == v[i]) cnt++;
        else cnt--;
    }

    //checking if the stored element
    // is the majority element:
    int cnt1 = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == el) cnt1++;
    }

    if (cnt1 > (n / 2)) return el;
    return -1;
}


