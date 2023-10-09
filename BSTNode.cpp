#include "BSTNode.h";

BSTNode::BSTNode()
{
	left = nullptr;
	right = nullptr;
	name = "";
	address = "";
	account_num = 0;
	pswd = 0;
	balance = 0;
}

BSTNode::BSTNode(string name, string address, int accountno, int password, int balance)
{
	left = nullptr;
	right = nullptr;
	this->name = name;
	this->account_num = accountno;
	this->address = address;
	this->balance = balance;
	pswd = password;
}
