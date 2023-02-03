// Coded by : Aman Deep (deep_aman/astaad)
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector <ll>
#define vvll vector<vector<ll>>
#define vpll vector<pair<ll,ll>>
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
#define cyes cout<<"YES"<<"\n"
#define cno cout<<"NO"<<"\n"
#define sp " "
#define nn "\n"
#define nl cout<<nn;
#define max3(a, b, c) max(max((a), (b)), (c))
#define max4(a, b, c, d) max(max((a), (b)), max((c), (d)))
#define min3(a, b, c) min(min((a), (b)), (c))
#define min4(a, b, c, d) min(min((a), (b)), min((c), (d)))
//-------------------------------------------------------------------------------//
const ll M = 1e9+7;
/*
int zoneCheck(vector<string> stationsA, vector<string> stationsB, vector<string> stationsC, string station){
    for (int i = 0; i < stationsA.size(); ++i)
    {
        if(station == stationsA[i]) return 1;
    }
    for (int i = 0; i < stationsB.size(); ++i)
    {
        if(station == stationsB[i]) return 2;
    }
    for (int i = 0; i < stationsC.size(); ++i)
    {
        if(station == stationsC[i]) return 3;
    }
    return -1;
}
string solve(vector<string> stationsA, vector<string> stationsB, vector<string> stationsC, string origin, string destination){
        int org = zoneCheck(stationsA, stationsB, stationsC, origin);
        int dest = zoneCheck(stationsA, stationsB, stationsC, destination);
        if(org == -1 || dest == -1){
            return "";
        }
        if(org>dest){
            swap(org,dest);
        }
        if(org == 1 && dest == 1){
            return "AB";
        }
        if(org == 1 && dest == 2){
            return "AB";
        }
        if(org == 2 && dest == 2){
            return "AB";
        }
        if(org == 2 && dest == 3){
            return "BC";
        }
        if(org == 1 && dest == 3){
            return "ABC";
        }
        if(org == 3 && dest == 3){
            return "BC";
        }
        return "";
}
{
    set<int> st;
    for (int i = 0; i < state.size(); ++i)
    {
        if(state[i]==0){
            st.insert(i);
        }
    }
    for (int i = 0; i < operations.size(); ++i)
    {
        if(operations[i]=="L"){
            if(st.size()>0){
                int idx=*(st.begin());
                st.erase(idx);
                state[idx]=1;
            }
        }
        else if(operations[i][0]=='C'){
            string index="";
            for (int j = 1; j < operations[i].size(); ++j)
            {
                index+=operations[i][j];
            }
            int idx=stonum(index);
            state[idx]=0;
            st.insert(idx);
        }
    }
    string ans="";
    for (int i = 0; i < state.size(); ++i)
    {
        ans+=('0'+state[i]);
    }
    return ans;


void fillA(vector<vector<int>> &v,int n,int m, int val){
    int r=0,c=0;
    while(r<n){
        if(v[r][c]==0){
            v[r][c]=val;
            return;
        }
        c++;
        if(c==m){
            c=0;
            r++;
        }
    }
}

void fillB(vector<vector<int>> &v,int n,int m, int val){
    int r=0,c=0;
    while(r<n){
        if(c+2<=m-1 && v[r][c]==0 && v[r][c+1]==0 && v[r][c+2]==0){
            v[r][c]=v[r][c+1]=v[r][c+2]=val;
            return;
        }
        c++;
        if(c>m-3){
            c=0;
            r++;
        }
    }
}

void fillC(vector<vector<int>> &v,int n,int m, int val){
    int r=0,c=0;
    while(r+1<=n-1){
        if(r+1<=n-1 && c+1 <= m-1 && v[r][c]==0 && v[r][c+1]==0 && v[r+1][c]==0 && v[r+1][c+1]==0){
            v[r][c]=v[r][c+1]=v[r+1][c]=v[r+1][c+1]=val;
            return;
        }
        c++;
        if(c>m-2){
            c=0;
            r++;
        }
    }
}

void fillD(vector<vector<int>> &v,int n,int m, int val){
    int r=0,c=0;
    while(r+2<=n-1){
        if(r+2<=n-1 && c+1 <= m-1 && v[r][c]==0 && v[r+1][c]==0 && v[r+2][c]==0 && v[r+1][c+1]==0){
            v[r][c]=v[r+1][c]=v[r+2][c]=v[r+1][c+1]=val;
            return;
        }
        c++;
        if(c>m-2){
            c=0;
            r++;
        }
    }
}

void fillE(vector<vector<int>> &v,int n,int m, int val){
    int r=0,c=0;
    while(r+1<=n-1){
        if(r+1<=n-1 && c+2 <= m-1 && v[r+1][c]==0 && v[r+1][c+1]==0 && v[r+1][c+2]==0 && v[r][c+1]==0){
            v[r+1][c]=v[r+1][c+1]=v[r+1][c+2]=v[r][c+1]=val;
            return;
        }
        c++;
        if(c>m-3){
            c=0;
            r++;
        }
    }
}

vector<vector<int>> solve(int n, int m, vector<char> figures){

    vector<vector<int>> v(n,vector<int> (m));
    for (int i = 0; i < figures.size(); ++i)
    {
        int r=0,c=0;
        if(figures[i]=='A'){
            fillA(v,n,m,i+1);
        }
        else if(figures[i]=='B'){
            fillB(v,n,m,i+1);
        }
        else if(figures[i]=='C'){
            fillC(v,n,m,i+1);
        }
        else if(figures[i]=='D'){
            fillD(v,n,m,i+1);
        }
        else{
            fillE(v,n,m,i+1);
        }
    }
    return v;

}



*/

void solve(){
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll testcase;
    testcase = 1;
    // cin >> testcase;
    while (testcase--)
    {
        solve();
    }
    return 0;
}