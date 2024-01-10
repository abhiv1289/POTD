//binarysearch
//link to the question
//link--> https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbHA1QTNRTTdSOERyNGxmYzJuWnQ3WmxDeEZfZ3xBQ3Jtc0tuelB0WWtCSklBX2NNRXFhV0FxNFp1YkNSbmJOenBqWW9mbzRmUzhtUWZvVjgtT2N1dURfYWc4ZVhEaUtPNmtoV0dTYkcySDRldXFLdFlYZjNrMjZsVlZWS2N6QmtXN3BPeE1MeUxfMjVrMnpOSXFtbw&q=https%3A%2F%2Fwww.spoj.com%2Fproblems%2FEKO%2F&v=YTTdLgyqOLY


#include<iostream>
#include<vector>
using namespace std;
bool ispossible(vector<int> &arr,int mid,int M)
{
int n=arr.size();
int collectedwood=0;
for (int i = 0; i < n; i++)
{
	 if (mid<=arr[i])
	 {
			collectedwood=collectedwood+(arr[i]-mid);
	 }
	 
}
if (collectedwood>=M)
{
		return true;
}
else 
{
	return false;
}







}
int main()
{
	int N,M;
	int element;
	cout<<"Enter no. of trees: "<<endl;
	cin>>N;
	cout<<"Enter the minimum required metres of wood: "<<endl;
	cin>>M;
	vector<int> hot;
	cout<<"Enter the heights of the trees: "<<endl;
	for (int i = 0; i < N; i++)
	{
		cin>>element;
		hot.push_back(element);
	}
	//find the maximum and minimum heights of the trees
	int max=hot[0];
	int min=hot[0];
	for (int i = 0; i < N; i++)
	{
		if (max<hot[i])
		{
			max=hot[i];
		}
		if (min>hot[i])
		{
			min=hot[i];
		}
		
		
	}
	//apply binary search
	int s=min;
	int e=max;
	int mid=s+(e-s)/2;
	int ans=-1;
	while (s<e)
	{
		if (ispossible(hot,mid,M))
		{
			ans=mid;
			s=mid+1;
		}
		else
		{
			e=mid-1;
		}
		mid=s+(e-s)/2;
		
	}
	cout<<ans;
	
	

	


}