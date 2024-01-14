//Problem statement 1
//Find second largest element of an array

#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;
int findSecondLargest(int n, vector<int> &arr)
{
    int max_ele = INT_MIN;
    int second = INT_MIN;

    for (int i=0;i<arr.size();i++){
        if(arr[i]>max_ele){
            second=max_ele;
            max_ele=arr[i];
        }
        else if(arr[i]>second && arr[i]<max_ele){
            second=arr[i];

        }
    }
    if (second==INT_MIN){
        return -1;
    }
    else{
        return second;
    }
}

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Problem statement 2
//Task is to rotate the array to the left by 'k' steps. 'k' is non-negative.

vector<int> rotateArray(vector<int>arr, int k) {
    int n = arr.size();
    
    k = k % n;

    std::vector<int> rotatedArr(n);

    for (int i = 0; i < n; i++) {
        // Calculate the new index after rotation
        int newIndex = (i + n - k) % n;
        
        // Assign the value at the new index
        rotatedArr[newIndex] = arr[i];
    }

    return rotatedArr;
}

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Problem statement 3
// write a solution to check if it could become non-decreasing by modifying at most 1 element.


