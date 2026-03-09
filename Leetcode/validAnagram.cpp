class Solution {
public:
    bool isAnagram(string &s, string &t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        
        int size1 = s.size();
        int size2 = t.size();

        vector<int>cnt(27, 0);

        if(size1 != size2) return false;

        for(int i=0; i<size1; i++) {
            cnt[s[i] - 'a']++;
            cnt[t[i] - 'a']--;
        }

        for(int i=0; i<26; i++){
            if(cnt[i] < 0 || cnt[i] > 0) return false;
        }

        return true;
    }
};