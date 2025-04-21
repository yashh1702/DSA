//Hollow diamond pattern
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the Number:"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i+j)%6==0){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            for(int i=2;j<=n;i++){
                for(int j=1;j<=i;j++){
                    if(i+4){
                    cout<<" ";
                    }
                    else{
                        cout<<"*";
                    }
                }
                cout<<"*";
            }
        }
        cout<<endl;
    }

    return 0;
}