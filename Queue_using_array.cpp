#include<iostream>
using namespace std;

#define maxsize 5

int Queue[maxsize],front = -1,rear = -1,currsize = 0;

void Enqueue(int data){
	if(currsize == maxsize)
		cout<<"enqueue is not possible";
	else{
		
		if(front==-1){
			front = currsize = 0;
			rear = maxsize -1;
			}
		rear = (rear+1)%maxsize;
		Queue[rear] = data;
		currsize+=1;
	}
}

void Dequeue(){
	if(currsize == 0){
		cout<<"cant find";
		}
	else{
			cout<<"dequeue = "<<Queue[front]<<"\n";
			front  = (front+1)%maxsize;
			currsize-=1;
		}
}

void display(){
	if(rear == -1)
		cout<<"queue is empty";
	else{
			for(int i=front;i<=rear;i++){
				cout<<Queue[i]<<" ";
				}
		}
}





int main()
{
	Enqueue(2);
	Enqueue(3);
	Enqueue(4);
	Enqueue(5);
	
	
	Dequeue();
	Dequeue();
	
	
	display();
}	
