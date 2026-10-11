class Solution {
public:
    bool isPalindrome(int x) {
        int n=x;
        int d=n;
        long long rev=0;
        
        while(n>0){
            int a=n%10;
            rev=(rev*10)+a;
            n=n/10;
        }
        return d==rev;
    }
};