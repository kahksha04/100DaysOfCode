// Given an array A of n positive numbers. The task is to find the first Equilibrium Point in an array. 
// Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int i = 0, j = n - 1, sumi = a[0], sumj = a[n - 1];
        
    if(n == 1) return 1;
    else if(n == 2) return -1;
      
    while((i + 1) != (j - 1)){
        if(sumi < sumj) sumi += a[++i];
        else sumj += a[--j];
    }
       
    if(sumi == sumj) return (i + 2);
    return -1;
    }

};
