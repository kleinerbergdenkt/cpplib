#include<iostream>
using namespace std;

int watch[512][512];
char maze[512][512];
void dfs(int h,int w,int ny,int nx)
{
	if(ny<0||h<=ny||nx<0||w<=nx||maze[ny][nx]=='#'||watch[ny][nx])return;
	watch[ny][nx]=1;
	dfs(h,w,ny+1,nx);
	dfs(h,w,ny,nx+1);
	dfs(h,w,ny-1,nx);
	dfs(h,w,ny,nx-1);
}
main()
{
	int h,w;cin>>h>>w;
	int sy,sx,gy,gx;
	for(int i=0;i<h;i++)for(int j=0;j<w;j++)
	{
		cin>>maze[i][j];
		if(maze[i][j]=='s'){sy=i;sx=j;}
		if(maze[i][j]=='g'){gy=i;gx=j;}
	}
	dfs(h,w,sy,sx);
	puts(watch[gy][gx]?"Yes":"No");
}