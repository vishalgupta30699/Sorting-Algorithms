#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Size of array:";
    cin>>n;
    vector<int> v(n);
    int i,j,g,largest,queue[n][n],rear[n],front[n],e,f,y,z,nod;
    memset(rear,0,sizeof(rear));
    memset(front,0,sizeof(front));
    for(i=0;i<n;++i)
    {
        cout<<"Enter a number:";
        cin>>v[i];
    }
    largest=v[0];
    for(i=1;i<n;++i)
    {
        if(largest<v[i]) largest=v[i];
    }
    nod=1;
    while(largest>9)
    {
        nod++;
        largest/=10;
    }
    e=1;
    f=10;
    while(nod--)
    {
        for(y=0;y<n;++y)
        {
            i=(v[y]%f)/e;
            queue[i][rear[i]++]=v[y];
        }
        y=0;
        z=0;
        while(y<n)
        {
            while(rear[z]>0)
            {
                v[y]=queue[z][front[z]++];
                y++;
                if(rear[z]==front[z]) rear[z]=front[z]=0;
            }
            z++;
        }
        e=e*10;
        f=f*10;
    }
    cout<<"Array after Bubble Sort:\n";
    for(i=0;i<n;++i)
    {
        cout<<v[i]<<"\t";
    }
    return 0;
}