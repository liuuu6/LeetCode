class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
//知识点3：哈希表
//建立哈希表
        unordered_map<int,int>hashtable;
        for(int i = 0;i < nums.size();++i)
        {
//知识点4：auto标识符
//知识点5：迭代器iterator的概念与性质
//针对该数nums[i]，在哈希表内查值。数组下标i为值，nums[i]数本身为键值。
           auto it = hashtable.find(target - nums[i]);
//若在已有哈希表内查到值则返回对应下标。因为是与该数前面的数进行匹配，因此该数下标i返回时在后面。
           if(it != hashtable.end())
           return {it->second,i};
//将该数nums[i]加入哈希表
           hashtable[nums[i]] = i;
         }
         return {};
    }
};
