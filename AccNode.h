#pragma once

//stands for AccountNode. Represents each Accountbucket (account_num and it's related password) in a single node linked list.

class AccNode{  
    public:
	    AccNode * next;
	    int accountNum;
	    int pswd;
	    AccNode();
	    AccNode(int, int);
};