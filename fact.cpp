// write a program to find factorail of any number

#include<iostream>
using namespace std;
int main(){
int n,fac;
cout<<"enter the fact number";
cin>>n;
fac=1;
while(n>=1){
   fac=fac*n;
   n=n-1;

}
cout<<"\n factorial="<<fac;
return 0;

}
