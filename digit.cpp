//C++ program to find number of digits in a number(integer)
#include <iostream>
using namespace std;
int main(){
    int n;
    int d=0;
    cout<<"Enter the number= ";
    cin>>n;
    while(n!=0){
        n=n/10;
        d++;
    }
cout<<"\nNumber of digits= "<<d;
return 0; 
}