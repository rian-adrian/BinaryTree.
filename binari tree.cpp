#include <iostream>
#include "BinaryTree.h"
using namespace std;

void BinaryTree::InsertNode(int insertVal){
	
	root = insertNodeRecursive(root, insertVal);
}

Node *BinaryTree::insertNodeRecursive(Node *currentRoot, int insertValue){
	if (currentRoot==NULL){
		currentRoot = new Node();
		currentRoot->val = insertValue;
		return currentRoot;
	}
	
	if(insertVal < currentRoot->val){
		currentRoot->left = insertNodeRecursive(currentRoot->left, insertValue);
		
	}
	if(insertValue > currentRoot->val){
		currentRoot->right = insertNodeRecursive(currentRoot->right, insertValue);
	}
	return currentRoot;
}
