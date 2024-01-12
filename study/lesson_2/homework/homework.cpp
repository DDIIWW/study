#include<iostream>

void taskOne(){
    std::cout<<"введите число от 0 до 100\n -> ";
    int number, sum=0;
    std::cin>>number;
    do{ 
        sum+=number;
        number++;
    }while(number<=100);
    std::cout<<"сумма чисел до 100 -> "<<sum<<std::endl;}

void taskTwo(){
    std::cout<<"введите число \n -> ";
    double number,i=0;
    std::cin>>number;
    while (i<=9){ 
        std::cout<<number<<"*"<<i<<"="<<i*number<<std::endl;
        i++;}}

void taskTree(){
     std::cout<<"введите число \n -> ";
     double num1,num2;
     std::cin>>num1;
     do{
        std::cout<<"квадрат первого числа равен \n -> ";
        std::cin>>num2;
     }while((num1*num1)!=num2);
     std::cout<<"Правильно молодец!"<<std::endl;}

void taskFour(){
    std::cout<<"введите число \n -> ";
    int num,multipla=1,i=1;
    std::cin>>num;
    do{ 
        multipla*=i;
        i++;
        }while(i<=num);
    std::cout<<num<<"!"<<" -> "<<multipla<<std::endl;}

void taskFive(){
    std::cout<<"введите число \n -> ";
    int num,i=0;
    std::cin>>num;
    do{ 
        i++;
        if(num%i==0)std::cout<<"делитель числа "<<num<<" -> "<<i<<std::endl;
    }while(i<=num);}

int main(){
    setlocale(LC_ALL,"Russian");
    do{ 
        std::cout<<"Введит номер задачи для проверки\n 0-для выхода\n -> ";
        int numberTask;
        std::cin>>numberTask;
        switch (numberTask){
            case 1: taskOne(); continue;// это добавлено для удобства
            case 2: taskTwo(); continue;
            case 3: taskTree(); continue;
            case 4: taskFour(); continue;
            case 5: taskFive(); continue;
            default: goto exit;}//break не сработал по этому пришлось так
    }while(true);
    exit:
        return 0;}