// Find last occurance in string
#include<iostream>

using namespace std;

void lastOccLTR(string&s, char x, int i, int&ans){
    //base case
    if(i >= s.size()){
        return;
    }

    //ek case solve krna hai
    if(s[i] == x){
        ans=i;
    }
    lastOccLTR(s,x,i+1,ans);
}


int main(){
    string s;
    cin>>s;
    char x;
    cin>>x;
    int ans = -1;
    lastOccLTR(s,x,0,ans);
    cout<<ans<<endl;
}