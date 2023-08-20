//write a c++ program to find sum of even $ product of odd digits of a given number

#include<iostream>
using namespace std;
int main(){
  int n,sum=o,prod=0,x;
cout<<endl<<"enter the number:\t";
cin>>n;
while(n !=0)
{
x = n % 10;
if(x%2 == 0){
sum += x;
}
else{
prod += x;
}
n = n/10;
}
cout<<endl<<"sum of even number. is " <<sum;
cout<<endl<<"product of odd number. is "<<prod;
return n;
}
