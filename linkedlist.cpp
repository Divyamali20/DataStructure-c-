
#include<iostream.h>
#include<conio.h>
Class Node
{
Public:
Int data;
Class Node*Next;
};
Void main()
{
Node*head;
Node*a=NULL;
Node*b=NULL;
Node*c=NULL;
A=new Node();
B=new Node();
C=new Node();
a->data=1;
b->data=2;
c->data=3;
a->Next=b;
b->Next=c;
c->Next=NULL;
head=a;
while(head!=NULL)
{
Cout<<head->data;
Head=head->Next;
}
Getch();
}



