#include<bits\stdc++.h>
using namespace std;

int main(){
	int *p = new int;
	*p = 10;
	cout<<*p<<" ";
	delete p;
	return 0;
}