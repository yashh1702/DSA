//linear search 
#include<iostream>
using namespace std;

// int main(){

//     int arr[5]={2,4,6,8,10};
//     int target=10;
//     int n=5;

//     bool flag=0;
//     //0->not found
//     //1->found
//     for(int i=0;i<n;i++){
//         if(arr[i]==target){
//             //found
//             cout<<"target found"<<endl;
//             flag=1;
//             break;
//         }
//     }    

//         if(flag==1){
//             cout<<"target found";
//         }
//         else{
//             cout<<"target not found"<<endl;
//         }
    

//     return 0;
// }


//linear search using function

void printArray(int arr[] , int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}    

    bool linearsearch(int arr[] , int size , int target){
        for(int i=0;i<size;i++){
            if(arr[i]==target){
                //found
                return true;
            }
        }   
            //not found
            return false;
    }

int main(){
    int arr[5] = {2,4,6,8,10};
    int size=5;
    int target=10;

    bool ans=linearsearch(arr,size,target);
    if(ans==1){
        cout<<"target found"<<endl;
    }
    else{
        cout<<"target not found"<<endl;
    }

    return 0;
}