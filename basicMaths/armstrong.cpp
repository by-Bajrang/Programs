#include<bits/stdc++.h>
using namespace std;


int main() {
    cout<<"enter ano.";
	int n,arm=0;
	cin>>n;
    int k=n;
	while(n>0){
		int r=n%10;
		n=n/10;
        arm=(r*r*r)+arm;
	}
	if(arm==k)
    {
        cout<<"armstrong no.";
    }
    return 0;
}