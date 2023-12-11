#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll MOD = 1e9 + 7;
#define fon for(int i=0;i<n;i++)
#define fo(i,a,b) for(int i=a;i<b;i++)
 
void solve() {
ll n;
cin>>n;
ll a[n];
fon
cin>>a[i];
ll sum=0;
for(int i=1;i<n;i++)
{
    if(a[i]<a[i-1])
    {
        sum+=a[i-1]-a[i];
        a[i]=a[i-1];
    }
}
cout<<sum;
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
