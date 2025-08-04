// Checked whether the array is sorted or not
#include<iostream>
using namespace std;

bool checkSorted(int arr[], int n, int index){
    //base case
    if(index >= n){
        return true;
    }

    //processing
    if(arr[index] > arr[index -1]){
        //aage check krna padega ab
        int aageKaAns = checkSorted(arr, n,index+1);
        return aageKaAns;
    }
    else{
        //sorted nhi hai
        return false;
    }
}

int main(){
    int arr[] = {10,20,30,20,60};
    int n = 5;
    int index = 1;
   bool isSorted = checkSorted(arr, n, index);

    if(isSorted){
        cout<<"Array is Sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
}