#include<bits/stdc++.h>
#include<string.h>
#define all(c) c.begin(),c.end()
#define ll long long int
#define tr(x,n) for(int i=x;x<n?i<n:i>n;x<n?i++:i--)
#define find(v,x)  find(all(v),x)!=v.end()
#define isro ios_base::sync_with_stdio(false)
#define em emplace_back
#define pb push_back
#define mk make_pair



using namespace std;

typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;

ll count1=0;

int min_coin(vi &v,ll cost,ll index){
    if(index<0){
        return 1e9;
    }
    else if(cost==0){
        return 0;
    }
    else if(v[index]>cost){
        return min_coin(v,cost,index-1);
    }
    else{
        return min(min_coin(v,cost-v[index],index)+1, min_coin(v,cost,index-1));
    }
}


int main(){
    isro;
    int t;
    cin>>t;
    while(t--){
        int n,cost;
        cin>>cost>>n;

        vi v(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        cout<<min_coin(v,cost,n-1)<<endl;

    }

}


/*
int min_coin(vi &v,ll cost,ll index){
    if(index<0){
        return 1e9;
    }
    else if(cost==0){
        return 0;
    }
    else if(v[index]>cost){
        return min_coin(v,cost,index-1);
    }
    else{
        return min(min_coin(v,cost-v[index],index)+1, min_coin(v,cost,index-1));
    }
}
*/

/*
void min_coin(vi &v,ll cost,ll index){
    if(cost==0){
//        cout<<"Hello Bharat Kumar"<<endl;
        count1++;
    }

    else if(index<0){
        return ;
    }

    else if(v[index]>cost){
        min_coin(v,cost,index-1);
    }
    else{
        min_coin(v,cost-v[index],index-1);
        min_coin(v,cost,index-1);
    }
}



*/
