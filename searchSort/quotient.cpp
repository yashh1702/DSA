//Find the nearst quotient of two numbers
#include<iostream>
using namespace std;

int getQuotient(int divisior , int dividened){
    int s=0;
    int e= dividened;
    int ans =-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(mid * divisior == dividened){
            return mid;
        }
        else if(mid * divisior < dividened){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}

int main(){
    int divisior , dividened;
    cout<<"Enter the value"<<endl;
    cin>>dividened;
    cin>>divisior;
    cout<<"Nearst Quotient is : ";
   int ans = getQuotient(abs(divisior),abs(dividened));
   if((divisior>0 && dividened<0) || (divisior<0 && dividened>0) ){
    ans =0-ans;
   }

   cout<<"Answer is:"<<ans<<endl;
}