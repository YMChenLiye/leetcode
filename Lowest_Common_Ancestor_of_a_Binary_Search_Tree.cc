/**

 * Definition for a binary tree node.

 * struct TreeNode {

 *     int val;

 *     struct TreeNode *left;

 *     struct TreeNode *right;

 * };

 */

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {

	int first=p->val;

	int second=q->val;

	if(first>second)

	{

		int tmp=first;

		first=second;

		second=tmp;

	}

	if(root->val ==first || root->val ==second)

	{

		return root;

	}

	else if(root->val >second)

	{

		return lowestCommonAncestor(root->left,p,q);

	}

	else if(root->val < first)

	{

		return lowestCommonAncestor(root->right,p,q);

	}

	else

	{

		return root;

	}



}
