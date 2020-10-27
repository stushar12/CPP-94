#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int p;
	cin>>p;
	while(p--)
	{
	    vector<int> v,v1;
	    int x;
	        cin>>x;
	        while(x!=0)
	        {
	       int dig=x%10;
	       v.push_back(dig);
	       v1.push_back(dig);
	       x=x/10;
	        }
	        reverse(v.begin(),v.end());
	        reverse(v1.begin(),v1.end());
	    
	    prev_permutation(v.begin(),v.end());
	    
	    sort(v1.begin(),v1.end());
	    reverse(v1.begin(),v1.end());
	    
	    int flag=0;
	    for(int i=0;i<v.size();i++)
	    {
	        if(v[i]==v1[i])
	        flag=1;
	        else
	        {
	        flag=0;
	        break;
	        }
	    }
	    if(flag==1)
	    {
	        cout<<"-1";
	    }
	    else
	    {
	    for(int i=0;i<v.size();i++)
	    {
	      cout<<v[i];
	    }
	    }
	    cout<<endl;
	}
}
