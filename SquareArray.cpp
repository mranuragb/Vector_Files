#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortedSquare(vector<int> &v)
{
	vector<int>ans;
	int s=0;
	int e=v.size()-1;
	
	while(s<=e)
	{
		if(abs(v[s])<abs(v[e]))
		{
			ans.push_back(v[e]*v[e]);
			e--; 
		}
		else
		{
			ans.push_back(v[s]*v[s]);
			s++;
		}
	}
	reverse(ans.begin(),ans.end());
	
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
}

int main()
{
	int n;
	cout<<"Enter the Size "<<endl;
	cin>>n;
	
	vector<int>v ;
	
	for(int i=0;i<n;i++)
	{
		int ele;
		cin>>ele;
		
		v.push_back(ele);
	}
	
	sortedSquare(v);
}
