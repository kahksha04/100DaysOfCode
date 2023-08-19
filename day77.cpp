// Given a Integer array A[] of n elements. Your task is to complete the function PalinArray. Which will return 1 if all the elements of the Array are palindrome 
// otherwise it will return 0.

class Solution {
public:
    
     int pallin(int num){
       int ans=0;
       int num1=num;
       while(num>0){
           int rem=num%10;
           ans=ans*10+rem;
           num=num/10;
       }
       
       if(ans==num1){
           return 1;
       }
       else{
           return 0;
       }
   }
    int PalinArray(int arr[], int n)
    {
        // code here
        int count=0;
        int num=0;
     for(int i=0;i<n;i++){
         num=arr[i];
         if(pallin(num)==1){
             count=1;
         }
         else{
             return 0;
         }
     }
     return count;
    }
};
