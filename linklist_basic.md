### delete node
```public:
    void deleteNode(ListNode* node) {
        
        node->val=node->next->val;
        node->next=node->next->next;
        
    }
};
```
## insert at first code 
```
#include<iostream>
using namespace std;
struct node {
    int data;
    node *link;
};
```
## insert at first code
```
void insert_at_first(node **head, int c) {
    node *vnew = new node();
    vnew->data = c;
    vnew->link = *head;
    *head = vnew;
}
```
## insert at end code 
```
void insert_at_end(node **head, int c) {
    node *vnew = new node();
    vnew->data = c;
    vnew->link = NULL;

    if (*head == NULL) {
        *head = vnew;
    } else {
        node *temp = *head;
        while (temp->link != NULL) {
            temp = temp->link;
        }
        temp->link = vnew;
    }
}
```
### print linklist
```
void print(node *head,int x[5]) {
    int t=0;
    node *newv = head;
    while (newv != NULL) {
        x[t]=newv->data;
        cout << newv->data << " ";
        newv = newv->link;
        t++;
    }
    cout << endl;
    for(int i=5;i>=0;i--){
        cout<<x[i]<<" ";
    }
}
```
### initilize
```
int main() {
    node *head = NULL;
    int n = 5, r;
int x[5];
    for (int i = 0; i < n; i++) {
        cin >> r;
        insert_at_first(&head, r);
    }
    insert_at_end(&head,10);
    print(head,x);

    return 0;
}
```

