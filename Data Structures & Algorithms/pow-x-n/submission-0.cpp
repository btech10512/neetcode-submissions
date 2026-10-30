class Solution {
public:
    double f(double x,long long n) {
                if(n == 0) return 1.0;

                        if(n < 0) {
                                    x = 1.0/x;
                                                n = -1.0*n;
                                                            return f(x,n);
                                                                    }
                                                                            if(n%2 == 0) {
                                                                                        return f(x*x,n/2);
                                                                                                }else {
                                                                                                            return x*f(x*x,(n-1)/2);
                                                                                                                    }
                                                                                                                        }
                                                                                                                            double myPow(double x, int n) {
                                                                                                                                    return f(x,(long long)n);
                                                                                                                                        }
    
};
