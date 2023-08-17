//write a c++ program to find sum of digits of a given number

#include<iostream>
using namespace std;
int main(){
  
  int n,sum;
  
cout<<"\nenter the number";
cin>>n;
  
for(n>0;n=n/10)
sum=sum+n%10;
  
cout<<"\sum of digits="<<sum;
return 0;
}
