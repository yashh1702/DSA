// shift negative no to left side and postive to right side
#include<iostream>

using namespace std;

void shiftNegativeOneSide(int arr[],int n){
    int j=0;
    for (int index = 0; index < n; index++)
    {
        if(arr[index]<0){
            swap(arr[index],arr[j]);
            j++;
        }
    }
    
}

int main(){
    int arr[] = {1,-7,-12,10,11,-40,0};
    int n =7;
    shiftNegativeOneSide(arr,n);

    cout<<"printing the array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}