#include <bits/stdc++.h>#define N 100010#define fi first#define se second#define ll long long using namespace std; ll b[N];int main(){    ll n;    cin >> n;    for(int i = 1; i <= n; i++)	cin >> b[i];    ll q;    cin >> q;    for(int i = 0; i < q; i++)    {    	ll l, r;    	cin >> l >> r;    	ll ans = 0;    	for(int j = l; j <= r; j++)	ans += b[j];    	cout << ans << endl;	}    return 0;}