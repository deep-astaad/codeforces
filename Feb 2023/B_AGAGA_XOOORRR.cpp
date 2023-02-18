/* Code by : Aman Deep (deep_aman/astaad) */
#include <bits/stdc++.h>
using namespace std;
#define deep_aman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define int long long int
#define vll vector <ll>
#define pll pair <ll, ll>
#define vvll vector <vector <ll>>
#define vpll vector <pair <ll, ll>>
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
#define sp " "
#define endl "\n"
#define nn "\n"
#define cyes cout << "YES" << nn;
#define cno cout << "NO" << nn;
#define nl cout << nn;
const ll mod = 1e9 + 7;
/*


*/
void astaad()
{
	int n; cin >> n;
	vll v(n);
	vll prefix(n + 1);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
		prefix[i + 1] = prefix[i] ^ v[i];
	}
	if (prefix[n] == 0) {
		cyes;
		return;
	}
	int temp = 0, cnt = 0;
	for (int i = 0; i < n; ++i)
	{
		temp ^= v[i];
		if (temp == prefix[n]) {
			cnt++;
			temp = 0;
		}
	}
	// cout << cnt << nn;
	if (cnt >= 2) {
		cyes;
	}
	else {
		cno;
	}
	// // divide in 2 equal xor parts
	// if (prefix[n] == 0) {
	// 	cyes;
	// 	return;
	// }
	// // divide in 3 equal xor parts
	// for (int i = 1; i <= n; ++i)
	// {
	// 	for (int j = i + 1; j < n; ++j)
	// 	{
	// 		if ((prefix[i] == (prefix[j]^prefix[i])) && (prefix[i] == (prefix[n]^prefix[j]))) {
	// 			cyes;
	// 			return;
	// 		}
	// 	}
	// }
	// cno;
}

int32_t main()
{
	deep_aman;
	ll testcase = 1;
	cin >> testcase;
	while (testcase--) astaad();
	return 0;
}