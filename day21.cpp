// You have a linked list and you have to implement the functionalities push and pop of stack using this given linked list. 
//Your task is to use the class as shown in the comments in the code editor and complete the functions push() and pop() to implement a stack. 

void MyStack ::push(int x) 
{
    // Your Code
    StackNode* n=new StackNode(x);
    if(top==NULL){
        top=n;
        return;
    }
    n->next=top;
    top=n;
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    // Your Code
    if(top==NULL){
        return -1;
    }
    
    int ans=top->data;
    top=top->next;
    return ans;
}
