#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Size of array:";
    cin>>n;
    vector<int> v(n);
    int i,j,g;
    for(i=0;i<n;++i)
    {
        cout<<"Enter a number:";
        cin>>v[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;++j)
        {
            if(v[i]>v[j])
            {
                g=v[i];
                v[i]=v[j];
                v[j]=g;
            }
        }
    }
    cout<<"Array after Bubble Sort:\n";
    for(i=0;i<n;++i)
    {
        cout<<v[i]<<"\t";
    }
    return 0;
}