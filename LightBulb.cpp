#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>
#include <stack>
#include <deque>
#include <queue>
#include <map>
#include <set>
#include <iomanip>
#include <bitset>

#define ll long long
#define ld long double
#define endl '\n'
#define maxN 1000001
#define maxM 1000001
#define oo 1000000000000000001
#define Mod 1000000007
#define pii pair<ll,ll>
#define piii pair<ll,pii>
#define fi first
#define se second
#define sefi se.fi
#define sese se.se

#define pc putchar
#define gc getchar

using namespace std;
inline void read(int &x){ int c = gc();x = 0;int neg = 0;while((c<48 || c>57) && c != '-') c = gc();if(c=='-') {neg=1;c=gc();}for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}if(neg) x=-x;}
inline void write(int x){char buffor[12]; int i=0;int neg=0; if (x<0) {neg=1; x= -x;}do{buffor[i++]=(x%10)+'0';x/=10;} while(x);i--;if (neg) pc('-');while(i>=0) pc(buffor[i--]);}
inline void writeln(int x){write(x);pc('\n');}

inline void read(ll &x){ int c = gc();x = 0;int neg = 0;while((c<48 || c>57) && c != '-') c = gc();if(c=='-') {neg=1;c=gc();}for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}if(neg) x=-x;}
inline void write(ll x){char buffor[21]; int i=0;int neg=0; if (x<0) {neg=1; x= -x;}do{buffor[i++]=(x%10)+'0';x/=10;} while(x);i--;if (neg) pc('-');while(i>=0) pc(buffor[i--]);}
inline void writeln(ll x){write(x);pc('\n');}
ll n;
ll a[maxN];
ll cnt(0);
void Solve()
{
    for (int i=1;i<=n;i++)
    {
        if((a[i]+cnt)%2==0)
            cnt++;
    }
    cout<<"so lan thay doi trang thai can thiet la "<<cnt;
}
void Enter()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];//a[i] == 0 -> bong den tat, a[i] == 1 -> bong den bat
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("/Users/quanghuy/Desktop/Input.inp","r", stdin);
    // freopen("/Users/quanghuy/Desktop/Output.out","w", stdout);
    // freopen(".inp","r",stdin);
    // freopen(".out","w",stdout);
	Enter();    
    Solve();
}

