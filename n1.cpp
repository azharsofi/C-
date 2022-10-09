/**

      Given an integer array nums sorted in non-decreasing
      order, return an array of the squares of each number 
      sorted in non-decreasing order.**/
#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
    cin>>a[i];
        a[i]=a[i]*a[i];}
        sort(a,a+n);
         for(int i=0;i<n;i++)
         cout<<a[i]<<" ";
     return 0;
}
