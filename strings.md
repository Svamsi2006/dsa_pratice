## Reverse String using java is easy 
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

## In C++ we use to rverse string 
_By spliting the string with spaces and find space of _
