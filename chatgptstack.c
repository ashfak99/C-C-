#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int item) {
  if (top >= MAX_SIZE - 1) {
    printf("Stack Overflow!\n");
    return;
  }
  stack[++top] = item;
  printf("Pushed %d onto the stack.\n", item);
}

int pop() {
  if (top < 0) {
    printf("Stack Underflow!\n");
    return -1;
  }
  return stack[top--];
}

int peek() {
  if (top < 0) {
    printf("Stack is empty!\n");
    return -1;
  }
  return stack[top];
}

int isEmpty() {
  return top < 0;
}

int isFull() {
  return top >= MAX_SIZE - 1;
}

void display() {
  if (top < 0) {
    printf("Stack is empty!\n");
    return;
  }
  printf("Stack elements: ");
  for (int i = top; i >= 0; i--) {
    printf("%d ", stack[i]);
  }
  printf("\n");
}

int main() {
  push(10);
  push(20);
  push(30);
  display();
  printf("Top element: %d\n", peek());
  printf("Popped element: %d\n", pop());
  display();
  printf("Is stack empty? %s\n", isEmpty() ? "Yes" : "No");
  printf("Is stack full? %s\n", isFull() ? "Yes" : "No");

  return 0;
}
