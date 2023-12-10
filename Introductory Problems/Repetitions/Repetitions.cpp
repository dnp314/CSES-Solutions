#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll MOD = 1e9 + 7;
#define fon for(int i=0;i<n;i++)
#define fo(i,a,b) for(int i=a;i<b;i++)
 
void solve() {
string s;
cin>>s;
int cnt=1,ans=-1;
for(int i=0;i<s.size()-1;i++)
{
        if(s[i]==s[i+1])
        {cnt++;
        ans=max(ans,cnt);}
        else
        cnt=1;
    
}
ans=max(ans,cnt);
cout<<ans;
 
 
}
 
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int tc = 1;
// cin >> tc;
while(tc--){
solve();
}
    return 0;
}
