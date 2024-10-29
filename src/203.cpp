using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public: 
    ListNode* removeElements(ListNode* head, int val) {
       if(head == nullptr)
           return nullptr;

    ListNode node(0, head);

       while (head->next){
        if(head->next->val == val)
            head->next = head->next->next;
        else
            head = head->next;
       }

       if(node.next->val == val)
           node.next = node.next->next;

       return node.next;
    }
};

/*
Another great approach:

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {


        while(head != nullptr && head -> val == val)
            head = head -> next;
        
        if(head == nullptr)
            return head;

        ListNode * p{head}, *q{head -> next};
        while(q!=nullptr){
            if(q->val == val){
                p->next = q ->next;
                q = p->next;
            }
            else{
            p = p->next; 
            q = q -> next;
            }
        }
    return head;
    }
};

 */