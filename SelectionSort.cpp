#include <iostream>
using namespace std;

void SelectionSort(int *arr, int n){
    for(int i=0;i<n;i++){
        int idx = i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[i])
                idx = j;
        }
        swap(arr[i],arr[idx]);
    }
}

int main(int argc, char const *argv[]) {
    int arr[] = {2,4,24,8,12,6,9,5};
    int n = sizeof(arr)/sizeof(int);
    SelectionSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
