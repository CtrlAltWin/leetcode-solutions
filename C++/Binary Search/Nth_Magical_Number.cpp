class Solution {
    using ll=long long;
    const int mod=1e9+7;
    ll lessThanOrEqual(int a, int b, ll num) {
        int lcm = 1LL*a*b/__gcd(a, b);
        return (num/a + num/b - num/lcm);
    }
public:
    int nthMagicalNumber(int n, int a, int b) {
        ll lo=0, hi=1e18;
        while(hi!=lo+1) {
            ll mid = lo+(hi-lo)/2;
            if(lessThanOrEqual(a, b, mid)>=n) hi=mid;
            else lo=mid;
        }
        return hi%mod;
    }
};