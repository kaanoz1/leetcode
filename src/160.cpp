struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *currentA = headA;

        while (currentA != nullptr) {
            ListNode *currentB = headB;

            while (currentB != nullptr) {

                if (currentA == currentB) 
                    return currentA;
                
                currentB = currentB->next;

            }
            currentA = currentA->next;
        }
        return nullptr;
    }
};

/*
This solution is genius!


class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == nullptr || headB == nullptr) return nullptr;

        ListNode *pA = headA;
        ListNode *pB = headB;

        // Traverse until both pointers meet or both reach the end
        while (pA != pB) {
            // Move each pointer to the head of the other list upon reaching the end
            pA = (pA == nullptr) ? headB : pA->next;
            pB = (pB == nullptr) ? headA : pB->next;
        }

        // Either they meet at the intersection node or both reach the end (nullptr)
        return pA;
    }
};



*/