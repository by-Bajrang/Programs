#include <bits/stdc++.h>
using namespace std;

int main()
{
    int day;
    cout << "enter no. between 1 to 7==";
    cin >> day;
    switch (day)
    {
    case 1:
    {
        cout << "monday";
        break;
    }
    case 2:
    {
        cout << "tuesday";
        break;
    }
    case 3:
    {
        cout << "wednesday";
        break;
    }
    case 4:
    {
        cout << "thursday";
        break;
    }
    case 5:
    {
        cout << "friday";
        break; 
    }
    case 6:
    {
        cout << "saturday";
        break;
    }
    case 7:
    {
        cout << "sunday";
        break;
    }
    default:
    cout<<"invalid";
    break ;
    }
    cout<<"\n"<<  "check";
}
 