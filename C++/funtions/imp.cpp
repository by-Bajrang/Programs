#include<bits/stdc++.h>
using namespace std;


int dosomething (int num)    // this is pass by value
{
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;

}

int main ()
{
    int num=10;
    dosomething(num);
    cout<<num<<endl;   /// its out come is 10 kuki fxn mai exact no. nahi pass hota balki uske copy paste hota hai samja kya
    return 0;
}