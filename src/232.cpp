#include <stack>

using namespace std;

class MyQueue
{
private:
    stack<int> stack, stackReverse;

public:
    MyQueue() {}

    void push(int x)
    {
        stack.push(x);
    }

    int pop()
    {
        if (stackReverse.empty())
            while (!stack.empty())
            {
                int topElementOfStack = stack.top();
                stackReverse.push(topElementOfStack);
                stack.pop();
            }

        int lastElement = stackReverse.top();
        stackReverse.pop();
        return lastElement;
    }

    int peek()
    {
        if (stackReverse.empty())
            while (!stack.empty())
            {
                int topElementOfStack = stack.top();
                stackReverse.push(topElementOfStack);
                stack.pop();
            }

        return stackReverse.top();
    }

    bool empty()
    {
        return stack.empty() && stackReverse.empty();
    }
};
