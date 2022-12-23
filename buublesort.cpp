
#include <bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i=1;i<=n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
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
    bubblesort(arr, N);
    printArray(arr, N);
 
    return 0;
}