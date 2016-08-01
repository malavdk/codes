#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int t,i,n,m,j,k,input,cnt,sjs,st,sz,l;
	vector <int> vec[100];
	vector <int> v[30];
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n>>m;
		for(j=0;j<m;j++)
		{
			cin>>input;
			v[j].push_back(input);
			for(k=0;k<v[j][0];k++)
			{
				cin>>input;
				v[j].push_back(input);
			}
			
		}
		for(i=0;i<n;i++)
		{
			vec[0].push_back(i);
		}
		cnt=0;
		for(i=0;i<m;i++)//for each Si
		{
			sjs=v[i].size();
			for(j=0;j<=cnt;j++)//for each As
			{
				st=0;
				sz=vec[j].size();
				for(k=0;k<sz;k++)
				{
					for(l=0;l<sjs;l++)
					{
						if(vec[j][k]!=v[i][l])
						{
							if(st==0)
							cnt++;
							vec[cnt].push_back(vec[j][k]);
							//add one for deleting
						}
						
					}
				}
			}
		}
		cout<<cnt+1;
	}
}
