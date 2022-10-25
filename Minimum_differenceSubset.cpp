int MinimumDifferenceSubset::solve(vector<int> &A) {
    int n=A.size(),tsum=0;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        tsum=tsum+A[i];
    }
    int dp[n+1][tsum+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<tsum+1;j++)
        {
            if(i==0) dp[i][j]=0;
            if(j==0) dp[i][j]=1;
        }
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=0;j<tsum+1;j++)
        {
            if(A[i-1]<=j)
            {
                dp[i][j]=(dp[i-1][j-A[i-1]])||(dp[i-1][j]);
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    for(int j=0;j<=(tsum)/2;j++)
    {
        if(dp[n][j]==1)
        {
            v.push_back(j);
        }
    }
    int mn=INT_MAX;
    for(int i=0;i<v.size();i++)
    {
        mn=min(mn,tsum-(2*v[i]));
    }
    return mn;
    
}
