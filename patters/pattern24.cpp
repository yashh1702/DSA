//numeric palindromic equilateral triangle
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the number"<<endl;
    cin>>n;

    for( int row=0;row<n;row++){
        for( int col=0;col<n-row-1;col++){
            cout<<"  ";

        }
        for(int col=0;col<row+1;col++){
            cout<<col+1<<" ";
        }
        for(int col=0;col<row;col++){
            cout<<row-col<<" ";
        }
        cout<<endl;
    }
}