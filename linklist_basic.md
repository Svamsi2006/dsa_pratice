### delete node
```public:
    void deleteNode(ListNode* node) {
        
        node->val=node->next->val;
        node->next=node->next->next;
        
    }
};
```
## node structure 
```
#include<iostream>
using namespace std;
struct node {
    int data;
    node *link;
};
```
<img width="737" height="97" alt="image" src="https://github.com/user-attachments/assets/cb6a14b4-d69c-41ca-a3e5-729a16e4c696" />


<img width="629" height="98" alt="image" src="https://github.com/user-attachments/assets/c0037c82-97e1-4d0e-b9a3-f2f9ca7b763c" />

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


### Reverse linklist
<img width="542" height="222" alt="image" src="https://github.com/user-attachments/assets/49a36393-93dd-43e4-be5c-5fab9a2c6d17" />

```
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* next =NULL;
        ListNode* curr =head;
        while(curr != NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
};
```

### Palindrome Linked List


<img width="422" height="62" alt="image" src="https://github.com/user-attachments/assets/8fb3c346-d78f-4c0b-9764-1f096ca2332d" />

====*10


```
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        while(head!=NULL){
            arr.push_back(head->val);
            head=head->next;
        }
        int l=0;
        int r=arr.size()-1;
        while(l<r){
            if(arr[l]!=arr[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
```



### Remove Duplicates from Sorted List


<img width="542" height="222" alt="image" src="https://github.com/user-attachments/assets/2743a592-d567-4124-8670-e641421d4d80" />





```
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* hi=head;
        
        while(hi!=NULL && hi->next!=NULL){
            if(hi->val == hi->next->val){
                hi->next=hi->next->next;
            }
            else{
                hi=hi->next;
            }
            
        }
        return head;
        
    }
};
```
