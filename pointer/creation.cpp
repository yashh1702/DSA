#include<iostream>
using namespace std;

int main(){
    int a=5;
    char ch='k';
    long lachi=10;
    cout<<a<<endl;
    cout<<"address of a : "<<&a<<endl;
    cout<<"address of ch: "<<&ch<<endl;
    cout<<"address of long : "<<&lachi<<endl;


    //pointer creation
    int* ptr=&a;
    char* cptr=&ch;
    long* lptr=&lachi;
    //acessing value stored at address stored in ptr
    cout<<ptr<<endl;
    cout<<"Accessing: "<<*ptr<<endl;
    cout<<&ptr<<endl;
    cout<<"size of a:"<<sizeof(ptr)<<endl;
    cout<<"size of ch:"<<sizeof(cptr)<<endl;
    cout<<"size of lpng:"<<sizeof(lptr)<<endl;
}