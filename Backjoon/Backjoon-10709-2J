#include<bits/stdc++.h>
using namespace std;

int h,w;
string s;

int main()
{
	cin>>h>>w;
	for(int i=0; i<h; i++)
	{
		cin>>s;
		int nope =0, cloud=0;
		for(int j=0; j<w; j++)
		{
			if(s[j]=='c')
			{
				cloud =0;
				cout<<cloud++<<" ";
				nope = 1;
			}
			else
			{
				if(!nope) cout<<"-1"<<" ";
				else	cout<<cloud++<<" ";
			}
		}
		cout<<'\n';
	}
	
}
