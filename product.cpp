//write a c++ programm to find product of a given number
#include<iostream>
using namespace std;
int main(){
  int n,pro=1;
cout<<"\nenter the number";
cin>>n;
while(n>0){
pro=pro * n % 10;
n=n/10;
}
cout<<"\nproduct="<<pro;
return 0;
}
