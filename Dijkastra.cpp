#include<bits/stdc++.h>
#include<string.h>
#define all(c) c.begin(),c.end()
#define ll long long int
#define tr(x,n) for(int i=x;x<n?i<n:i>n;x<n?i++:i--)
#define find(v,x)  find(all(v),x)!=v.end()
#define isro ios_base::sync_with_stdio(false)
#define em emplace_back
#define pb push_back


using namespace std;

typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;

ll Max=1e6;
vi visited(Max,0);
vi cost(Max,1e9);
queue<int>q;


void bfs(vector<pair<int,int>>*v){
//    cout<<"Hello Bharat Kumar"<<" "<<q.size()<<endl;
    if(q.size()>0){
        int t=q.front();
        q.pop();

        for(int i=0;i<v[t].size();i++){
            int node1=v[t][i].first;
            int weight=v[t][i].second;
            
            cost[node1]=min(cost[node1],cost[t]+weight);

            if(!visited[node1]){
                visited[node1]=1; 
                q.push(node1);
            }            
        }

        bfs(v);
    }

}


int main(){
    isro;
    int n,e;
    cin>>n>>e;

    vector<pair<int,int>>v[n+1];
   
    for(int i=0;i<e;i++){
           int u1,v1,w1;
           cin>>u1>>v1>>w1;
           v[u1].em(v1,w1);
    }

    q.push(1);
    cost[1]=0;

    bfs(v);

   for(int i=1;i<=n;i++){
       cout<<cost[i]<<"  ";
   }
}


/*
    for(auto i:v){
        
        for(auto j:i){
            cout<<j.first<<" "<<j.second<<endl;
        }

        cout<<endl;
    }


*/