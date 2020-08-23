#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Size of array:";
    cin>>n;
    vector<int> v(n);
    int i,j,g,num;
    for(i=0;i<n;++i)
    {
        cout<<"Enter a number:";
        cin>>v[i];
    }
    for(i=1;i<n;++i)
    {
        num=v[i];
        j=i-1;
        while(j>=0)
        {
            if(v[j]<=num) break;
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=num;
    }
    cout<<"Array after Bubble Sort:\n";
    for(i=0;i<n;++i)
    {
        cout<<v[i]<<"\t";
    }
    return 0;
}