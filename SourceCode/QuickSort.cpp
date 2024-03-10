#include <bits/stdc++.h>
using namespace std;
#define st first
#define nd second
#define ll long long
#define endl '\n'
const int N=1e6+10;
// hgthai-uit

mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
double a[N];
ll n;

ll random(ll l, ll r) {
    return rd() % (r - l + 1) + l;
}

void quick_sort(ll l, ll r) {
    if (l >= r) 
        return;
    ll t = random(l, r);
    swap(a[t], a[r]);
    t = r;
    ll i = l, j = r - 1;
    while (i <= j) {
        while (i <= j && a[i] <= a[t])
            i++;
        while (i <= j && a[j] > a[t])
            j--;
        if (i <= j)
            swap(a[i++], a[j--]);
    }
    swap(a[t], a[i]);
    quick_sort(l, i - 1);   
    quick_sort(i + 1, r);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin>>n;
    for (int i = 1; i <= n; i++)
        cin>>a[i];
    quick_sort(1, n);
    for(int i = 1; i <= n ; i++)
        cout<<a[i]<<" ";
    return 0;
}