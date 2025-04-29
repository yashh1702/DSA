//unique element in an array
#include<iostream>
using namespace std;

void getunique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    cout<<"final answer is :"<<ans<<endl;
}

int main(){
    int arr[]={2,10,11,10,2,13,15,13,15};
    int n=9;

    getunique(arr,n);
    
}