class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();

                int n2 = nums2.size();

                       int steps = ((n1+n2)/2) + 1;

                               bool odd = true;

                                

                                        if((n1+n2)%2 == 0) {

                                                    odd = false;

                                                            }

                                                             

                                                                     int i=0,j=0,prev=-1,curr=-1;

                                                                      

                                                                              if(nums1.size() == 0) i = -1;

                                                                               

                                                                                       if(nums2.size() == 0) j = -1;

                                                                                        

                                                                                         

                                                                                                 while(steps > 0 && i >= 0 && i < n1 && j >= 0 && j < n2) {

                                                                                                             steps--;

                                                                                                              

                                                                                                                          if(nums1[i] < nums2[j]) {

                                                                                                                                          prev = curr;

                                                                                                                                                          curr = nums1[i];

                                                                                                                                                                          i++;

                                                                                                                                                                                      } else {

                                                                                                                                                                                                      prev = curr;

                                                                                                                                                                                                                      curr = nums2[j];

                                                                                                                                                                                                                                      j++;

                                                                                                                                                                                                                                                  }

                                                                                                                                                                                                                                                          }

                                                                                                                                                                                                                                                                  // prev = curr;

                                                                                                                                                                                                                                                                         

                                                                                                                                                                                                                                                                                 while(steps > 0 && i >= 0 && i < n1) {

                                                                                                                                                                                                                                                                                             steps--;

                                                                                                                                                                                                                                                                                                         prev = curr;

                                                                                                                                                                                                                                                                                                                     curr = nums1[i];

                                                                                                                                                                                                                                                                                                                                 i++;

                                                                                                                                                                                                                                                                                                                                         }

                                                                                                                                                                                                                                                                                                                                                 while(steps > 0 && j >= 0 && j < n2) {

                                                                                                                                                                                                                                                                                                                                                             steps--;

                                                                                                                                                                                                                                                                                                                                                                         prev = curr;

                                                                                                                                                                                                                                                                                                                                                                                     curr = nums2[j];

                                                                                                                                                                                                                                                                                                                                                                                                 j++;

                                                                                                                                                                                                                                                                                                                                                                                                         }

                                                                                                                                                                                                                                                                                                                                                                                                                 if(odd) {

                                                                                                                                                                                                                                                                                                                                                                                                                             return curr;

                                                                                                                                                                                                                                                                                                                                                                                                                                     }else {

                                                                                                                                                                                                                                                                                                                                                                                                                                                 return ((double)prev + (double)curr)/2;

                                                                                                                                                                                                                                                                                                                                                                                                                                                         }
    }
};
