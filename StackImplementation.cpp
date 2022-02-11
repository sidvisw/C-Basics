#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
struct operatorNode {
	char data;
	struct operatorNode* next;
};
struct operatorStack {
	int size;
	struct operatorNode* top;
};
struct operatorStack* createStack(){
	struct operatorStack *stack=new struct operatorStack;
	stack->size=0;
	stack->top=NULL;
	return stack;
}
bool isEmpty(struct operatorStack* stack){
	return stack->top==NULL;
}
char peek(struct operatorStack* stack){
	if(!isEmpty(stack))
		return stack->top->data;
	else
		exit(-1);
}
char pop(struct operatorStack* stack){
	struct operatorNode*ptr=stack->top;
	stack->top=stack->top->next;
	char del_data=ptr->data;
	delete ptr;
	stack->size--;
	return del_data;
}
void push(struct operatorStack* stack, char op){
	struct operatorNode*ptr=new struct operatorNode;
	ptr->data=op;
	ptr->next=stack->top;
	stack->top=ptr;
	stack->size++;
}

main()
{
    struct operatorStack*stack=createStack();
	push(stack,'a');
	push(stack,'b');
	push(stack,'c');
	printf("%c ",peek(stack));
	pop(stack);
	// pop(stack);
	// pop(stack);
	printf("%c ",peek(stack));
	cout<<isEmpty(stack);
}