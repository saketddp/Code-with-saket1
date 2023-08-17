//write to c++ program to find to sum of first 'N' natural number

#include<iostream>
using namespace std;
int main(){

int n,i,sum;
cout<<"\enter number:";
cin>>n;
i=1;
while(i<=n){
    sum=sum+i;
    i=i+1;

}
cout<<"sum="<<sum;
return 0;
}
