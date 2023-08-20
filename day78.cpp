// Given a sorted array Arr of size N and a number X, you need to find the number of occurrences of X in Arr.

class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int a[], int n, int x) {
	    // code here
	    if(x<a[0] || x>a[n-1]){
	        return 0;
	    }
	    int i=0;
	    int j=n-1;
	    
	    int c=0;
	    while(i<j){
	        if(a[i]!=x){
	            i++;
	        }
	        if(a[j]!=x){
	            j--;
	        }
	        if(a[i]==x && a[j]==x){
	            c=j-i+1;
	            break;
	        }
	    }
	    return c;
	}
};
