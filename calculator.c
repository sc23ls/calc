#include <stdio.h>
#include <stdlib.h>

int multiply();
int add();
int subtract();
int divide();

int main(){
    int num1;
    int num2;
    char operation;
    printf("Choose number 1: \n");
    scanf("%d", &num1);
    printf("Choose operation: \n");
    scanf(" %c", &operation);
    printf("Choose number 2: \n");
    scanf("%d", &num2);


    if(operation == 'x'){
        multiply(num1, num2);

    }else if(operation == '+'){
        add(num1, num2);

    }else if(operation == '-'){
        subtract(num1, num2);

    }else{
        divide(num1, num2);
    }
    return 0;

}

int multiply(int num1, int num2){
    int answer = num1*num2;
    printf("answer: %d \n", answer);

}

int add(int num1, int num2){
    int answer = num1+num2;
    printf("answer: %d \n", answer);
}

int subtract(int num1, int num2){
    int answer = num1-num2;
    printf("answer: %d \n", answer);
}

int divide(int num1, int num2){
    int answer = num1/num2;
    printf("answer: %d \n", answer);
}