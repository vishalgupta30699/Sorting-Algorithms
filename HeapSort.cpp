#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Size of array:";
    cin>>n;
    vector<int> v(n);
    int i,j,g,ci,ri,lci,rci,swi,y,u;
    for(i=0;i<n;++i)
    {
        cout<<"Enter a number:";
        cin>>v[i];
    }
    for(y=1;y<n;++y)
    {
        ci=y;
        while(ci>0)
        {
            ri=(ci-1)/2;
            if(v[ci]>v[ri])
            {
                g=v[ci];
                v[ci]=v[ri];
                v[ri]=g;
            }
            ci=ri;
        }
    }
    u=n-1;
    while(u>0)
    {
        g=v[0];
        v[0]=v[u];
        v[u]=g;
        u--;
        ri=0;
        while(ri<u)
        {
            lci=(ri*2)+1;
            rci=lci+1;
            if(lci>u) break;
            if(rci>u) swi=lci;
            else
            {
                if(v[lci]>v[rci]) swi=lci;
                else swi=rci;
            }
            if(v[ri]<v[swi])
            {
                g=v[ri];
                v[ri]=v[swi];
                v[swi]=g;
            }
            ri=swi;
        }
    }
    cout<<"Array after Bubble Sort:\n";
    for(i=0;i<n;++i)
    {
        cout<<v[i]<<"\t";
    }
    return 0;
}