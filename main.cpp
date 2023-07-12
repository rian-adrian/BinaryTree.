#include <iostream>
#include "BinaryTree.h"

using namespace std;


int main(int argc, char** argv) {
	
	BinaryTree bin;
	
	bin.InsertNode(10);
	bin.InsertNode(5);	
	bin.InsertNode(3);
	bin.InsertNode(6);
	bin.InsertNode(15);
	bin.InsertNode(20);
	bin.InsertNode(25);
	
	bin.PreOrder();
	
	
	return 0;
}
