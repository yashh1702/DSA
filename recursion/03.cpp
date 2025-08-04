// Double each number

#include<iostream>

using namespace std;

void doubleNumber(int arr[], int size,int index){
    if(index >= size){
        return;
    }

    arr[index] *= 2;

     doubleNumber(arr, size,index+1); 

}

int main(){
    int arr[] = {10,11,12,13,14};
    int size = 5;
    int index = 0;
    doubleNumber(arr, size,index); 

    for(int num: arr){
        cout<< num << " ";
    }
   

}