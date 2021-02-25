#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        int m,h;
        cin>>m>>h;
        if((m/(h*h))<= 18 )
            cout<<"1"<<endl;
        else if((m/(h*h))>= 19 && (m/(h*h))<=24 )
            cout<<"2"<<endl;
        else if((m/(h*h))>= 25 && (m/(h*h))<=29 )
            cout<<"3"<<endl;
        else
            cout<<"4"<<endl;
    }
    return 0;
}
