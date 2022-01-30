//program to calculate average of marks obtained in 5 subjects.
#include <iostream>
using namespace std;

int main()
{
    float eng, phy, chem, math, comp; 
    float total, average;
    cout<<"Enter marks of five subjects: \n";
    cin>> eng>>phy>>chem>>math>>comp;
    total = eng + phy + chem + math + comp;
    average = total / 5.0;
    cout<<"Average = "<<average;
    return 0;}