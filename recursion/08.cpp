//Find Subsequences of a string 
#include<iostream>
using namespace std;

void findSubsequences(string str, string output , int index){
    //base case
    if(index >= str.length()){
        //ANS JO H , VO OUTPUT STRING ME BULID HO CHUKA H
        //PRINT KRDO
        cout<<"->"<<output<<endl;
        return;
    }

    char ch = str[index];

    //1-FIRST INCLUDE THEN EXCLUDE

    //include
    // output.push_back(ch);
    // findSubsequences(str,output,index+1);

    // //exclude
    // output.pop_back();
    // findSubsequences(str,output,index+1);

    //OUTPUT:
    // ->abc
    // ->ab
    // ->ac
    // ->a
    // ->bc
    // ->b
    // ->c
    // ->



    //2-FIRST EXCLUDE THEN INCLUDE

    //exclude
    findSubsequences(str,output,index+1);

    //include
    output.push_back(ch);
    findSubsequences(str,output,index+1);

    // for first exclude then include 
    // output is :
    // ->
    // ->c
    // ->b
    // ->bc
    // ->a
    // ->ac
    // ->ab
    // ->abc

}

int main(){

    string str = "abc";
    string output = "";
    int index = 0;
    findSubsequences(str,output,index);
}