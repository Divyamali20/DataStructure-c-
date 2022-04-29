#include <iostream.h> 
 #include <conio.h>  
 Int queue[5]; 
 Int front = -1; 
 Int rear = -1; 
 Int n = 5; 
 Void enqueue() { 
 Int x; 
 Cout<<”Enter a Data : “; 
 Cin>>x; 
 
If(rear == n – 1) { 
 Cout<<”Queue is Overflow”; 
 } 
 Else if(front == -1 && rear == -1) { 
 Front = rear = 0; 
 Queue[rear] = x; 
 }
 Else {
 Rear++; 
 Queue[rear] = x;
 } 
 }  
 Void dequeue() { 
 If(front == -1 && rear == -1) { 
 Cout<<”Queue is Underflow”; 
 } 
 Else if(front == rear){
 Front = rear = -1;
 } 
 Else { 
 Front++; 
 Cout<<queue[front]; 
 } 
 } 
 Void peek() { 
 If(front == -1 && rear == -1) { 
 Cout<<”Queue is Empty”; 
 } 
 Else
 {
 Cout<<queue[front]; 
 }
 } 
 Void display() { 
 For(int i = front; i < rear+1; i++) { 
 Cout<<queue[i]<<”\t”; 
 }
 } 
 Void main() { 
 Int choice; 
 Do { 
 Cout<<”\n Enter Your Choice – 1 : Enqueue , 2 : Dequeue , 3 : Peek , 4 : Display \n”; 
 Cin>>choice; 
 Switch(choice) { 
 Case 1 : enqueue(); 
 Break; 
 Case 2 : dequeue(); 
 Break; 
 Case 3 : peek(); 
 Break; 
 Case 4 : display(); 
 Break; 
 Default : cout<<”Invalid”;
 }
while(choice > 0); 
 Getch(); 
 Clrscr();   
 }

