#include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;

    int c =1;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<c;
            c++;
            if(j<i){
                cout<<"*";
            }
        }
        cout<<endl;
    }

// yha pr c ki value 11 ho toh humne yha start ko c mai se sub kara hai jisse vo seven se start hoga

    int start=c-n;
    for(int i=0;i<n;i++){
        int k = start;
        for(int j=0;j<=n-i-1;j++){
            cout<<k;
            k++;
            if(j<(n-i-1)){
                cout<<"*";
            }
        }
        start = start-(n-i-1); //yha pr i ki value 0 hogi tabi next line hum update kr payege
        cout<<endl;
    }
}