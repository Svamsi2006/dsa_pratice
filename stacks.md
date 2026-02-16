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


### Insert an Element at the Bottom of a Stack

Input:
n = 5
x = 2
st = {4,3,2,1,8}
Output:
{2,4,3,2,1,8}
Explanation:
After insertion of 2, the final stack will be {2,4,3,2,1,8}. 

```
class Solution {
  public:
    stack<int> insertAtBottom(stack<int> st, int x) {
        stack<int> temp;
        while(!st.empty()){
            temp.push(st.top());
            st.pop();
        }
        st.push(x);
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
        return st;
    }
};
```


### reverse a stack 
