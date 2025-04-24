//fancy pattern 2
#include<iostream>
using namespace std ;

int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int count=1;

    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            if(col==row){
                cout<<count;
                count++;
            }
            else{
                 cout<<count<<"*";
                    count++;

            }
           
        }
        cout<<endl;
    }
      for(int row=0;row<n;row++){
        for(int col=0;col<n-row;col++){
            if(col==n-row){
                cout<<count;
                count--;
            }
            else{
                 cout<<count<<"*";
                    count--;

            }
           
        }
        cout<<endl;
    }

}