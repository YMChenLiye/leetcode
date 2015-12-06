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
void *inorder(struct TreeNode* root,int *result,int *cntp)
{
	if(root!=NULL)
	{
		inorder(root->left,result,cntp);
		result[*cntp]=root->val;
		(*cntp)++;
		inorder(root->right,result,cntp);
	}
}
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
	int cnt=0;
	int *result=malloc(sizeof(int)*500);
	inorder(root,result,&cnt);
	*returnSize=cnt;
	return result;
}
