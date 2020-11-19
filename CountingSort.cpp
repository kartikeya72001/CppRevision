#include <iostream>
using namespace std;

void CountingSort(int *arr, int n){
    int largest = -1;
    for(int i=0;i<n;i++)
        largest = max(largest,arr[i]);

    int *freq = new int[largest+1]{0};
    for(int i=0;i<n;i++)
        freq[arr[i]]++;

    // cout<<"Frequency Array"<<endl;
    // for(int i=0;i<largest;i++)
    //     cout<<freq[i]<<" ";

    int j=0;
    for(int i=0;i<=largest;i++){
        while(freq[i]>0){
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }
}

int main(int argc, char const *argv[]) {
    int arr[] = {88,97,10,12,15,1,5,6,12,5,8};
    int n = sizeof(arr)/sizeof(int);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    CountingSort(arr,n);

    cout<<"Sorted Array"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
