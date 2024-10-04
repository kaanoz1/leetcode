int mySqrt(int x) {

    long bottom = 0;
    long top = x;

    while (bottom <= top) {
        long mid = bottom + (top - bottom) / 2; 
        if (mid * mid == x) return mid; 
         else if (mid * mid < x) bottom = mid + 1; 
         else top = mid - 1; 
        
    }

    return top;
}