//program to find product of first n natural numbers.
#include<iostream>
using namespace std;
int main(){
	int i,n;
	int product=1;
	cout<<"Enter the number n= ";
	cin>>n;
	for(i=1;i<=n;i++){
		product=product*i;
	}
	cout<<"Result= "<<product;
	return 0;}