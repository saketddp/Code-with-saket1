//  write a program to generate fibonacci series upto  a given number

#include<iostream>

using namespace std;

int main(){

int n,x,y,z;

cout<<"\n enter number which you want to generate Fibonacci series:";

cin>>n;

x=0;

y=1;

for(z=0;z<=n;z=x+y)
{
    cout<<"\n"<<z;

    x=y;
    
    y=z;

}
return 0;


}
