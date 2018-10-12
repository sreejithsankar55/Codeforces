#include < bits / stdc++.h > #define ll long long# define ld long double
bool isPrime(ll n) {
  if (n <= 1)
    return false;
  if (n <= 3)
    return true;
  if ((n % 2 == 0) || (n % 3 == 0))
    return false;

  for (ll i = 5; i * i <= n; i += 6)
    if (n % i == 0 || (n % (i + 2)) == 0)
      return false;

  return true;
}
using namespace std;
int main() {
  ll t;
  cin >> t;
  while (t--) {
    ll n, c;
    cin >> n;
    ll q = (sqrt(n));
    c = isPrime(q);

    if (n == 1)
      cout << "NO" << endl;
    else if (c) {
      if ((q * q) == (n))
        cout << "YES" << endl;
      else
        cout << "NO" << endl;
    } else
      cout << "NO" << endl;
  }

  return 0;
}
