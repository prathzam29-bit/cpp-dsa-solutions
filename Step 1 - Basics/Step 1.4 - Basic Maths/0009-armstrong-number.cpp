class Solution {
public:
int sum=0;


    bool isArmstrong(int n) {
        int dup=n;
        while(n>0){
            int digit=n%10;
            sum+=(digit*digit*digit);
            n=n/10;

        }
        if(dup==sum)return true;
        else return false;

    }
};