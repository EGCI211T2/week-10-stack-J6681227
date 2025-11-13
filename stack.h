
#ifndef stack_h
#define stack_h
#include "node.h"
class Stack {
	NodePtr top;
	int size;
public:
    void push(int);
    int pop();
    Stack();
    ~Stack();
};


void Stack::push(int x){
  NodePtr new_node=new NODE(x);
  if(new_node){
            // Left missing for exercises…
            //connect to previous top
            //change top
            //change size
   }
 
         // Left missing for exercises…
    
}

int Stack::pop(){
        NodePtr t=top;
        int value;
        value=t->get_value();
    // Left missing part for exercises
        delete t;
        return value;
	//be careful of the empty stack!!!
    }

Stack::Stack(){
    //initialize stack
    
}
Stack::~Stack(){
    //delete all remaning stack (i.e. pop all) 
    
}


#endif
