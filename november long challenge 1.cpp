#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
#define vec vector<ll>
#define pb push_back
#define MOD 1000000007
#define test ll t;cin>>t;while(t--)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
	test
	{
		ll n; cin>>n;
		ll a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n,greater<ll>());
		ll x=0,y=0;
		for(int i=0;i<n;i++)
		{
			if (x>y)
			y+=a[i];
			else 
			x+=a[i];
		}
		cout<<max(x,y)<<nl;
	}
}

