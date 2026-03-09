class Solution {
public:
    int firstUniqChar(string &s) {
        vector<int>cnt(26,0);

        for(int i=0; i<s.size(); i++){
            cnt[s[i] - 'a']++;
        }

        // int index = INT_MAX;
        // bool isUniq = false;
        // for(int i=0; i<26; i++){
        //     if(cnt[i]==1) {
        //     	isUniq = true;
        //         int newIndex = s.find(char(i+'a'));
        //         index = min(index, newIndex);
        //     }
        // }

        for(int i=0; i<s.size(); i++){
            if(cnt[s[i] - 'a'] == 1) return i;
        }

        // return isUniq ? index : -1;
        return -1;
    }
};