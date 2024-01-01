#include<bits/stdc++.h>
using namespace std;


 int main ()
 {
    int n=7789,lastdigit;
    while(n>0)
    {
        lastdigit=n%10;
        cout<<lastdigit<<" ";
        n=n/10;
    }
    return 0;
 }

 