//C++ program to check whether a number is armstrong or not.
#include <iostream>
using namespace std;
int main(){
    int n,c,d;
    int s=0;
    cout<<"Enter number : ";
    cin>>n;
    int x=n;
    while(n!=0){
        d=n%10;
        c=d*d*d;
        s=s+c;
        n=n/10;

    }
    if(s==x)
    cout<<endl<<x<<" is an Armstrong number";
    else
    cout<<endl<<x<<" is not an Armstrong number";
    return 0;
}