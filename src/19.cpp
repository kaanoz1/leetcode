using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *realHead = new ListNode(0, head);

        ListNode *fast = realHead->next;
        ListNode *slow = realHead;

        for (unsigned char i = 0; i < n; i++)
            fast = fast->next;

        while (fast != nullptr)
        {
            slow = slow->next;
            fast = fast->next;
        }

        slow->next = slow->next->next;

        return realHead->next;
    }
};