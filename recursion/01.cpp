#include<iostream>
#include<limits.h>
#include<vector>

using namespace std;

void evenNumbers(int arr[], int size,int index, vector<int>&ans){
    if(index >= size){
        return;
    }

    if(arr[index] % 2 == 0){
        ans.push_back(arr[index]);
    }

    evenNumbers(arr, size,index+1, ans);
    
}

int main(){
    int arr[] = {10,11,12,13,14};
    int size = 5;
    int index = 0;
    vector<int> ans;
    evenNumbers(arr, size,index, ans); 

    for(int num: ans){
        cout<<num<<" ";
    }
}