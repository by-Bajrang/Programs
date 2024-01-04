#include<bits/stdc++.h>
using namespace std;

int main() {
	// Write your code here
    cout<<"enter a no.>>";
	int n,rev=0;
	//int n,rev=0,k=n;//this is galat
	cin>>n;
    int k=n;
	while(n>0){
		int r=n%10;
		rev=(rev*10)+r;
		n=n/10;

	}
    if(rev==k)
	cout<<"n is palindrop no.";
}