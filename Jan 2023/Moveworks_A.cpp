// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;



struct returnType {

	bool isPerfect;
	int height;
	node* rootTree;
};
done
returnType findPerfectBinaryTree(struct node* root)
{
	returnType rt;
	if (root == NULL) {
		rt.isPerfect = true;
		rt.height = 0;
		rt.rootTree = NULL;
		return rt;
	}
	returnType lv = findPerfectBinaryTree(root->left);
	returnType rv = findPerfectBinaryTree(root->right);
	if (lv.isPerfect && rv.isPerfect && lv.height == rv.height) {
		rt.height = lv.height + 1;
		rt.isPerfect = true;
		rt.rootTree = root;
		return rt;
	}
	rt.isPerfect = false;
	rt.height = max(lv.height, rv.height);
	rt.rootTree = (lv.height > rv.height ? lv.rootTree : rv.rootTree);
	return rt;
}

// Function to print the inorder traversal of the tree
void inorderPrint(node* root)
{
	if (root != NULL) {
		inorderPrint(root->left);
		cout << root->data << " ";
		inorderPrint(root->right);
	}
}

// Driver code
int main()
{
	// Create tree
	struct node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->left = newNode(6);

	// Get the biggest sizes perfect binary sub-tree
	struct returnType ans = findPerfectBinaryTree(root);

	// Height of the found sub-tree
	int h = ans.height;

	cout << "Size : " << pow(2, h) - 1 << endl;

	// Print the inorder traversal of the found sub-tree
	cout << "Inorder Traversal : ";
	inorderPrint(ans.rootTree);

	return 0;
}
