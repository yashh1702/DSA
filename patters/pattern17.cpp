//Hollow square
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;

    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if (i==0 || i==(num-1))
            {
                cout<<"* ";
            }
            else if (j==0 || j==(num-1))
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
            
        }

        cout<<endl;

    }
}