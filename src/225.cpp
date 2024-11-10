#include <queue>

using namespace std;

class MyStack
{
public:
    queue<int> q
    MyStack()
    {
    }

    void push(int x)
    {
        q.push(x);

        const unsigned char size = q.size();

        for (unsigned char i = 0; i < size - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
    int pop()
    {
        int pop = q.front();
        q.pop();
        return pop;
    }

    int top()
    {
        return q.front();
    }

    bool empty()
    {
        return q.empty();
    }
};
