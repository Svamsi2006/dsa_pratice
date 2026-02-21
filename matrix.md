# C++ Pattern Printing Programs

This repository contains various C++ programs that demonstrate pattern printing using loops. Below are different patterns along with their C++ code and outputs.

---

### 1. Square Pattern of Stars

This pattern prints a 5x5 square of stars (`*`).

```cpp
for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
        cout << "*" << " ";
    }
    cout << "\n";
}
```
Output:
```
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * *
```
2. Right-Angle Triangle Pattern (Ascending Stars)

This pattern prints a right-angled triangle with ascending stars.
```
for(int i = 0; i < 5; i++) {
    for(int j = 0; j <= i; j++) {
        cout << "*" << " ";
    }
    cout << "\n";
}
```

Output:
```
* 
* * 
* * * 
* * * * 
* * * * *
```
3. Right-Angle Triangle Pattern (Descending Stars)

This pattern prints a right-angled triangle with descending stars.
```
for(int i = 5; i >= 0; i--) {
    for(int j = 0; j <= i; j++) {
        cout << "*" << " ";
    }
    cout << "\n";
}
```
Output:
```
* * * * * 
* * * * 
* * * 
* * 
*
```
4. Right-Angle Triangle Pattern (Ascending Numbers)

This pattern prints a right-angled triangle with numbers in ascending order.
```
for(int i = 0; i < 5; i++) {
    for(int j = 0; j <= i; j++) {
        cout << j << " ";
    }
    cout << "\n";
}
```
Output:
```
0 
0 1 
0 1 2 
0 1 2 3 
0 1 2 3 4
```
5. Right-Angle Triangle Pattern (Descending Numbers)

This pattern prints a right-angled triangle with numbers in descending order.
```
for(int i = 5; i >= 0; i--) {
    for(int j = 0; j < i; j++) {
        cout << j << " ";
    }
    cout << "\n";
}
```

Output:
```
0 1 2 3 4 
0 1 2 3 
0 1 2 
0 1 
0
```
6. Right-Angle Triangle Pattern (Repeating Row Numbers)

This pattern prints a right-angled triangle where the row number is repeated across the row.
```
for(int i = 0; i < 5; i++) {
    for(int j = 0; j <= i; j++) {
        cout << i << " ";
    }
    cout << "\n";
}
```
Output:
```
0 
1 1 
2 2 2 
3 3 3 3 
4 4 4 4 4
```
Complete C++ Code

Below is the full code for all patterns:
```
#include <iostream>
using namespace std;

int main() {
    // 1. Square Pattern of Stars
    cout << "1. Square Pattern of Stars\n";
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cout << "*" << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    // 2. Right-Angle Triangle Pattern (Ascending Stars)
    cout << "2. Right-Angle Triangle Pattern (Ascending Stars)\n";
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j <= i; j++) {
            cout << "*" << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    // 3. Right-Angle Triangle Pattern (Descending Stars)
    cout << "3. Right-Angle Triangle Pattern (Descending Stars)\n";
    for(int i = 5; i >= 0; i--) {
        for(int j = 0; j <= i; j++) {
            cout << "*" << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    // 4. Right-Angle Triangle Pattern (Ascending Numbers)
    cout << "4. Right-Angle Triangle Pattern (Ascending Numbers)\n";
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j <= i; j++) {
            cout << j << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    // 5. Right-Angle Triangle Pattern (Descending Numbers)
    cout << "5. Right-Angle Triangle Pattern (Descending Numbers)\n";
    for(int i = 5; i >= 0; i--) {
        for(int j = 0; j < i; j++) {
            cout << j << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    // 6. Right-Angle Triangle Pattern (Repeating Row Numbers)
    cout << "6. Right-Angle Triangle Pattern (Repeating Row Numbers)\n";
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j <= i; j++) {
            cout << i << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
```
###### Thankyou
