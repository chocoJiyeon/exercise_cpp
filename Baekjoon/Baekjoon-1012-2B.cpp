#include<bits/stdc++.h>
using namespace std;

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
int T,N,M,K,m,n;
int visited[50][50], a[50][50];

void DFS(int y, int x)
{
	visited[y][x] = 1;
	for(int i=0; i<4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny<0|| nx<0|| ny>=N|| nx>=M) continue;
		if(a[ny][nx]==1 && visited[ny][nx]==0)
			DFS(ny,nx);
	}
	return;
}

int main()
{
	cin>>T;
	for(int i=0; i<T; i++)
	{
		fill(&a[0][0], &a[0][0] + 50 * 50, 0);
    fill(&visited[0][0], &visited[0][0] + 50 * 50, 0);
    
		cin>>M>>N>>K;
		for(int j=0; j<K; j++)
		{
			cin>>m>>n;
			a[n][m] = 1;
		}
		int ret =0;
		for(int j=0; j<N; j++)
		{
			for(int k=0; k<M; k++)
			{
				if(visited[j][k]==0 && a[j][k])
				{
					DFS(j,k);
					ret++;
				}
			}
		}
		cout<<ret<<'\n';
	}
}
