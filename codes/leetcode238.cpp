#include<bits/stdc++.h>
using namespace std;

vector<int> getanswer(vector<int> arr)
{
    int n= arr.size();
    vector<int> ans(n,1);

    int prefix= 1;
    for(int i=0;i<n;i++)
    {
        ans[i]= prefix;
        prefix*= arr[i];
    }

    int suffix=1;
    for(int i=n-1;i>=0;i--)
    {
        ans[i]*= suffix;
        suffix*= arr[i];
    }
    return ans;
}

int main()
{
    vector<int> arr= {1,2,3,4};
    vector<int> ans= getanswer(arr);
    for(auto it: ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}