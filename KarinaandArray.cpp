//Karina and Array
//link-->https://codeforces.com/contest/1822/submission/241219594



#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{   
	int end;
	cin>>end;
	
 
 
	for(int start=0;start<end;start++)
	{
	vector<long long int> input;
	vector<long long int> ans;
	long long int n,element;
	cin>>n;
	long long int store=0;
	for (long long int  i = 0; i < n; i++)
	{
		cin>>element;
		input.push_back(element);
	}
	sort(input.begin(),input.end());
	
	
		for (long long int j = 0; j < n-1; j++)
		{
			store=input[j]*input[j+1];
			ans.push_back(store);
 
		}
		
	long long int max=ans[0];
	for (long long int  i = 0; i < ans.size(); i++)
	{
		if (max<ans[i])
		{
			max=ans[i];
		}
		
	}
	cout<<max;
	cout<<endl;
	
}
	
}