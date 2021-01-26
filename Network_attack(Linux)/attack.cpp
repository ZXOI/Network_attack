#include<bits/stdc++.h>
using namespace std;
char cmd[1024];
// char ip
int main()
{
	int x;
	string ip;
	// freopen("./atk.cfg","r",stdin);
	// cin>>ip;
	cout<<"Number of line(s) do you want to launch:";
	cin>>x;
	cout<<endl;
	// freopen("tmp.txt","w",stdout);
	freopen("./atk.log","w",stdout);
	cout<<endl<<"Launching lines:";
	for(int i=1;i<=x;i++)
	{
		system("./line &");
		cout<<i<<" th line launched."<<endl;
	}
	cout<<"Done."<<endl;
	char rb;
	while(cin>>rb&&rb!='q');
//	freopen("/dev/null","w",stdout);
	system("killall -9 ping");
//	system("killall -9 line");
	for(int i=1;i<=1e9;i++);
	system("rm ./atk.log");
}
