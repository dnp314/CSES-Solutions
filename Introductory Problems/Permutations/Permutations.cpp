#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll MOD = 1e9 + 7;
#define fon for(int i=0;i<n;i++)
#define fo(i,a,b) for(int i=a;i<b;i++)
 
void solve() {
int n;
cin>>n;

if(n==3||n==2)
cout<<"NO SOLUTION";
else 
{
    if(n%2==0)
    {
        for(int i=0;i<n/2;i++)
        cout<<(2*(i+1))<<" ";
        for(int i=0;i<n/2;i++)
        cout<<(2*(i)+1)<<" ";      
    }
    else
    {
        for(int i=0;i<n/2;i++)
        cout<<(2*(i+1))<<" ";
        n++;
        for(int i=0;i<n/2;i++)
        cout<<(2*(i)+1)<<" ";
    }
}
 
 
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
