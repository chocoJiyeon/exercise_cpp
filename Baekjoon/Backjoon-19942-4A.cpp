#include <bits/stdc++.h>
using namespace std;

struct A{
	int mp, mf, ms, mv, cost;
}a[16];

int n,p,f,s,v,sum;
int ret = 987654321;
map<int, vector<vector<int>>> ret_v;

int main()
{
	cin>>n;
	cin>>a[0].mp>>a[0].mf>>a[0].ms>>a[0].mv;
	for(int i=1; i<=n; i++)
	{
		cin>>a[i].mp>>a[i].mf>>a[i].ms>>a[i].mv>>a[i].cost;
	}
	
	for(int i=1; i<(1<<n); i++)	//모든 경우 
	{
		vector<int> vec;
		p = f = s = v = sum =0;
		for(int j=0; j<n; j++)
		{
			if(i&(1<<j))	//조합에 있는 것 
			{
				vec.push_back(j+1);
				p += a[j+1].mp;
				f += a[j+1].mf;
				s += a[j+1].ms;
				v += a[j+1].mv;
				sum += a[j+1].cost;
			}
		}
		if(p>=a[0].mp && f>=a[0].mf && s>=a[0].ms && v>=a[0].mv)
		{
			if(ret >= sum)
			{
				ret = sum;
				ret_v[ret].push_back(vec);
			}
		}
	}
	if(ret == 987654321)
	{
		cout<<-1<<'\n';
	}
	else
	{
		cout<<ret<<'\n';
		sort(ret_v[ret].begin(), ret_v[ret].end());
		for(auto it : ret_v[ret][0])
		{
			cout<<it<<" ";
		}
	}
}
