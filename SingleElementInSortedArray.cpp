// You are given a sorted array consisting of only integers where every element appears exactly twice,
//  except for one element which appears exactly once.
// Return the single element that appears only once.
// Your solution must run in O(log n) time and O(1) space.

// Example 1:
// Input: nums = [1,1,2,3,3,4,4,8,8]
// Output: 2
 #include <vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        int low=0,high=A.size()-1;
        while (low<high){
            int mid=(low+high)/2;
            if(mid%2==1)
            mid--;
            if(A[mid]==A[mid+1]){
                low=mid+2;
            }
            else
            high=mid;
        }
        return A[low];
    }
};