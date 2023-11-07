#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll MOD = 1e9 + 7;
#define fo(i,a,b) for(int i=a;i<b;i++)
 
void solve() {
ll n;
cin>>n;
vector<ll>ans;
while(n!=1)
{
    if(n%2==0)
    {
        ans.push_back(n);
        n/=2;
    }
    else 
    {
        ans.push_back(n);
        n=(n*3)+1;
    }
 
}
ans.push_back(1);
for(auto it:ans)
cout<<it<<" ";
 
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
