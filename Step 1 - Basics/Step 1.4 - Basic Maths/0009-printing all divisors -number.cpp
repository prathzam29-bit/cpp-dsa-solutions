class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> v;
        
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                v.push_back(i);
                
                if ((n / i) != i) {
                    v.push_back(n / i);
                }
            }
        }
        
        sort(v.begin(), v.end()); //sort has time complexity (no of facdtors)*log(no of factors)
        return v;
    }
}; // converting big o (n) to big o (root n)
// so over all time complexity is o(rootn)+o(n*log(n))