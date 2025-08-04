// Print indiviual digit of number

#include<iostream>
using namespace std;

void printDigit(int number){
    if(number == 0){
        return;
    }

    int digit = number % 10;
    number = number/10;

    printDigit(number);

    cout << digit <<" ";
}

int main(){
   int number = 4215;
   printDigit(number);

}