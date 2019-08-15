#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define tr(i,n)  for(int i=0;i<n;i++)
#define pb push_back
#define em emplace_back
#define ll long long int
#define mp make_pair
#define mt make_tuple
#define debug(c) cout<<c<<endl;
#define find(x,v)  find(all(v),c)!=v.end()
#define isro ios_base::sync_with_stdio(false);

using namespace std;
typedef vector<int>vi;
typedef vector<vi>vii;
typedef pair<int,int>pi;
typedef tuple<int,int,int>ti;

vi v1(1000,0);

void preorder(vi &v,int index){
    if(index<v.size()+1 and v[index]!=-1){
//        cout<<v[index]<<" ";
        if(2*index<v.size()+1 and index>0 and v[2*index]==v[index]+1){
            v1[2*index]=max(v1[2*index],v1[index]+1);
            cout<<2*index<<" "<<v1[2*index]<<endl;
        }

        if(2*index+1<v.size()+1 and index>0 and  v[2*index+1]==v[index]+1){
            v1[2*index+1]=max(v1[2*index+1],v1[index]+1);
        }

        preorder(v,2*index);
        preorder(v,2*index+1);
    }
}


void solve(vector<int>&A){
    preorder(A,1);
}


int main(){
    isro;
    int n;
    cin>>n;
    vi v(n+1,-1);

    for(int i=1;i<=n;i++){
        cin>>v[i];
    }

    solve(v);

    for(int i=0;i<=n;i++){
        cout<<v1[i]<<" ";
    }


}