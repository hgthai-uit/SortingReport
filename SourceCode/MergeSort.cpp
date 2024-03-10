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

void merge(ll l, ll mid , ll r){
    ll n1 = mid - l + 1;
    ll n2 = r - mid;
    double L[n1 + 5], R[n2 + 5];
    for(int i = 1; i <= n1; i++)L[i] = a[l + i - 1];
    for(int i = 1; i <= n2; i++)R[i] = a[mid + i];
    ll i = 1, j = 1, k = l;
    while(i <= n1 && j <= n2){
        if(L[i] <= R[j])a[k] = L[i++];
        else a[k] = R[j++];
        k++;
    } 
    for(int x = i; x <= n1; x++)a[k++] = L[x];
    for(int x = j; x <= n2; x++)a[k++] = R[x];
}

void merge_sort(ll l , ll r){
    if(l >= r)return;
    ll mid = (l + r) >> 1;
    merge_sort(l, mid);
    merge_sort(mid + 1, r);
    merge(l, mid , r);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin>>n;
    for(int i = 1; i <= n ; i++)
        cin>>a[i];
    merge_sort(1, n);
    for(int i = 1; i <= n ; i++)
        cout<<a[i]<< " ";
    return 0;
}