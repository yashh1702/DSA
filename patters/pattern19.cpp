//FLIPPED SOLID DIAMOND PATTERN
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;

   int n=num/2;

    for(int row=0;row<n;row++){
        //inverted half pyramid 1
        for(int col=0;col<n-row;col++){
            cout<<"* ";
        }
        //full pyramid 
        for(int col=0;col<2*row+1;col++){
            cout<<"  ";
        }
        //for half pyramid
        for(int col=0;col<n-row;col++){
            cout<<"* ";
        }

        cout<<endl;

    }

        for(int row=0;row<n;row++){
        //inverted half pyramid 1
        for(int col=0;col<row+1;col++){
            cout<<"* ";
        }
        //full pyramid 
        for(int col=0;col<2*n-2*row-1;col++){
            cout<<"  ";
        }
        //for half pyramid
        for(int col=0;col<row+1;col++){
            cout<<"* ";
        }

        cout<<endl;

    }
}