// write a program to calculate x^y (power)

#include<iostream>

using namespace std;

int main(){

int x,y,i,pro=1;

cout<<"\n enter value of x & y:";

cin>>x>>y;

i = 1;

while(i<=y){
  
    pro=pro * x;
  
    i=i+1;
}
cout<<"final value="<<pro;
  
return 0;
}
