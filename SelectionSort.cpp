#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Size of array:";
    cin>>n;
    vector<int> v(n);
    int i,j,g,min_ind;
    for(i=0;i<n;++i)
    {
        cout<<"Enter a number:";
        cin>>v[i];
    }
    for(i=0;i<n-1;++i)
    {
        min_ind=i;
        for(j=i+1;j<n;++j)
        {
            if(v[min_ind]>v[j])
            {
                min_ind=j;
            }
        }
        g=v[min_ind];
        v[min_ind]=v[i];
        v[i]=g;
    }
    cout<<"Array after Bubble Sort:\n";
    for(i=0;i<n;++i)
    {
        cout<<v[i]<<"\t";
    }
    return 0;
}