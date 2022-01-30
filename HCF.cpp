//C++ program to find HCF of two positive numbers.
#include<iostream>
using namespace std;
int main(){
    int a,b,i,hcf;
    cout<<"Enter numbers whose HCF is to be calculated : ";
    cin>>a>>b;
    int min;
    min=a<b?a:b;
    for(i=1;i<=min;i++)
    {
        if(a%i==0&&b%i==0)
    
    hcf=i;}
    cout<<"\nHCF of "<<a<<" and "<<b<<" is : "<<hcf;
    return 0;}