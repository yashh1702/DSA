// Find quotient using Binary search
// divisior * quotient + remainder = dividend
// For Binary Search -> divisior * quotient <= dividend
//for negative number convert first negative number into positive using absolute function 

#include<iostream>
using namespace std;

int getQuotient(int divisor, int dividend){
    int s = 1;
    int e = dividend;
    int ans = -1;
    
    while(s <= e){
        int mid = s + (e-s)/2;
        if(mid * divisor == dividend){
            return mid;
        }
        else if(mid * divisor < dividend){
            // ans store
            ans = mid;

            //right me jao
            s = mid + 1;
        }
        else{
            //left me jao
            e = mid - 1;
        }
    }
    return ans;
}

int main(){
    int divisor =4;
    int dividend = 28;

    int ans = getQuotient(abs(divisor), abs(dividend));

    if(dividend == 0){
        ans = 0;
    }

    //now we need to decide k sign konsa laaye +ve ya -ve

    if((divisor > 0 && dividend < 0) || (divisor < 0 && dividend > 0)){
        ans = 0 - ans;
    }

   
    if(divisor == 0){
        cout<< "canot be divided by 0"<<endl;
    }
    else{
        cout<<"Final Ans is: "<<ans << endl;
    }
   
    

}