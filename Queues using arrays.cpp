#include<iostream>
using namespace std;

class Queue  {
	public:
		int *arr;
		int front;
		int rear;
		int size;
		
	Queue(int data){
		this->size=data;
		arr=new int[data];
		front=rear=0;
	}
	
	void enqueue(int data){
		if(rear==size){
			cout<<"Queue is full "<<endl;
		}
		else{
			arr[rear]=data;
			rear++;
		}
	}
	void dequeue(){
		if(front==rear){
			cout<<"Queue is Empty "<<endl;
		}
		else{
			arr[front]=-1;
			front++;
		}
	}
	bool is_empty(){
		if(front==rear){
			return true;
			
		}
		else{
			return false;
		}
	}
	void display(){
		if(front==rear){
			cout<<"Queue is Empty "<<endl;
		}
		else{
			for(int i=front;i<rear;i++){
				cout<<"->"<<arr[i];
			}
		}
	}
};

int main(){
Queue mq(5);
mq.enqueue(10);
mq.enqueue(15);
mq.enqueue(20);
cout<<"Queue in arrays are "<<endl;
mq.display();

mq.dequeue();
cout<<endl;
cout<<"after dequeue "<<endl;

mq.display();
cout<<endl;
if(mq.is_empty()){
	cout<<"Queue is Empty"<<endl;
}
else{
	cout<<"Queue is not Empty "<<endl;
}
mq.dequeue();
mq.dequeue();
cout<<"After Dequeue all values "<<endl;

mq.display();
}