class Solution {
public:
    int nthUglyNumber(int n) {
        //check the base case ( n can not be less than 1)
        if(n==1){
            return 1;
        }
        vector <int> ans(n);
        //store all the ans in this vector
        ans[0]=1;
        int two=0,three=0,five=0;
        for(int i =1;i<n;i++){
            ans[i]=min(ans[two]*2,min(ans[three]*3,ans[five]*5));
            
            if(ans[i]==ans[two]*2)two++;
            if(ans[i]==ans[three]*3)three++;
            if(ans[i]==ans[five]*5)five++;
        }
        return ans[n-1];
    }
};