#pragma once

# include "BSTNode.h"
# include "Hashtable.h"
# include <stdio.h>

class BST_Tree
{
	vector <int> v;
    public:
        BST_Tree();         //default constructor
	    Hashtable h;        //hastable for account access hierarchy
	    BSTNode *Root;      //root of account tree
	    
        //ACCOUNT OPS
        void addAccount(string, string, int, int, int);
	    BSTNode* BST_Tree::deleteAccount(BSTNode *, int);
        void editAccountByAdmin();

        //CRUDS
	    void withdraw(int,int);
	    void deposit(int,int);
	    void transfer(int,int,int);
	    void transactionHistory();

        //HELPER FUNCTIONS
	    void findMax(BSTNode*);
	    void loadServer();
	    void updateServer(BSTNode *);
	    BSTNode* search(BSTNode*,int);
	    void printInfo(BSTNode*);
}