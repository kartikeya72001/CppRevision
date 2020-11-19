#include <iostream>
using namespace std;

void Merge(int *arr, int s, int e){
    int mid = (s+e)/2;

    int i = s;
    int j = mid+1;
    int k = s;

    int temp[100];

    while(i<=mid and j<=e){
        if(arr[i] < arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
        }
    }
    while(i<=mid){
        temp[k++] = arr[i++];
    }
    while(j<=e){
        temp[k++] = arr[j++];
    }

    for(int i=s;i<=e;i++){
        arr[i] = temp[i];
    }
}

void MergeSort(int *arr, int s, int e){
    if(s>=e)
        return;
    int mid = (s+e)/2;
    MergeSort(arr,s,mid);
    MergeSort(arr,mid+1,e);

    Merge(arr,s,e);
}

int main(int argc, char const *argv[]) {
    int arr[] = {88,97,10,12,15,1,5,6,12,5,8};
    int n = sizeof(arr)/sizeof(int);

    MergeSort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
