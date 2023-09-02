#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        ll c;
        cin>>n>>c;
        int s[n];
        ll sum1=0;
        ll sum2=0;
        for(int i=0;i<n;i++){
            cin>>s[i];
            sum1+=s[i];
            sum2+=pow(s[i],2);
        }
        ll b=16*(pow(sum1,2)-(sum2-c));
        ll delta=sqrt(b);

        ll ans;
        ans=(-(4*sum1)+delta)/8;
        // if((-(4*sum1)+delta)%8==0) ans=(-(4*sum1)+delta)/8;
        // else ans=(-(4*sum1)-delta)/8;
        cout<<ans<<endl;

    }
}