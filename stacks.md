### stacks code using STL

```
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    
    // Deleting top element
    st.pop();
    
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}
```

<img width="1043" height="746" alt="image" src="https://github.com/user-attachments/assets/0c919479-0351-4fed-a112-b9e5ad02b9f8" />



