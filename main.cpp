#include<bits/stdc++.h>

using namespace std;

#define lli long long


    int main() {
        lli n,m,sum,max_sum;
        cin >> n >> m;
        int a[n];
        for(int i=1;i<=n;i++)cin >> a[i];
        int l=1;
        max_sum=0;
        sum=0;
        for(int i=1;i<=n;i++)
        {
            sum=sum+a[i];
            while(sum>m)
            {
                sum=sum-a[l++];
                if(max_sum<=sum && sum<=m)
                {
                    max_sum=sum;
                    break;
                }
            }
            if(max_sum<=m && sum<=m)
            {
                max_sum=sum;
            }
        }
      cout << max_sum << endl;

       return 0;
    }


