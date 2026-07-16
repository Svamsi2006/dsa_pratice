# C++ Containers Comparison

This table summarizes the common STL containers and the operations they support.

| Container   | Insert at End       | Insert at Front     | Remove from End       | Remove from Front     | Iteration Support | Notes                          |
|-------------|---------------------|---------------------|-----------------------|-----------------------|------------------|--------------------------------|
| **queue**   | `push(x)`           | ❌                  | ❌                    | `pop()`               | ❌                | FIFO (First-In-First-Out)      |
| **deque**   | `push_back(x)`      | `push_front(x)`     | `pop_back()`          | `pop_front()`         | ✅                | Double-ended queue             |
| **vector**  | `push_back(x)`      | ❌                  | `pop_back()`          | ❌                    | ✅                | Dynamic array, random access   |
| **stack**   | `push(x)` (top)     | ❌                  | `pop()` (top)         | ❌                    | ❌                | LIFO (Last-In-First-Out)       |
| **list**    | `push_back(x)`      | `push_front(x)`     | `pop_back()`          | `pop_front()`         | ✅                | Doubly linked list             |

---

## Example Code Snippets

### Queue
```cpp
#include <queue>
queue<int> q;
q.push(10);   // insert at end
q.pop();      // remove from front
```
### Deque
```cpp
#include <deque>
deque<int> dq;
dq.push_back(20);   // insert at end
dq.push_front(10);  // insert at front
dq.pop_back();      // remove from end
dq.pop_front();     // remove from front
```
### Vector
```cpp
#include <vector>
vector<int> v;
v.push_back(30);   // insert at end
v.pop_back();      // remove from end
```

Stack
```cpp
#include <stack>
stack<int> st;
st.push(40);   // insert at top
st.pop();      // remove from top
```

### List
```cpp
#include <list>
list<int> l;
l.push_back(50);   // insert at end
l.push_front(5);   // insert at front
l.pop_back();      // remove from end
l.pop_front();     // remove from front

```

| Operation | Vector | Deque | List | Queue | Stack |
| --- | --- | --- | --- | --- | --- |
| Insert at End | O(1)* | O(1) | O(1) | O(1) | O(1) |
| Insert at Front | ❌ | O(1) | O(1) | ❌ | ❌ |
| Remove from End | O(1) | O(1) | O(1) | ❌ | O(1) |
| Remove from Front | ❌ | O(1) | O(1) | O(1) | ❌ |
| Random Access | O(1) | O(1) | O(n) | ❌ | ❌ |

