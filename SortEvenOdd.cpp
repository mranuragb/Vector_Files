#include<iostream>
#include<vector>
using namespace std;

void EvenOdd(vector<int> &v)
{
	int start = 0;
	int end = v.size()-1;
	
	while(start<end)
	{
		if(v[start]%2==1 && v[end]%2==0)
		{
			swap(v[start],v[end]);
			start++;
			end--;
		}
		
		if(v[start]%2==0)
		{
			start++;
		}
		
		if(v[end]%2==1)
		{
			end--;
		}
	}
	
}

int main()
{
	int n;
	cout<<"Enter the Size "<<endl;
	cin>>n;
	
	vector<int>v;
	
	for(int i=0;i<n;i++)
	{
		int ele;
		cin>>ele;
		v.push_back(ele);
	}
	EvenOdd(v);
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
