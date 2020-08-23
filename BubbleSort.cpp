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
    for(i=0;i<n-1;++i)
    {
        for(j=0;j<n-i-1;++j)
        {
            if(v[j]>v[j+1])
            {
                g=v[j];
                v[j]=v[j+1];
                v[j+1]=g;
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