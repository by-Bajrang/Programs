 #include<bits/stdc++.h>
using namespace std;

int main ()
{
    int arr[]={1,2,3,4,5};
    int temp=arr[0];
    for(int i=1;i<5;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[4]=temp;
    return 0;

}