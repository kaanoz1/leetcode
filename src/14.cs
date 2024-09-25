public class Solution
{
    public string LongestCommonPrefix(string[] strs)
    {
        Array.Sort(strs);
        
        string Common = "";

        string FirstWord = strs.First();
        string LastWord = strs.Last();

        if (string.IsNullOrEmpty(FirstWord)) return Common;

        int minLength = Math.Min(FirstWord.Length, LastWord.Length);

        for (int i = 0; i < minLength; i++){
            if (FirstWord[i] != LastWord[i]) return Common;
            Common += FirstWord[i];
        }
        return Common;
    }
}