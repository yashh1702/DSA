#include<iostream>
using namespace std;

void shiftArrayRight(int arr[] , int n){
    //step-1
    int temp = arr[n-1];

    // step -2 
    for(int i=n-1; i>=1;i--){
        arr[i] = arr[i-1];
    }

    // step-3
    arr[0] = temp;
}

void shiftArrayLeft(int arr[] , int n){
    //step-1
    int temp = arr[0];

    // step -2 
    for(int i=0; i<=n-2;i++){
        arr[i] = arr[i+1];
    }

    // step-3
    arr[n-1] = temp;
}

int main(){
    int arr[] = {10,20,30,40,50,60};
    int n = 6;

    // shiftArrayRight(arr, n);
    shiftArrayLeft(arr, n);

    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
}

