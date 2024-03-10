#include <bits/stdc++.h>
using namespace std;
#define st first
#define nd second
#define ll long long
#define endl '\n'
const int N=1e6+1;
// hgthai-uit

double a[N];
ll n;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin>>n;
    for(int i = 1; i <= n ; i++)
        cin>>a[i];
    sort(a + 1, a + n + 1);
    for(int i = 1; i <= n ; i++)
        cout<<a[i]<< " ";
    return 0;
}