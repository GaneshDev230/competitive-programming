//Given an array of integers  find the sum of its elements.For example, if the array ar[1,2,3],1+2+3 , so return 6 .

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    cout<<s;
    return 0;
}
