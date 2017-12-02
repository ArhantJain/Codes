// SATYAMEVA JAYATE

// Link :http://codeforces.com/problemset/problem/887/A : Implementation

#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int flag=0,i,n,count=0;
	char str[105];
	cin >> str;
	n = strlen(str);
	for(i=0;i<n;i++)
	{
		if(str[i]=='1')
			flag=1;
		if(str[i]=='0' && flag==1)
			count++;
	}
	if(count>=6)
		cout<<"yes\n";
	else
		cout<<"no\n"; 
	return 0;
}

