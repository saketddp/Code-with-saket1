// write a program to check whether a number is Palindrome or not

#include<iostream>

using namespace std;

int main(){

    int i,orig,rev=0;

    cout<<"enter number";

    cin>>i;

    orig = i;

    while( i > 0 ){

        rev = ( rev * 10 )+ i % 10;

        i = i/10;

    }

    if(orig == rev)
        cout<<"\n Palindrome";
    else
        cout<<"\n not Palindrome";
    return 0;
}
