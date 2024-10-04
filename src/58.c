int lengthOfLastWord(char* s) {
    int count = 0;
    int length = strlen(s);

    while (length > 0 && s[length - 1] == ' ') length--;
    

    for (int i = length - 1; i >= 0; i--) {
        if (s[i] != ' ') count++;
         else break;
    }
    
    return count;
}