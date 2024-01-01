#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    // cout<<"enter a no.>>";
    // cin>>n;
    int x=2;

    for (int i = 1; i <= (2 * n - 1); i++)
    {
        int star = i;
        if (i > n)
        {
            star = (2 * n - i);
        }
        // star
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        // space

        int space = (2 * n - 2 * i);
        if (i > n)
        {
            space = x;
            x=x+2;
        }
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
         // star
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        cout<<endl;
       
    }
    return 0;
}