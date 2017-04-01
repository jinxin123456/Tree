#include "BinaryTree.h"
template<class T>
bool BinaryTree<T>::Root(){
	if(root){
		x=root->data;
		return true;
	}	
	else
		return false;
}

template<class T>
void BinaryTree<T>::MakeTree(const T& element,BinaryTree<T>& left,BinaryTree<T>& Right){
	root=new BinaryTreeNode<T>(element,left.root,right.root);
	left.root=right.root=0;
}

template<class T>
void BinaryTree<T>::BreakTree(const T& element,BinaryTree<T>& left,BinaryTree<T>& Right){
	if(!root) throw BadIput();
	element=root->data;
	left.root=root->rchild;
	right.root=root->rchild;

	delete root;
	root =0;
}

template<class T>
void BinaryTree<T>::LevelOrder(BinaryTree* root){
	LinkedQueue<BinaryTreeNode<T> *> li;
	BinaryTreeNode<T> *t;
	t=root;
	while(t){
		visit(t);
		if(t->lchild)
			li.push_back(t->lchild);
		if(t->rchild)
			li.push_back(t->rchild);

	}
}
