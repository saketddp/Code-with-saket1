// write a program to find reverse of a given number

#include<iostream>
using namespace std;
int main(){
int i,rev=0;
cout<<"enter number";
cin>>i;
while(i>0){
    rev=(rev * 10)+ i%10;
    i=i/10;
}
cout<<"\nReverse ="<<rev;
return 0;
}
