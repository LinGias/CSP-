#include<iostream>
using namespace std;
#define N 1001
int main()
{
    int n,k;
    int a[N];
    int count=0;
    int weight=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n;j++)
    {
        weight+=a[j];
        if(weight>=k)
        {
            count++;
            weight =0;
        }
    }
    if(weight!=0)
        count++;
    cout<<count<<endl;
}
