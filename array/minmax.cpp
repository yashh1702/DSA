//MINTERM AND MAXTERM IN ARRAY
#include<iostream>
#include<limits.h>  //this header file is include to us min and max term function
using namespace std;

int findMinimuminArray(int arr[],int size){
    //ans store variable
    int minAns=INT_MAX;
    
    for(int i=0;i<size;i++){
        if(arr[i] < minAns){
        minAns=arr[i];
    }
    }
    return minAns;

}

int main(){
    int arr[]={10,8,31,4,3,1,51};
    int size=7;

    int minimum=findMinimuminArray(arr,size);
    cout<<"Minimum number is:"<<minimum<<endl;

    return 0;
}

