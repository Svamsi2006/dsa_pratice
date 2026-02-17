
### remove duplicate
```
class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> last(26, 0);
        vector<bool> used(26, false);
        
        for (int i = 0; i < s.length(); i++) {
            last[s[i] - 'a'] = i;
        }
        
        stack<char> st;
        
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            
            if (used[c - 'a']) continue;
            
            while (!st.empty() && 
                   c < st.top() && 
                   last[st.top() - 'a'] > i) {
                
                used[st.top() - 'a'] = false;
                st.pop();
            }
            
            st.push(c);
            used[c - 'a'] = true;
        }
        
        string result = "";
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};

```
