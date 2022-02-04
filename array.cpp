//C++ program to reverse an array.
#include <iostream>
using namespace std;
int main(){
    int n,i;

    cout<<"Enter size of an array: ";
    cin>>n;
    int array[n];
    cout<<"\nEnter elements: ";
    for(i=0;i<n;i++){
        cin>>array[i];

    }
    cout<<endl<<"Elements when  array is reversed: ";
for(i=n-1;i>=0;i--)
        cout<<array[i]<<" ";
        return 0;}