#the head File are included in prerequisites
#should be included in everywhere
tree: main.o
	g++ -o tree  main.o
main.o:main.cpp BinaryTree.h BinaryTreeNode.h
	g++ -c main.cpp 

clean:
	rm tree  main.o
