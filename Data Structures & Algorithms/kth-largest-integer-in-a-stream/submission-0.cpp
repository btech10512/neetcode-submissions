class KthLargest {
    public:
        int k;
            priority_queue<int,vector<int>,greater<int>>p;
                KthLargest(int k, vector<int>& nums) {
                        this->k = k;
                                for(int num:nums) {
                                            add(num);
                                                    }

                                                        }
                                                            
                                                                int add(int val) {
                                                                        if(p.size() < k) {
                                                                                    p.push(val);
                                                                                            }else if(val > p.top()) {
                                                                                                        p.pop();
                                                                                                                    p.push(val);
                                                                                                                            }
                                                                                                                                    return p.top();
                                                                                                                                        }
                                                                                                                                        };
