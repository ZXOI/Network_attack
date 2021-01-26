#include<bits/stdc++.h>
using namespace std;
char cmd[1024];
int main()
{
	int x;
	string ip;
	freopen("./atk.cfg","r",stdin);
	cin>>ip;
//	cin>>x;
	string tmp="ping -s 60000 "+ip;
	memset(cmd,0,sizeof(cmd));
	for(int i=0;i<tmp.size();i++)
	{
		cmd[i]=tmp[i];
	}
	cmd[tmp.size()]='\0';
	system(cmd);
}
