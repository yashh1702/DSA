// MAX NUMBER IN AN ARRAY

#include<iostream>
#include<limits.h>


using namespace std;

void maxNumber(int arr[], int size,int index, int &maxi){
    if(index >= size){
        return;
    }

    maxi = max(maxi, arr[index]);

    maxNumber(arr, size, index+1, maxi);
 
}

int main(){
    int arr[] = {10,11,12,13,14};
    int size = 5;
    int index = 0;
    int maxi = INT_MIN;
    maxNumber(arr, size,index, maxi); 

    cout<<"Maxium Number :"<<maxi<<endl;

}