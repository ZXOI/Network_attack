#include<bits/stdc++.h>
using namespace std;
char cmd[1024];
int main()
{
	int x;
	string ip;
	cout<<"Number of line(s) do you want to launch:";
	cin>>x;
	cout<<endl;
	freopen("./atk.log","w",stdout);
	cout<<endl<<"Launching lines:";
	for(int i=1;i<=x;i++)
	{
		system("./line &");
		cout<<i<<" th line launched."<<endl;
	}
	cout<<"Done."<<endl;
	cout<<"Input \"q\" to quit."<<endl;
	char rb;
	while(cin>>rb&&rb!='q');
	system("killall -9 ping");
	system("rm ./atk.log");
}
