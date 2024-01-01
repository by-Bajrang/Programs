#include<bits/stdc++.h>
using namespace std;

int main() {
	// Write your code here
	int n,rev=0;
	cin>>n;
	while(n>0){
		int r=n%10;
		rev=(rev*10)+r;
		n=n/10;

	}
	cout<<rev;
}