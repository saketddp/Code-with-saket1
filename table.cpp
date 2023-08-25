// write a program to print table of a given number

#include<iostream>

using namespace std;

int main(){

int i,j;

cout<<"\n enter number to print table:";

cin>>i;

for(j=1; j<=10; j++)
    
    cout<<"\n"<<i*j;

return 0;
}
