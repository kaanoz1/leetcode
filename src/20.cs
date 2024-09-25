public class Solution
{
       public bool IsValid(string s) {
        Dictionary<char, char> dict = new()
        {
            {')', '('},
            {']', '['},
            {'}',  '{'}
        };

        Stack<char> stack = new([s.First()]);

        

        foreach (char c in s.Skip(1))
        {
            if (dict.TryGetValue(c, out char value) && stack.TryPeek(out char peek) && peek == value) stack.Pop();
            else stack.Push(c);

        };


        return stack.Count == 0;
    }
}