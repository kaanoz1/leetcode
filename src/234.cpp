#include <iostream>
#include <deque>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        if (!head || !head->next)
            return true;
        deque<int> dq;

        ListNode *temp = head;
        while (temp)
        {
            dq.push_back(temp->val);
            temp = temp->next;
        }

        while (dq.size() > 1)
        {
            if (dq.front() != dq.back())
                return false;
            dq.pop_front();
            dq.pop_back();
        }

        return true;
    }
};