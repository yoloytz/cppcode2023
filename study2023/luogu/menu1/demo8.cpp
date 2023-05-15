#include <iostream>
using namespace std;
string a;
signed main()
{
	cin>>a;
	int len=a.size();
	for(int i=len-1;i>=0;i--)
	cout<<a[i];
	return 0;
}