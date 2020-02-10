struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};


struct TreeNode* newNode(int item);
struct TreeNode* mergeTrees(struct TreeNdoe* t1, struct TreeNode* t2);
