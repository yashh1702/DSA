//numeric inverted hollow half pyramid
//numeric hollowhalf pyramid
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    cout<<"pattern is : "<<endl;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<=n;j++){
            if(i==0 || j==i+1 || j==n){
            cout<<j<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}