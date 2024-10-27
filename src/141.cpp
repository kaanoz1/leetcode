#include <map>
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode* head) {
        if (head == nullptr) 
            return false;
        
        map<ListNode*, bool> map;
        ListNode* temp = head;

        while (temp != nullptr) {
            if (map[temp] == true) 
                return true;
            
            map[temp] = true;
            temp = temp->next;
        }
        return false;
    }

};

/*I couldn't solve it with O(1) space complexity. Beside that, checked the solution. The solution has O(1) space complexity:

class Solution {
public:
    bool hasCycle(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return false;
        }
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast != slow) {
            if (fast->next == NULL || fast->next->next == NULL) {
                return false;
            }
            slow = slow->next;
            fast = fast->next->next;
        }
        return true;
    }
};

*/