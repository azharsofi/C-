#include <bits/stdc++.h>
using namespace std;
void insertionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int c=arr[i];
        int prev=i-1;
        while(prev>=0&&arr[prev]>c){
            arr[prev+1]=arr[prev];
            prev=prev-1;
        }
        arr[prev+1]=c;
    }
    
}
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{ int N;
cin>>N;
    int arr[N];
    for (int i = 0; i < N; i++)
        cin>> arr[i];
    insertionsort(arr, N);
    printArray(arr, N);
 
    return 0;
}