#include <iostream>
using namespace std;

void countSort(int *arr, int n, int exp){
    int output[n];
    int count[10] = {0};

    for(int i=0;i<n;i++)
        count[(arr[i]/exp)%10]++;

    for(int i=1;i<10;i++){
        count[i] += count[i-1];
    }

    for(int i=n-1;i>=0;i--){
        output[count[(arr[i]/exp)%10]-1] = arr[i];
        count[(arr[i]/exp)%10]--;
    }

    for(int i=0;i<n;i++){
        arr[i] = output[i];
    }
}

void RadixSort(int *arr, int n){
    int m = 0;
    for (size_t i = 0; i < n; i++) {
        m = max(m,arr[i]);
    }

    for(int exp=1;m/exp>0;exp*=10){
        countSort(arr,n,exp);
    }
}

int main(int argc, char const *argv[]) {
    int arr[] = {88,97,10,12,15,1,50,6,128,502,813};
    int n =sizeof(arr)/sizeof(int);

    RadixSort(arr,n);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
