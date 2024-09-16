 #include<bits/stdc++.h>
using namespace std ;

int main()
{
    vector<int>v={5,6,9,5,5,8};
    int largest = v[0];
    int slargest = -1;
    for(int i=0;i<=5;i++)
    {
        if(v[i]>largest)
        {
            slargest=largest;
            largest=v[i];
        }
        else if(v[i]<largest && v[i]>slargest)
        {
            slargest=v[i];
        }
        
    }
    
    cout<<largest<<endl;
    cout<<slargest;
}