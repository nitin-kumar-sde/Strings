class TrieNode {
	public :
	TrieNode **children;

	TrieNode() {
		children = new TrieNode*[2];
		for(int i = 0; i < 2; i++) {
			children[i] = nullptr;
		}
	}
};

#include "TrieNode.h"
#include <string>
using namespace std;

class Trie {
	TrieNode *root;

	public :
	Trie() {
		root = new TrieNode();
	}

	void insertWord(TrieNode *root, int num, int index) {
		
		if(index < 0) return;

		int bit  = (1 << index) & num;
		TrieNode *child;
		if(root -> children[bit] != NULL) {
			child = root -> children[bit];
		}
		else {
			child = new TrieNode();
			root -> children[bit] = child;
		}

		insertWord(child, num, index-1);
	}

	void insertWord(int  num) {
		insertWord(root, num , 31);
	}

	void buildMaxXor(TrieNode *root, int num, int index, int &maxXor) {

		if(index < 0) return;

		TrieNode *child;
		int bit =  ((1 << index) & num) ^ 1;
		if(root -> children[bit] != NULL) {
		    maxXor = maxXor | (1 << index); 	
			child = root -> children[bit];
		}
		else {
			child = root -> children[bit^1];
		}
		buildMaxXor(child, num, index-1, maxXor);
	}

};
