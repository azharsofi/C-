//C++ program to reverse an integer
#include <iostream>
using namespace std;
int main(){
    int n;
    int s=0;
    cout<<"Enter the number= ";
    cin>>n;
    while(n!=0){
        s=s*10+n%10;
        n=n/10;
    
    }
cout<<"\nReverse of entered number is= "<<s;
return 0; 
}