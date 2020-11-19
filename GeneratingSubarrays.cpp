#include<iostream>
using namespace std;
void GeneratingSubarrays(int arr[], int n, int l){
    for(int i=0;i<n-l;i++){
        for(int j=i;j<i+l;j++){
            cout<<arr[j]<<",";
        }
        cout<<endl;
    }
}

void GeneratingAllSubarrays(int arr[], int n){
    for (int i=0; i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++)
                cout<<arr[k]<<",";
            cout<<endl;
        }
    }
}

int main(){
    int n,l;
    int arr[100];
    cin>>n>>l;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    //GeneratingSubarrays(arr, n, l);
    //cout<<endl;
    GeneratingAllSubarrays(arr,n);
    return 0;
}
