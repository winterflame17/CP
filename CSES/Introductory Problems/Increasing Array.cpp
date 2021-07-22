#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin >> n;
  vector<long long> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  long long ans = 0;
  for (int i = 1; i < n; i++) {
    ans += max(0LL, a[i - 1] - a[i]);
    a[i] = max(a[i], a[i - 1]);
  }
  cout << ans;
  
  return 0;
}
