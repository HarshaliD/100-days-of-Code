//Problem Statement 25
//Insertion Sort

#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    int temp = 0;
    for(int i=0;i<n;i++){
        temp=arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Problem Statement 26
//Selection Sort

#include <bits/stdc++.h> 
void selectionSort(vector<int>& a, int n)
{   
    for(int i=0;i<n;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(a[min]>a[j]){
                min = j;
            }
        }
        if(min!=i){
            swap(a[i],a[min]);
        }
    }
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Problem Statement 27
//Bubble Sort

void bubbleSort(vector<int>& a, int n)
{   
    for (int i = 0; i < n; ++i) {
        // Flag to check if any swaps were made in this pass
        bool swapped = false;

        for (int j = 0; j < n - i - 1; ++j) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                swapped = true;
            }
        }

        // If no swaps were made, the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Problem Statement 28
//Quick Sort

#include <bits/stdc++.h>

int partition(vector<int>& a, int l, int h) {
    int pivot = a[h];
    int i = l - 1;

    for (int j = l; j < h; ++j) {
        if (a[j] <= pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }

    swap(a[i + 1], a[h]);
    return i + 1;
}

void quickSort(vector<int>& arr, int l, int h) {
    if (l < h) {
        int pivot = partition(arr, l, h);

        // Recursive calls to sort the subarrays
        quickSort(arr, l, pivot - 1);
        quickSort(arr, pivot + 1, h);
    }
}

vector<int> quickSort(vector<int> arr) {
    int n = arr.size();
    
    // Call the sorting function with the range of the entire array
    quickSort(arr, 0, n - 1);

    return arr;
}
