//reverse an array
#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){
int left=0;
int right=size-1;

while(left<=right){
    swap(arr[left],arr[right]);
    left++;
    right--;
}

//printing the array
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
}

int main(){
     int arr[]={10,20,30,40,50,60};
     int size=6;
     reverseArray(arr,size);

     return 0;
}