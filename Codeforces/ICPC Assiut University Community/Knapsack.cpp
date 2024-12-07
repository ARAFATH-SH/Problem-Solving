#include<iostream>
using namespace std;

const int N = 22;
int n, max_allowed_weight, max_value, weight[N], value[N];

void solve(int item, int total_weight, int total_value) {
  if (item > n) {
    if (total_weight <= max_allowed_weight) {
      max_value = max(max_value, total_value);
      cerr<<max_value<<'\n';
    }
    return;
  }

  
  solve(item + 1, total_weight, total_value);

  solve(item + 1, total_weight + weight[item], total_value + value[item]);
}
int main() {
  cin >> n >> max_allowed_weight;
  for (int i = 1; i <= n; i++) {
    cin >> weight[i] >> value[i];
  }
  max_value = 0;
  solve(1, 0, 0);
  cout << max_value << '\n';
  return 0;
}