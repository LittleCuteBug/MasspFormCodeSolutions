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
int n;
void Print (ld x)
{
    cout<<"Trong "<<n<<" nguoi:\n";
    cout<<fixed<<setprecision(10);
    cout<<"Xac suat de khong co cap nao co cung ngay sinh la "<<x<<endl;
    cout<<"Xac suat de co it nhat 1 cap co cung ngay sinh la "<<1-x<<endl;   
}
void Solve()
{
    if (n<=1)
    {
        Print(0);
        return;
    }
    if (n>=365)
    {
        Print(1);
        return;
    }
    
    ld ans = 1;
    for(int i=1; i<n;i++)
        ans = ans * (((ld) (365))-i ) /365;
    Print(ans);
    
}
void Enter()
{
    cin>> n; // so nguoi can tinh
}
int main()
{
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //cout.tie(NULL);
    // freopen("Inp.inp","r",stdin);
    // freopen("Out.out","w",stdout);
	Enter();    
    Solve();
}

