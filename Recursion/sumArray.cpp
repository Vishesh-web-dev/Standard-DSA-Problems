#include<bits\stdc++.h>
using namespace std;
int sum(int arr[],int n){
    if(n == 0)return 0;
    return arr[0] + sum(arr+1,n-1); 
}
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0; i< n ; i++){
        cin>>arr[i];
    }
    cout<<sum(arr,n);
    delete arr;
    return 0;
}