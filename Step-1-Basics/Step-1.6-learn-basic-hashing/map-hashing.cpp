class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        map<int,int> mpp;
        for(auto it:nums){
            mpp[it]++;


        }
          int max=0;
        int minindex=INT_MAX;
        for(auto it : mpp){
                if(it.second>max){

                    max=it.second;
                    minindex=it.first;
                }
                else if(it.second==max && it.first<minindex){

                    minindex=it.first;
                }
          
            
                }
                 return minindex;
            }


        };
        
     

    
