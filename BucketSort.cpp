#include <iostream>
#include <vector>
using namespace std;

void BucketSort(int *arr, int n){
    std::vector<int> v[101];
    for(int i=0;i<n;i++){
        int m = arr[i];
        v[m].push_back(arr[i]);
    }

    for(int i=100;i>=0;i--){
        for(vector<int>::iterator it=v[i].begin();it!=v[i].end();it++){
            cout<<(*it)<<" ";
        }
    }
}

int main(int argc, char const *argv[]) {
    int arr[] = {98,43,78,67,56,27,33,89,23};
    int n = sizeof(arr)/sizeof(int);
    BucketSort(arr,n);
    return 0;
}
