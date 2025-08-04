// Find Target in  Nearly Sorted Array
#include<iostream>
using namespace std;

int searchNearlSorted(int arr[], int size, int target){
    int s = 0;
    int e = size -1;

    while(s <= e){
        int mid = s +(e-s)/2;
        if(arr[mid] == target){
            return mid;
        }
        if(mid-1 >= 0 && arr[mid-1] == target){
            return mid-1;
        }
        if(arr[mid + 1] == target && mid+1 <= size ){
            return mid+1;
        }

        if(arr[mid] < target){
            //rifght jao
            s = mid + 2;
        }
        else{
            //left jao
            e = mid -2;
        }
    }
    return -1;
}

int main(){
    int arr[] = {20,10,30,50,40,70,60};
    int size = 7;
    int target = 60;

    int targetIndex = searchNearlSorted(arr, size, target);

    if(targetIndex == -1){
        cout<<"Element Not found"<< endl;
    }
    else{
        cout<<"Element Found at Index: "<<targetIndex<<endl;
    }

}