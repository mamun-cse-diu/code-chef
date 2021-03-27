#include<bits/stdc++.h>

using namespace std;

#define ll long long int
int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,k;
        cin>>n>>k;

        ll scor[k];

        for(ll i = 0; i<k; i++)
            cin>>scor[i];
        while(n--){
            ll res = 0;
            string str;
            cin>>str;
            for(ll i = 0; i<str.length(); i++){
                if(str[i] == '1'){
                    res = res + scor[i];
                }
            }
            cout<<res<<endl;
        }
    }
    return 0;
}
