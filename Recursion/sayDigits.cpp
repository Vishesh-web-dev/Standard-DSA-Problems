#include<bits\stdc++.h>
using namespace std;
 
string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void sayDigits(int n){
    if(n == 0){
        return;
    }
    sayDigits(n/10);
    int l = n%10; 
    cout<<arr[l]<<" ";
    
}
int main(){
    int n;
    cin>>n;
    sayDigits(n);
    return 0;
}