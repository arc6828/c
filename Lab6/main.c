/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Administrator
 *
 * Created on September 21, 2018, 9:10 PM
 */

#include <stdio.h>
#include <stdlib.h>

void example1() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a > 20) {
        printf("%d is bigger than 20 \n", a);
    }
}

void example2() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a > 20) {
        printf("%d is bigger than 20 \n", a);
    } else {
        printf("%d is less than 20 or equal \n", a);
    }
}

void example3() {
    int age;
    printf("How old are you? :");
    scanf("%d", &age);

    if (age > 60) {
        printf("You are old!!!\n");
    }
    printf("Bye bye...\n");
}

void example4() {

    int age;
    printf("How old are you? :");
    scanf("%d", &age);

    if (age > 60) {
        printf("You are old!!!\n");
    } else {
        printf("You are young!!!\n");
    }

    printf("Bye bye...\n");
}

void example5() {

    char answer;
    printf("Do you like C Programming? : ");
    scanf("%c", &answer);

    if (answer == 'y' || answer == 'Y') {
        printf("Very good!!!\n");
    } else {
        printf("I'm sorry to hear that!!!\n");
    }

    printf("Good bye...\n");
}

void example6() {
    int num1, num2, result;
    char op;

    printf("Input operator : ");
    scanf(" %c", &op);
    printf("Input first integer number : ");
    scanf("%d", &num1);
    printf("Input second integer number : ");
    scanf("%d", &num2);
    printf("----------------------------------\n");

    if (op == '+') {
        result = num1 + num2;
    } else if (op == '-') {
        result = num1 - num2;
    } else if (op == '*') {
        result = num1 * num2;
    } else if (op == '/') {
        result = num1 / num2;
    } else if (op == '%') {
        result = num1 % num2;
    } else {
        printf("Invalid Operator\n");
    }

    printf("%d %c %d = %d\n\n", num1, op, num2, result);
}

void example7() {
    int midterm, final, total;
    char grade;

    printf("Input midterm score : ");
    scanf("%d", &midterm);
    printf("Input final score : ");
    scanf("%d", &final);

    total = midterm + final;

    if (total >= 80) {
        grade = 'A';
    } else if (total >= 70 && total <= 79) {
        grade = 'B';
    } else if (total >= 60 && total <= 69) {
        grade = 'C';
    } else if (total >= 50 && total <= 59) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("------------------- \n");
    printf("Total score : %d \n", total);
    printf("Grade : %c \n", grade);
}

void example8() {
    int number;
    printf("Input day number : ");
    scanf("%d", &number);
    printf("------------------- \n");

    switch (number) {
        case 1:
            printf("Monday, I must go to work \n");
            break;
        case 2:
            printf("Tuesday, Let's shopping \n");
            break;
        case 3:
            printf("Wednesday, I want to stay home \n");
            break;
        default:
            printf("Invalid number \n");
    }
}

void example9() {
    char code;
    int rate, pay, hour;
    
    printf("Input job code : ");
    scanf("%c", &code);
    printf("Input work hour : ");
    scanf("%d", &hour);
    printf("-------------------\n");

    switch (code) {
        case 'A':
            rate = 500;
            break;
        case 'B':
            rate = 400;
            break;
        case 'C':
            rate = 300;
            break;
        default:
            rate = 0;
            printf("Invalid code!!!!\n");
    }

    pay = rate * hour;

    printf("Job code : %c \n", code);
    printf("Rate : %d \n", rate);
    printf("Work hours : %d \n", hour);
    printf("Pay : %d \n\n", pay);
}


void practice1(){
    float salary, bonus;
    printf("Enter salary : ");
    scanf("%f", &salary);    
    printf("--------------\n");
    
    if(salary < 5000){
        salary = salary * 1.1;
    }
    
    bonus = salary * 3;
    
    printf("New salary : %.2f \n", salary);
    printf("Bonus : %.2f \n", bonus);    
}

void practice2(){
    float old_salary, new_salary;
    printf("Enter salary : ");
    scanf("%f", &old_salary);    
    printf("--------------\n");
    
    if(old_salary <= 10000){
        new_salary = old_salary * 1.1;
    }else{        
        new_salary = old_salary * 1.05;
    }   
    
    printf("Old salary : %.2f \n", old_salary);
    printf("New salary : %.2f \n", new_salary);   
}

void practice10(){    
    float distance, fee;
    
    printf("Enter distance : ");
    scanf("%f", &distance);    
    printf("-------------------\n");
    
    if(distance <= 350){
        fee = 5.0 * distance;
    }else{        
        fee = (5.0 * 350) + (6.5 * (distance-350));
    }   
    
    printf("Gasoline fee : %.2f \n", fee);  
}

void practice3(){   
    int number,price;
    printf("Enter a number of product : ");
    scanf("%d", &number);    
    printf("-------------------\n");
    
    if(number < 100){
        price = 80 * number;
    }else if(number >= 100 && number < 499){
        price = 70 * number;
    }else if(number >= 500 && number < 999){
        price = 60 * number;    
    }else{        
        price = 50 * number;  
    }       
    printf("Total price : %d \n", price);  
}
void practice4(){ 
    char code;
    float discount, total, net_total,number;
    
    printf("Input product code : ");
    scanf("%c", &code);
    printf("Input a number of product : ");
    scanf("%f", &number);
    printf("-------------------\n");

    switch (code) {
        case 'A':
            total = number * 200;
            discount = total * 0.10;
            break;
        case 'B':
            total = number * 1000;
            discount = total * 0.30;
            break;        
        default:            
            total = number * 100;
            discount = 0;
    }

    net_total = total - discount;

    printf("Total price : %.2f \n", total);
    printf("Discount : %.2f \n", discount);
    printf("Net total price : %.2f \n", net_total);
}
int main(int argc, char** argv) {
    
    practice4();

    return (EXIT_SUCCESS);
}

