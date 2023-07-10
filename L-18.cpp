#include<bits/stdc++.h>
using namespace std;
 
 template< typename T>

 class node{
     public:
     T data;
      node<T>* next;
      public: 
      node(T da){
          data=da;
          next=NULL;

      }
 };

 template <typename T>

 class llQueue{
     node<T>* front;
     node<T>* rear;
     public:
         llQueue(){
             front=NULL;
             rear=NULL;
         }


      // interface
        bool isEmpty(){
            if(!front ){
                return true;
            }else {
                return false;
            }
        }

        void enqueue(T element){
            node<T>* newNode=new node<T>(element);
            if(isEmpty()){
                 front=rear=newNode;
            }else{
                rear->next=newNode;
                rear=rear->next;
            }
        }

        void dequeue(){
            if(isEmpty()){
                cout<<"empty"<<endl;
                return;
            }else{
                node<T>* temp=front;
                front=front->next;
                delete temp;
            }
        }

      T peek(){
          if(isEmpty()){
              cout<<"empty"<<endl;
              return 0;
          }else{
              return front->data;
          }
      }

 };




 
int main(){
 
   llQueue <int> s;

   s.enqueue(10);
   s.enqueue(20);
   s.enqueue(50);
   cout<<s.peek()<<endl;
   s.dequeue();
   cout<<s.peek()<<endl;
   s.dequeue();
   cout<<s.peek()<<endl;
   s.dequeue();
   cout<<s.peek()<<endl;

 return 0;
}