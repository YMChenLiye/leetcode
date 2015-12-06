/**

 * Definition for a binary tree node.

 * struct TreeNode {

 *     int val;

 *     struct TreeNode *left;

 *     struct TreeNode *right;

 * };

 */

/**

 * Return an array of size *returnSize.

 * Note: The returned array must be malloced, assume caller calls free().

 */



void *preorder(struct TreeNode* root,int *result,int *cntp)

{

	if(root!=NULL)

	{

		result[*cntp]=root->val;

		(*cntp)++;

		preorder(root->left,result,cntp);

		preorder(root->right,result,cntp);

	}

}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {

	int cnt=0;

	int *result=malloc(sizeof(int)*500);

	preorder(root,result,&cnt);

	*returnSize=cnt;

	return result;

}
