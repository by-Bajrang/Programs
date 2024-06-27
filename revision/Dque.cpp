#include<bits/stdc++.h>
using namespace std;


int main()
{
    deque<int>dq;
    dq.push_back(3);// {3}
    dq.emplace_back(4);//{3,4}
    dq.push_front(5);//{3,4,5}
    dq.emplace_front(6);//{3,4,5,6}

    dq.pop_back();//{3,4,5}
    dq.pop_font();//{4,5}

    dq.back();
    dq.font(); 
    //rest are same
    return 0;
}