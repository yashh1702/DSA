#include<iostream>
using namespace std;
 
void shiftnegativeoneside(int arr[],int n){
    int j=0;

    for(int index=0;index<n;index++){
        if(arr[index]<0){
            swap(arr[index],arr[j]);
            j++;
        }
    }
}
int main(){
    int arr[]={1,-7,12,-10,11,40,-2};
    int n=7;

    cout<<"Printing the array before"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    shiftnegativeoneside(arr,n);

    //print
    cout<<endl<<"Printing the array after"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
} 
