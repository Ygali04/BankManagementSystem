#pragma once

#include "AccNode.h"

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Node{  //Builds upon AccNode. Single linked list that contains account data.
    public:
	    Node * next;
	    AccNode * pre;
	    int data;
	    Node();
	    Node(int);
};