#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll MOD = 1e9 + 7;
#define fo(i,a,b) for(int i=a;i<b;i++)
 
void solve() {
int n;
cin>>n;
int a[n-1];
for(int i=0;i<n-1;i++)
{
    cin>>a[i];
}
int xor1=0,xor2=0;
for(int i=0;i<n-1;i++)
{
    xor1=xor1^a[i];
    xor2=xor2^(i+1);
}
xor2=xor2^n;
cout<<(xor1^xor2);
 
 
 
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
