class Node{

	public:
	
	int val;
	
	Node *left;
	Node *right;
	
	Node (){
		left = right = NULL;
		
	}
};

class BinaryTree{


	public :
		void InsertNode(int);
		Node *insertNodeRecursive(Node*, int insertVal);
		
		void DeleteNode(int);
		
		Node *SearcNode(int);
		Node *searcNodeRecursive(Node*, int);
		
		
		void PreOrder();
		void preOrderNodeRecursive(Node*);
		
		void InOrder();
		void inOrderNodeRecursive(Node*);
		
		void PostOrde();
		
		Node *root;
		
	BinaryTree(){
		
		root = NULL;
	}
};
