#include <stdio.h>

#define LIMIT 10
//to initialise the slack
struct lifo {
	int arr[LIMIT];
	int top;
};

void initialize(struct lifo *lifo) {
	lifo->top = -1;
}
// stack is empty
int Empty(struct lifo *lifo) {
	return lifo->top == -1;
}
// the stack is full
int full(struct lifo *lifo) {
	return lifo->top == LIMIT - 1;
}

void push(struct lifo *lifo, int value) {
	if (Full(lifo)) {
		printf("Stack overflow\n");
	} else {
		lifo->arr[++lifo->top] = value;
		scanf("%d", &value)
			printf("%d pushed to the stack\n", value);
	}
}

int pop(struct lifo *lifo) {
	if (Empty(lifo)) {
		printf("Stack underflow\n");
		return -1;
	} else {
		return lifo->arr[lifo->top--];
	}
}

int main() {
	struct lifo myStack;
	initialize(&myStack);

	push(&myStack, 1);
	push(&myStack, 2);
	push(&myStack, 3);

	printf("%d popped from the stack\n", pop(&myStack));
	printf("%d popped from the stack\n", pop(&myStack));
	printf("%d popped from the stack\n", pop(&myStack));
	printf("%d popped from the stack\n", pop(&myStack));
	return 0;
}
