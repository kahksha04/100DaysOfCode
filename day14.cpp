// Clone a linked list with next and random pointer

public:
    void insertTail(Node* &head,Node* &tail,int val){
        Node* temp=new Node(val);
        if(head==NULL){
            head=temp;
            tail=temp;
            return;
        }
        tail->next=temp;
        tail=temp;
    }
    Node *copyList(Node *head)
    {
        //Write your code here
        Node* clonehead=NULL;
        Node* clonetail=NULL;
        Node* temp1=head;
        while(temp1!=NULL){
            insertTail(clonehead,clonetail,temp1->data);
            temp1=temp1->next;
        }
        unordered_map<Node*,Node*> m;
        temp1=head;
        Node* temp2=clonehead;
        while(temp1!=NULL){
            m[temp1]=temp2;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        temp1=head;
        temp2=clonehead;
        while(temp1!=NULL && temp2!=NULL){
            temp2->arb=m[temp1->arb];
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return clonehead;
    }
