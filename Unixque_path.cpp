int Solution::uniquePaths(int A, int B) {

    if (A==1 || B == 1) return 1;

    if (B == 2 && A > 2) return A;
    
   long int path = 1;
    for (int i = B; i < (A + B - 1); i++) {
        path *= i;
        path /= (i - B + 1);
    }
    return path;
}
