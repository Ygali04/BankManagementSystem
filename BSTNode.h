#pragma once                                    //ensure only one BSTNode header

#include <iostream>
#include <string>
using namespace std;

class BSTNode{                                  //for BST_Tree. Each node signifies a user.
    public:
        BSTNode * left;
        BSTNode * right;
        string name;
        string address;
        int account_num;
        int pswd;
        int balance;

        BSTNODE();                              //Default constructor
        BSTNODE(string, string, int, int);      //Parametrized constructor
}