#include <iostream>

using namespace std;


    void selectionsort(int a[],int n){
        for(int p=0;p<=n-2;p++){
            int mi=p;
            for(int j=p;j<n;j++){
                if(a[j]<a[mi])
                mi=j;
            }
        
        swap(a[mi],a[p]);
    }}
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
        selectionsort(arr, N);
    printArray(arr, N);
 
    return 0;
}
    