#include <iostream>
using namespace std;
int count = 0;

struct Node {
	struct Node *left, *right;
};

void traverse(struct Node* node)
{
	if (node == NULL){return;}

    count ++;

	traverse(node->left);

	traverse(node->right);

}

int traverse_2(struct Node* node)
{
    int count_2 = 0;
	if (node == NULL){return 0;}

    count_2 ++;

	count_2 += traverse_2(node->left);

	count_2 += traverse_2(node->right);

	return count_2;
}

int main()
{
	struct Node* root = new Node();

	root->left = new Node();
	root->right = new Node();
	root->left->left = new Node();
	root->left->right = new Node();
	root->left->right->left = new Node();
	root->left->right->right = new Node();
	root->left->right->right->right = new Node();

	traverse(root);
	cout<<"1st (Global variable) Total Number of node : "<<count<<endl;

	cout<<"2nd (Local variable)  Total Number of node : "<<traverse_2(root)<<endl;

	return 0;
}
