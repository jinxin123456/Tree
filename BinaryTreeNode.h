#ifndef BINARYTREENODE_H
#define BINARYTREENODE_H
template<class T>
class BinaryTreeNode{
	class BinaryTree<T>;
public:
	BinaryTreeNode(){
		lchild=rchild=0;
	}
	BinaryTreeNode(const T& e){
		data=e;
		lchild=rchild=0;
	}
	BinaryTreeNode(const T& e,BinaryTreeNode *l,BinaryTreeNode *r){
		data=e;
		lchild=l;
		rchild=r;
	}
private:
	T data;
	BinaryTreeNode<T> *lchild,*rchild;
};
#endif
