#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void bfs(int h,int w,int sy,int sx,int gy,int gx)
{
	char maze[h][w];
	long dist[h][w];
	for(int i=0;i<h;i++)for(int j=0;j<w;j++){cin>>maze[i][j];dist[i][j]=-1;}
	queue<pair<int,int>>q;
	int dy[4]={0,1,0,-1};
	int dx[4]={1,0,-1,0};
	dist[sy][sx]=0;
	q.push(make_pair(sy,sx));
	while(!q.empty())
	{
		int y=q.front().first;
		int x=q.front().second;
		if(y==gy&&x==gx)break;
		for(int i=0;i<4;i++)
		{
			int ny=y+dy[i],nx=x+dx[i];
			if(maze[ny][nx]=='.'&&dist[ny][nx]==-1)
			{
				dist[ny][nx]=-~dist[y][x];
				q.push(make_pair(ny,nx));
			}
		}
		q.pop();
	}
	cout<<dist[gy][gx]<<endl;
}
main()
{
	int r,c;cin>>r>>c;
	int sy,sx,gy,gx;
	cin>>sy>>sx>>gy>>gx;sy--,sx--,gy--,gx--;
	bfs(r,c,sy,sx,gy,gx);	
}
