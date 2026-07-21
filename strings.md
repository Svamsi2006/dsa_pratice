## Finding Length of Last Word in a String  using java is easy 
```
public class SplitExample {
    public static void main(String[] args) {
        String s = "  Hello   world   Java  ";
        
        // Remove leading/trailing spaces, then split by one or more spaces
        String[] parts = s.trim().split("\\s+");
        
        for (String word : parts) {
            System.out.println(word);
        }
    }
}
```

## In C++ Finding  Length of Last Word
_By spliting the string with spaces and find size of last element_
**(Optimal)**
```
class Solution {
public:
    int lengthOfLastWord(string s) {
        int si=s.size()-1;
        int len=0;
        while(si>=0 && s[si]==' '){
            si--;
        }
        
        while(si>=0 && s[si]!=' '){
            len++;
            si--;
        }
        return len;
    }
};
```

## ok code 

```
class Solution {
public:
    int lengthOfLastWord(string s) {
        // Read whitespace-separated tokens; the last one is the last word
        istringstream stream(s);
        string word, last;
        while (stream >> word) {
            last = word;
        }
        return last.length();
    }
};
```


