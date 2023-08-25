// write a program to check whether a prime or not

#include<iostream>

using namespace std;

int main(){

    int i,count=0,j;

    cout<<"\n enter number to check:";

    cin>>i;

    for(j=1; j<=i; j++)
    {
        if(i % j == 0)
            
            count ++;
    }


    if(count == 2)
        
        cout<<"\n prime number";
    
    else
    
        cout<<"\n composite number  ";

    return 0;
}
