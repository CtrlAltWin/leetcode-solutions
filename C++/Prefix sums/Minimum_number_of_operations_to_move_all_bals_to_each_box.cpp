class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int>forward(n,0), backward(n,0), ans(n);
        forward[0]=0;
        int boxCount=boxes[0]-'0';
        for(int i=1; i<n; i++) {
            forward[i]+=forward[i-1]+boxCount;
            boxCount+=boxes[i]-'0';
        }
        backward[n-1]=0;
        boxCount=boxes[n-1]-'0';
        for(int i=n-2; i>=0; i--) {
            backward[i]+=backward[i+1]+boxCount;
            boxCount+=boxes[i]-'0';
        }
        for(int i=0; i<n; i++) {
            ans[i]=forward[i]+backward[i];
        }
        return ans;
    }
};