// find sqrt of x upto three 3 decimal places

#include <iostream>
#include<cmath>
using namespace std;

double mySqrt(float x) {
    int s = 0;
    int e = x;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (1LL * mid * mid == x) {
            return mid;
        }
        else if (1LL * mid * mid < x) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return ans;  // integer part of sqrt(x)
}

int main() {
    int x = 64;
    double sqrt = mySqrt(x);
    cout<<sqrt<<endl;
    return 0;
}
