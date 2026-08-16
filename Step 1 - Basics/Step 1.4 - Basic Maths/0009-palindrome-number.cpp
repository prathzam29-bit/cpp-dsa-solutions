class Solution {
public:

long long revnum=0;


    bool isPalindrome(int x) {
        long long dup=x;
        while(x>0){
            long long digit=x%10;
            revnum=(revnum*10)+digit;
            x=x/10;            
        }
        if(dup==revnum)return true;
        else return false;
       
    }
};