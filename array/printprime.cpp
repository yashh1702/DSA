#include<iostream>
using namespace std;

int main(){

    int a,b;
    cin>>a>>b;
     cout<<"Prime Numbers are:"<<endl;
    
    for (int num= a; num <b; num++)
    {
        int i;
        for ( i = 2; i < num; i++)
        {
            if(num%i==0){
                break; //for termination of 2nd for loop
            }
        }
        if(i==num){
            cout<<num<<endl;
           
            
        }
    }
    
    return 0;
}