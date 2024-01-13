//Problem Statement 21
//Pair Sum

#include <bits/stdc++.h> 
using namespace std;

int pairSum(vector<int> &arr, int n, int target) {
    int i = 0;
    int j = n - 1;
    int pairCount = 0;

    while (i < j) {
        int currentSum = arr[i] + arr[j];

        if (currentSum == target) {
            pairCount++;
            i++;
            j--;
            // Skip duplicates to ensure unique pairs
            while (i < j && arr[i] == arr[i - 1]) {
                i++;
            }
            while (i < j && arr[j] == arr[j + 1]) {
                j--;
            }
        } else if (currentSum < target) {
            i++;
        } else {
            j--;
        }
    }

    return (pairCount == 0) ? -1 : pairCount;
}

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Problem Statement 22
//Move All Negative Numbers To Beginning And Positive To End

#include <bits/stdc++.h> 
using namespace std;

vector<int> separateNegativeAndPositive(vector<int> &nums) {
    int i = 0;
    int j = nums.size() - 1;

    while (i <j) {
        if(nums[i]<0){
            i++;
        }
        else if(nums[j]>0){
            j--;
        }
        else{
            swap(nums[i],nums[j]);
        }
        
    }
    return nums;
}

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
