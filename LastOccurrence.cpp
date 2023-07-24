#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>v;
	int n;
	cout<<"Enter the size "<<endl;
	cin>>n;
	
	int ele;
	cout<<"Enter the Element "<<endl;
	
	for(int i=0;i<n;i++)
	{
		cin>>ele;
		v.push_back(ele);
	}
	
	int x;
	cout<<"Enter X : "<<endl;
	cin>>x;
	int count=0;
	int occurence = -1;
	for(int i=0;i<v.size();i++)
	{
		if(v[i]==x)
		{
			occurence = i;
		}
		count++;
	}
	cout<<"count"<<count<<endl;
	cout<<"Occurrence "<<occurence<<endl;
	
	//Optimized 
	
	for(int i=v.size()-1;i>=0;i--)
	{
		if(v[i]==x)
		{
			occurence = i;
			break;
		}
		count++;
	}
	cout<<"count"<<count<<endl;
	
	cout<<"Occurrence "<<occurence<<endl;
	
	return 0;
}
