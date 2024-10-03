class Solution {

    //For some internet connection problem, result is not true obviously.

 public static int strStr(String haystack, String needle) {
        final int hayLength = haystack.length();
        final int needleLength = needle.length();
        if(hayLength < needleLength)
            return -1;

         final char needleChar = needle.charAt(0);

        for(int i = 0; i < hayLength; i++){
            final boolean isExceed = i + needleLength > hayLength;
            if(isExceed) break;

            final char haysChar = haystack.charAt(i);
           

            if(haysChar != needleChar) continue;

            final String substring = haystack.substring(i, i + needleLength);
            final boolean equals = substring.equals(needle);
            if(equals) return i;

        }
        return -1;
    }
}