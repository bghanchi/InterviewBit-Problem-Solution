#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define tr(n,x) for(int i=x;x<n?i<n:i>=n;x<n?i++:i--)
#define ll long long int
#define pb push_back
#define em emplace_back
#define mk make_pair
#define isro ios_base::sync_with_stdio(false)
#define find(v,x) find(all(v),x)!=v.end()
#define debug(c) cout<<c<<endl;

using namespace std;
typedef vector<ll>vi;
typedef vector<vi>vii;
typedef vector<string>si;
typedef vector<si>sii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;

bool check(map<string,string>&m, map<string,int>&m1,string root){
    
    string str;
    while(1){
        if (m.count(root)>0){
                if (m1[root]==0){
                    cout<<"Yes";
                    return 1;
                } 
                str=m[root];
                m1[root]--;
                root=str[str.length()-1];            
        }

        else{
            cout<<"No";
            return 0;

        }

    }
    
}

int main(){
    isro;

    int n;
    cin>>n;

    map<string,string>m;
    map<string,int>m1 ;

    string root;
    for(int i=0;i<n;i++){

        string X,ch;
        cin>>X;
               
        ch=X[0];

        m[ch]=X;
        m1[ch]+=1;

        if (i==0)
             root=ch;
    }
    
    check(m,m1,root);
    
//      cout<<root<<endl;

//    m["Hello"]={"Hai",0};


}


//    cout<<m["Hello"].first<<" "<<m["Hello"].second<<endl;


/*
    string str=m[root].first;
    while(1){
        if (m[str[0]]!=0){
            if (m[str[0].second==1]){
                   cout<<"yes";
                   return 1;
            }

            str=m[str[0]].first;
            m[str[0]].second=1;

        } 
        else{
            cout<<"NO";
            return 0;
            break;
        }
    }

*/