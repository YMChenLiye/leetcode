/**
 *
 *  * Definition for a binary tree node.
 *
 *   * struct TreeNode {
 *
 *    *     int val;
 *
 *     *     TreeNode *left;
 *
 *      *     TreeNode *right;
 *
 *       *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 *
 *        * };
 *
 *         */

class Solution {

	public:

		TreeNode* generate(int left,int right,vector<int>& nums)
		{
			if(left > right)
			{
				return nullptr;
			}
			else if(left == right)
			{
				return new TreeNode(nums[left]);
			}
			else
			{
				int mid=(left + right) / 2;
				TreeNode * ret= new TreeNode(nums[mid]);
				ret->left = generate(left,mid-1,nums);
				ret->right = generate(mid+1,right,nums);
				return ret;
			}
		}

			TreeNode* sortedArrayToBST(vector<int>& nums) {
				return generate(0,nums.size()-1,nums);
			}

};
