#include<iostream>
using namespace std;

int main()
{
    char vowels;
    cout<<"Enter the alphabet:"<<endl;
    cin>>vowels;

    switch (vowels)
    {
        //delecartion of vowels
    case 'a':
        cout<<"The given alphabet is a vowel"<<endl;
        break;

        case 'e':
        cout<<"The given alphabet is a vowel"<<endl;
        break;

        case 'i':
        cout<<"The given alphabet is a vowel"<<endl;
        break;

        case 'o':
        cout<<"The given alphabet is a vowel"<<endl;
        break;

        case 'u':
        cout<<"The given alphabet is a vowel"<<endl;
        break;
    
    default:
    cout<<"The given alphabet is consonant"<<endl;
        break;
    }



    return 0;
}