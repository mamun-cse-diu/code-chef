#include<iostream>

using namespace std;

int main(){
    int t;

    cin>>t;
    long int s,r,s1=0,r1=0,n,x;
    while(t--){
        cin>>n>>x;
        while(n--){
            cin>>s>>r;
            if(r>r1 && s<=x){
                r1 = r;
                s1 = s;
            }
        }
        cout<<r1<<endl;
    }
}
