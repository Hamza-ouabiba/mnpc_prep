#include <bits/stdc++.h>
#define IN insert
#define Pb push_back

using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> a;
    int ai;
    set<pair<int, int>> p;
    int n,m,k;
    cin>>n >> m >> k;

    for(int i=0;i<n;i++)
    {
      a.clear();
      for(int i=0;i<m;i++)
      {
        cin>>ai;
        a.Pb(ai);
      }
      //for ascending order :
        for(int i=0;i<m;i++)
        {
          for(int j=i+1;j<m;j++)
          {
            if(k == 0) {
              if(a[i] > a[j])
              {
                p.IN({i+1,j+1});
              } 
            } else {
              if(a[i] < a[j])
              {
                p.IN({j+1,i+1});
              } 
            }
          }
        }
    }
    cout<<p.size()<<'\n';
    for(auto elm : p)
    {
      cout<<elm.first<<" "<<elm.second<<'\n';
    }
    return 0;
}