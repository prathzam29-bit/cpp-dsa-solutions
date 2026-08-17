class Solution{
public:
int i=0;
    void reverse(int arr[], int n){
        if(i>=n/2){
                return;

        }
        else{
            swap(arr[i],arr[n-i-1]);
            i++;
            reverse(arr,n);
            

        }

        
    }
};
