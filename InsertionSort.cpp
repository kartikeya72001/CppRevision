#include <iostream>
using namespace std;

void InsertionSort(int *a, int n){
    for(int i=1;i<n;i++){
        int e = a[i];
        int j = i-1;
        while(j>=0 and a[j]>e){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = e;
    }
}

int main(int argc, char const *argv[]) {
    int arr[] = {2,4,24,8,12,6,9,5};
    int n = sizeof(arr)/sizeof(int);
    InsertionSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
