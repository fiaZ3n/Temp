/// To iterate circular string
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void fun(){
    int n, q; 
    cin>>n>>q;
    string s; cin>>s;
    vector<int>a(q);
    for(int i = 0; i<q; i++) cin>>a[i];
    string check = " ";
    int mx = 1e9/n;

    for(auto u: a){
        int cnt = 0;
        int sum = u;
        int i = 0;
        while(sum>0){
            if(s[i%n]=='A') sum--;
            else sum/=2;
            i++;
            cnt++;
        }
        cout<<cnt<<endl;
        
    }
    

}
       


int32_t main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int t; t = 1;
cin>>t;
while(t--){
fun();
}
}
