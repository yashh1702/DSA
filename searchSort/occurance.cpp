// FIND FAST OCCURANCE AND LAST OCCURANCE AND FIND TOTAL OCCURANCE
#include<iostream>
using namespace std;

int findFirstOccurance(int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<=end){
        if(arr[mid] == target){

            // yaha hum first occurance ko store karege
            ans = mid;

            // left mai jaane hai kyuki pahla occurance mid khe left mai ho
            end = mid -1; 
        }
        else if(target > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid -1;
        }

        mid = start + (end-start)/2;
    }
    return ans;
}

int findLastOccurance(int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<=end){
        if(arr[mid] == target){

            // yaha hum first occurance ko store karege
            ans = mid;

            // right mai jaane hai kyuki last occurance mid khe right mai ho skta hai
            start = mid + 1; 
        }
        else if(target > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid -1;
        }

        mid = start + (end-start)/2;
    }
    return ans;
}

int findTotalOccurance(int arr[], int n, int target){
    
    int firstOcur = findFirstOccurance(arr, n ,target);
    int lastOccur = findLastOccurance(arr, n ,target);
    if(firstOcur && lastOccur == -1){
        return -1;
    }else{
        int totalOccur = lastOccur - firstOcur + 1;
        return totalOccur;
    }
   
}

int main(){
    int arr[] = {10,20,30,30,30,30,70,80,90};
    int target = 90;
    int n = 9;

    // int ansIndex = findFirstOccurance(arr, n ,target);
    // int ansIndex = findLastOccurance(arr, n ,target);
    int ans = findTotalOccurance(arr, n ,target);
    

    if(ans == -1){
        cout<<"Element not found " << endl;
    }
    else{
        cout<<"total Element :"<<ans<<endl;
    }
}