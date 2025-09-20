#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int scenario = 0;
  int number_of_teams;
  while (cin >> number_of_teams and number_of_teams > 0) {
    scenario++;
    cout << "Scenario #" << scenario << '\n';
    map<int, int> team_id;
    for (int i = 1; i <= number_of_teams; i++) {
      int team_members; cin >> team_members;
      while (team_members--) {
        int x; cin >> x;
        team_id[x] = i;
      }
    }
    queue<int> queue_of_teams;
    map<int, queue<int>> queue_of_team_members;
    string op;
    while (cin >> op and op != "STOP") {
      if (op == "ENQUEUE") {
        int x; cin >> x;

        int team = team_id[x];
        if (!queue_of_team_members[team].empty()) { // check if any member of his team is in the queue or not
          queue_of_team_members[team].push(x);
        }
        else {
          queue_of_teams.push(team);
          queue_of_team_members[team].push(x);
        }
      }
      else {
        int team_at_front = queue_of_teams.front();
        cout << queue_of_team_members[team_at_front].front() << '\n';
        queue_of_team_members[team_at_front].pop();

        if (queue_of_team_members[team_at_front].empty()) {
          queue_of_teams.pop();
        }
      }
    }
    cout << '\n';
  }
  return 0;
}