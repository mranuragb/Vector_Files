#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the size "<<endl;
	cin>>n;
	
	vector<int>v;
	int k=2;
	k=k%v.size();
	
	for(int i=0;i<n;i++){
		int ele;
		cin>>ele;
		v.push_back(ele);
	}
	
	reverse(v.begin(),v.end());
	reverse(v.begin(),v.begin()+k);
	reverse(v.begin()+k,v.end());
	
	for(int i=0;i<v.size();i++)
	{
		cout<<i<<" ";
	}
	cout<<endl;
}
