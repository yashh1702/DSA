//Hollow Rectangular Pattern
#include<iostream>
using namespace std;

int main()
{

    int Row,Column;
    cout<<"Enter Row and Column"<<endl;
    cin>>Row>>Column;

    for (int i = 1; i <= Row; i++)
    {
        for (int j = 1; j <= Column; j++)
        {
            if (i==1 || i==Row ) 
            {
                cout<<"*";
            }
            else if(j==1 || j==Column)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }            
        }

        cout<<endl;
        
    }
    
    return 0;
}