#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,big = 0;

    cin>>n;

    for(int i = 1; i<=10; i++){
        if(n%i==0){
            if(i>big)
                big = i;
        }
    }
    cout<<big<<endl;

    return 0;
}
