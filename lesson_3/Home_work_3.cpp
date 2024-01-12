#include <iostream>

int summaChuselDo500(){
    std::cout<<"Напишите программу, которая вычисляет сумму целых чисел от а до 500 \n(значение a вводится с клавиатуры)"<<std::endl;
    std::cout<<"введите значение а : ";
    int a,sum=0;
    std::cin>>a;
    if (a%2==1){ 
        for(int i=500;i-a>0;a++,i--) sum+=i+a;}
    else{ 
        for(a;a<501;a++)sum=sum+a;};
    std::cout<<"сумма = "<<sum<<std::endl;
    return 1;}

bool xVstepeniY(){
    std::cout<<"Напишите программу, которая запрашивает два целых числа x и y, послечего\nвычисляет и выводит значение x в степени y"<<std::endl;
    std::cout<<"х="; 
    int x; std::cin>>x;
    int tmp=x;
    std::cout<<"y="; 
    int y; std::cin>>y;
    for (y;y>1;y--){x*=tmp;}
    std::cout<<"x^y="<<x<<std::endl;
    return 2;}

int sredneeOrifmetich(){
    std::cout<<"Найти среднее арифметическое всех целых чисел от 1 до 1000."<<std::endl;
    double res=0;
    for(int i=1000;i>0;i--){res+=i;}
    std::cout<<"результат = "<<res/1000<<std::endl;
    return 3;}

int proizvedenieChiselDo20(){
    std::cout<<"Найти произведение всех целых чисел от a до 20 \n(значение a вводится с клавиатуры: 1 <=a <= 20)"<<std::endl;
    std::cout<<"а=";
    unsigned long int a; std::cin>>a;
    for(int i=a+1;i<=20;i++){a*=i;}
    std::cout<<"res="<<a<<std::endl;
    return 4;}

int tablUmnojenia(){
    std::cout<<"Написать программу, которая выводит на экран таблицу умножения на k,\n где k –номер варианта. Например, для 7-го варианта:\n7 x 2 = 14\n7 x 3 = 21"<<std::endl;
    std::cout<<"номер варианта ";
    int x;std::cin>>x;
    for(int i=10;i>0;i--) std::cout<<x<<" x "<<i<<" = "<<x*i<<std::endl;
    return 5;}

int chislaOt0Do(){
    std::cout<<"Вывести на экран все числа от нуля до введенного пользователем числа."<<std::endl;
    std::cout<<"введите число ";
    int userInput;std::cin>>userInput;
    for(int i=0;i<userInput;i++)std::cout<<i<<std::endl;
    return 6;}

int doubleGranice(){
    std::cout<<"Пользователь вводит две границы диапазона, вывести на экран все числа из этого диапазона.\nПредусмотреть, чтобы пользователь мог вводить границы диапазона в произвольном порядке.\n вывести все четные числа из диапазона.\n вывести все нечетные числа из диапазона.\n вывести все числа, кратные семи"<<std::endl;
    int userImput1,userImput2;
    for(int i=1;i<=2;i++){
        std::cout<<"введите "<<i<<" число: ";
        std::cin>>((i==1)?userImput1:userImput2);}
    if (userImput1<userImput2){
        int tmp=userImput2;
        userImput2=userImput1;
        userImput1=tmp;}
    for(int i=4;i>0;i--){
        int tmp=userImput2;
        std::cout<<((i==4)?"все числа":
                    (i==3)?"чётный":
                    (i==2)?"не четные":
                    "кратные семи")<<std::endl;    
        for (int j=userImput1-userImput2;j>=0;j--){
            if(i==4){std::cout<<tmp<<" ";}
            if(i==3&&tmp%2==0){std::cout<<tmp<<" ";}
            if(i==2&&tmp%2!=0){std::cout<<tmp<<" ";}
            if(i==1&&tmp%7==0){std::cout<<tmp<<" ";};
            tmp++;}
    std::cout<<std::endl;}   
    return 7;}

int doubleGraniceSum(){
    std::cout<<"Пользователь вводит две границы диапазона.\nПосчитать сумму всех чисел диапазона."<<std::endl;
    int userImput1,userImput2,sum=0;
    for(int i=1;i<=2;i++){
        std::cout<<"введите "<<i<<" число: ";
        std::cin>>((i==1)?userImput1:userImput2);}
    if (userImput1<userImput2){
        int tmp=userImput2;
        userImput2=userImput1;
        userImput1=tmp;}
    for (int i=userImput1-userImput2;i>=0;i--){
        sum+=userImput1;
        userImput1--;}
    std::cout<<"summa="<<sum<<std::endl;
    return 8;}

int graniceSum(){
    std::cout<<"Пользователь с клавиатуры вводит числа. \nПосчитать их сумму и вывести на экран,\nкак только пользователь введет ноль"<<std::endl;
    int sum=0;
    for(int userInput=1;userInput!=0;sum+=userInput){
        std::cout<<"введите чило"<<std::endl;
        std::cin>>userInput;}
    std::cout<<"сумма всех чисел равна :"<<sum<<std::endl;
    return 9;}    

int main(){
    for(int userInput=10;userInput!=0;userInput++){
        std::cout<<"Введите номер задания для проверки\n0-выход"<<std::endl;
        std::cin>>userInput;
        (userInput==1)? userInput=summaChuselDo500():
        (userInput==2)? userInput=xVstepeniY():
        (userInput==3)? userInput=sredneeOrifmetich():
        (userInput==4)? userInput=proizvedenieChiselDo20():
        (userInput==5)? userInput=tablUmnojenia():
        (userInput==6)? userInput=chislaOt0Do(): 
        (userInput==7)? userInput=doubleGranice():
        (userInput==8)? userInput=doubleGraniceSum():
        (userInput==9)? userInput=graniceSum():userInput=-1;}
    return 0;}