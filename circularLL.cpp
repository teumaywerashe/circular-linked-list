#include<iostream>
using namespace std;
class Node{
public:
	int value;
	Node* next;
};
Node* head = NULL;

void insertHead(int value){
	Node* newNode = new Node();
	newNode->value = value;
	
	if(head == NULL) {
		newNode->next = newNode;
	    head = newNode;	
	   return ;
    }
    
    Node* newhead = head;
    while(newhead->next != head){
    	newhead = newhead->next;
	}
	newNode->next = head;
	newhead->next = newNode;
    head = newNode;
    return ;
}
void inserttail(int value){
	Node* newnode = new Node();
	newnode->value = value;
	if(head == NULL){
		head = newnode;
		newnode->next = newnode;
		return;
	}
	else{
		Node* newhead = head;
		while(newhead->next != head){
			newhead = newhead->next;
		}
		newhead->next = newnode;
		newnode->next = head;
	}
	return;
}
void insertAtKth(int value ,int position){
	Node* newnode = new Node();
	newnode->value = value;
	
		Node* newhead = head;
		for(int i=0;i<position-2;i++){
			newhead = newhead->next;
		}
		newnode->next =newhead->next;
		newhead->next = newnode;
	
	
}

void print(){
	    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }
	Node* newhead = head;
	do{
		cout<<newhead->value<<"->";
		newhead = newhead->next;
	}while(newhead!=head);
	cout<<"(back to head)";

}
int main(){
	 insertHead(1);
	 insertHead(2);
	 insertHead(3);
	 insertHead(4);
	 inserttail(5);
	 insertAtKth(0,3);

	print();
}




