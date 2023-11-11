#include<bits/stdc++.h>
using namespace std;


int main ()
{
    int age; 
    cout<<"enter your age ";
    cin>> age;
    if(age<18)
    cout<<"not eligible for job";
    else if(age <57){
    cout<<"eligible for job"<<"\n";
    if(age>=55)
    cout<<"but retirment soon";
    }
}