//numeric hollowhalf pyramid
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    cout<<"pattern is : "<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(i==0 || i==n-1 || j==0 || j==i){
            cout<<j+1<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}