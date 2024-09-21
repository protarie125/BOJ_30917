#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  bool a_found = false;
  bool b_found = false;
  ll a, b;
  ll q = 1;
  while (!a_found) {
    cout << "? A " << q << endl;
    ll ans;
    cin >> ans;

    if (1 == ans) {
      a_found = true;
      a = q;
      q = 1;
    } else {
      ++q;
    }
  }
  while (!b_found) {
    cout << "? B " << q << endl;
    ll ans;
    cin >> ans;

    if (1 == ans) {
      b_found = true;
      b = q;
      q = 1;
    } else {
      ++q;
    }
  }

  cout << "! " << a + b << endl;

  return 0;
}