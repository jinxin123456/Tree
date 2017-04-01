#ifndef BINARYTREE_H
#define BINARYTREE_H
#include "BinaryTreeNode.h"
template <class T>
class BinaryTree{
public:
	BinaryTree(){
		root=0;
	}
	~BinaryTree(){}
	bool IsEmpty() const {
		return ((root)?false:true);
	}
	bool Root(T &e)const;
	void MakeTree(const T& element,BinaryTree<T>& left,BinaryTree<T>& Right);
	void MakeTree(const T& element,BinaryTree<T>& left,BinaryTree<T>& Right);
	void BreakTree( T& element,BinaryTree<T>& left,BinaryTree<T>& Right);
private:
	BinaryTree<T> *root;
	void PreOrder(void(*visit)(BinaryTreeNode<T> *u),BinaryTreeNode<T> *t);
	void InOrder(void(*visit)(BinaryTreeNode<T> *u),BinaryTreeNode<T> *t);
	void PostOrder(void(*visit)(BinaryTreeNode<T> *u),BinaryTreeNode<T> *t);
};
#endif
