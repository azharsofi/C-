//program to find product of first n natural numbers.
#include<iostream>
using namespace std;
int main(){
	int i,n;
	int sum=0;
	cout<<"Enter the number n= ";
	cin>>n;
	for(i=1;i<=n;i++){
		sum=sum+i;
	}
	cout<<"Result= "<<sum;
	return 0;}