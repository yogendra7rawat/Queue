#include <iostream>
using namespace std;

struct node{
	int data;
	node* next;
};

node* front = NULL;
node* rear = NULL;


bool isempty(){
	if(front == NULL && rear ==NULL)
		return true;
	else
		return false;
	}

void Enqueue(int data){
		node* p = new node();
		p->data = data;
		p->next = NULL;
		
		if(front == NULL){
			front = p;
			rear = p;
			}
		else{
				rear->next = p;
				rear = p;
			}
	}

void Dequeue(){
	
	if(isempty()){
		cout<<"empty";
		}
	else{
			if(front == rear){
				free(front);
				front = rear = NULL;
				}
			else{
					node* p = front;
					front = front->next;
					free(p);
				}
		}
}

void display(){
	node* p = front;
	
	while(p!=NULL){
		
		cout<<p->data<<" ";
		p = p->next;
		}
}

int main(){
	
	Enqueue(1);
	Enqueue(2);
	Enqueue(3);
	Enqueue(4);
	
	Dequeue();
	
	display();
	}
