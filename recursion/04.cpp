// Return the index of target

#include<iostream>


using namespace std;

void targetNumber(int arr[], int size,int index , int &target){
    if(index >= size){
        return ;
    }

    if(arr[index] == target){
       cout<<index<<" ";    
    }

    targetNumber(arr, size,index+1,target);
}

int main(){
    int arr[] = {10,11,10,13,10};
    int size = 5;
    int index = 0;
    int target = 10;

    targetNumber(arr, size, index, target);

}