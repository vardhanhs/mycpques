#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n ;
		string s;
		cin>>n>>s;
		int score=0;
		while(n--)
		{
			string a;
			cin>>a;
			if(a=="CONTEST_WON")
			{
				int rank;
				cin>>rank;
				score+=300;
				if(rank<=20)
				score+=20-rank;
			}
			else if(a=="TOP_CONTRIBUTOR")
			score+=300;
			else if(a=="BUG_FOUND")
			{
				int svrty;
				cin>>svrty;
				score+=svrty;
			}
			else if(a=="CONTEST_HOSTED")
			score+=50;
		}
		if(s=="INDIAN")
		cout<<score/200<<endl;
		else
		cout<<score/400<<endl;
	}
}

