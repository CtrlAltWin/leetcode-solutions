class Solution {
public:
    int maxArea(vector<int>& h) {
        int i = 0, j = h.size() - 1, mx = -1;
        while (j > i) {
            int area = min(h[i], h[j]) * (j - i);
            mx = max(mx, area);
            if (h[j] > h[i])
                i++;
            else
                j--;
        }
        return mx;
    }
};