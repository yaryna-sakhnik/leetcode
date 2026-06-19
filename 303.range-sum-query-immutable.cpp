// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class NumArray
{
public:
    NumArray(const vector<int> &nums)
    {
        p.reserve(nums.size() + 1);
        p.push_back(0);
        for (int n : nums) {
            p.push_back(p.back() + n);
        }
    }
    
    int sumRange(int left, int right) const
    {
        return p[right + 1] - p[left];
    }

private:
    vector<int> p;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
// @leet end


int main()
{
    NumArray a({-2, 0, 3, -5, 2, -1});
    cout << a.sumRange(0, 2) << endl;
    cout << a.sumRange(2, 5) << endl;
    cout << a.sumRange(0, 5) << endl;
    return 0;
}
