// write a program to print pyramid shape.

#include<iostream>

using namespace std;

int main(){

int n,i,j;

cout<<"\n  enter number to rows:";
  
cin>>n;

i=1;

while(i<=n){

    j=1;

    while(j<=i)
    {

        cout<<"*";
        \
        j=j+1;

    }
    cout<<"\n";

    i= i+1;

}
return 0;

}


