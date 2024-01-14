//Problem Statement 21
// Container With Most Water

int maxArea(vector<int>& height) {
        int ans=0;
        int left=0;
        int right=height.size()-1;
        while (left<=right){
            ans=max(min(height[left],height[right])*(right-left),ans);
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }
        return ans;
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Problem Statement 22
// Is SubSequence

#Brute Force 

#include <bits/stdc++.h> 
bool isSubSequence(string str1, string str2) {
    if (str1 == str2) {
        return true;
    }

    int n = str1.size();
    int m = str2.size();
    int count = -1;
    int c = 0;

    for (int i = 0; i < n; i++) {
        int j = count + 1; // Start searching from the position after the previous match

        while (j < m) {
            if (str2[j] == str1[i]) {
                count = j;
                c++;
                break; // Move to the next character in str1 after a match is found
            }
            j++;
        }
    }

    return (c == n);
}


#2 pointer approach

#include <bits/stdc++.h> 
bool isSubSequence(string str1, string str2) {
    int p1=0;
    int p2=0;
    while(p1<str1.size() and p2<str2.size()){
        if(str1[p1]==str2[p2]){
            p1++;
        }
        p2++;
    }
    if(p1==str1.size()){
        return true;
    }
    return false;
}
