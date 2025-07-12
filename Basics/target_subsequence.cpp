#include <bits/stdc++.h>
using namespace std;

int n, a[20];
int target_sum; 
int cnt; 

void count_subsequences(int index, int current_sum) {

  if (index == n) {
    if (current_sum == target_sum) {
      cnt++; 
    }
    return;
  }

  count_subsequences(index + 1, current_sum + a[index]);

  count_subsequences(index + 1, current_sum);
}

int main() {

  cin>>n;
  for(int i=0; i<n; i++){
  	cin>>a[i];
  }       
  cin>>target_sum;
  count_subsequences(0, 0);

  cout << "Number of subsequences with sum " << target_sum << ": " << cnt << endl;

  return 0;
}