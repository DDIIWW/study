#include<iostream>
//main на 83 строке
void swap(int &a,int &b){
    a=a+b;
    b=a-b;
    a=a-b;}

//Задание 1
int stepen(int a,int n){
    int stepen=a;
    for(int i=1;i<n;i++)stepen*=a;
    return stepen;}

//Задание 2
int summaChiselV1(int a, int b){
    if(a>b)swap(a,b);
    int sum=0;
    while(a<b){
        sum+=a;
        a++;}
    return sum;}

int summaChiselV2(int a, int b){
    if(a>b)swap(a,b);
    if(a<b)return a+summaChiselV2(a+1,b);
    return 0;}

//Задание 3
void perfectNumbers(int x, int y){
    for (int i=x;i<y;i++){
        int result=0;
        for (int j=1;j<i;j++)if((i%j)==0)result+=j;
        if (result==i&&result){std::cout<<"число совершенное "<<result<<std::endl;}}}


//Задание 4
void card(int num,int suit){
    char card[13] = { 'A','2','3','4','5','6','7','8','9','X','J','Q','K' };
    for(int i=10;i>0;i--){
        if(i==10)std::cout<<" __________ "<<std::endl;
        else if(i==1){std::cout<<"|__________|"<<std::endl;}
        else if(i==3||i==7){std::cout<<"|"<<card[num-1]<<
        ((suit==1)?" HEART   ":
        (suit==2)?" DIAMOND ":
        (suit==3)?" CLUB    ":" SPADE    ")<<"|"<<std::endl;}
        else{std::cout<<"|          |"<<std::endl;}}}

//Задание 5
bool luckyNumber(int num){
    return(num/100000+((num/10000)%10)+((num/1000)%10)==((num/100)%10)+((num/10)%10)+num%10)? true: false;}


//Задание 6
bool highGradeYear(int year){
    return (year%4==0)? true:false;}

int howManyDays(int day1,int month1,int year1,int day2,int month2,int year2){
    int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(year1>year2)swap(year1,year2);
    if(month1>month2)swap(month1,month2);
    if(day1>day2)swap(day1,day2);
    int resultDay=day2-day1;
    for(year1;year1<=year2;year1++){
        if(year1==year2)for(month1;month1<month2;month1++)resultDay+=month[month1];
        else{resultDay+=(highGradeYear(year1))?366:365;}}
    return resultDay;}

//Задание 7
double average(int arr[], int len=6){
  double sum=0;
  for(int i=0;i<len;i++)sum+=arr[i];
  return sum/len;}

//Задание 8
void q8(int arr[], int len=6){
    int plus=0,null=0,minus=0;
    for(int i=len-1;i>=0;i--)
        (arr[i]>0)?plus++:
        (arr[i]<0)?minus++:null++;
    std::cout<<"значений больше нуля: "<<plus<<"\n"<<"значений меньше нуля: "<<minus<<"\n"<<"значений равные нулю: "<<null<<std::endl;}


int main(){
    //задание 1
    std::cout<<"Написать функцию, которая принимает два параметра: \nоснование степени и показатель степени, \nи вычисляет степень числа на основе полученных данных."<<std::endl;
    int userInput[6];
    std::cout<<"введите число ";
    std::cin>>userInput[0];
    std::cout<<"введите степень ";
    std::cin>>userInput[1];
    std::cout<<"stepen = "<<stepen(userInput[0],userInput[1])<<std::endl;
    //задание 2
    std::cout<<"Написать функцию, которая получает в качестве параметров 2 целых числа\nи возвращает сумму чисел из диапазона между ними."<<std::endl;
    std::cout<<"введите число 1: ";
    std::cin>>userInput[0];
    std::cout<<"введите число 2: ";
    std::cin>>userInput[1];
    std::cout<<"summa = "<<summaChiselV1(userInput[0],userInput[1])<<std::endl;
    std::cout<<"summa = "<<summaChiselV2(userInput[0],userInput[1])<<std::endl;
    //задание 3
    std::cout<<"Число называется совершенным, если сумма всех его делителей равна ему самому.\nНапишите функцию поиска таких чисел во введенном интервале."<<std::endl;
    std::cout<<"введите число 1: ";
    std::cin>>userInput[0];
    std::cout<<"введите число 2: ";
    std::cin>>userInput[1];
    perfectNumbers(userInput[0],userInput[1]);
    //задание 4
    std::cout<<"Написать функцию, выводящую на экран переданную ей игральную карту."<<std::endl;
    std::cout<<"Введите карту\n1-туз\n2-два\n3-три\n4-четыри\n5-пять\n6-шесть\n7-семь\n8-восемь\n9-девять\n10-десять\n11-валет\n12-дама\n13-король"<<std::endl;
    std::cin>>userInput[0];
    std::cout<<"Введите карту\n1-черви\n2-буби\n3-пики\n4-вини"<<std::endl;
    std::cin>>userInput[1];
    card(userInput[0],userInput[1]);
    //задание 5
    std::cout<<"Написать функцию, которая определяет, \nявляется ли «счастливым» шестизначное число"<<std::endl;
    std::cout<<"введите число: ";
    std::cin>>userInput[0];
    std::cout<<"lucky number = "<<((luckyNumber(userInput[0]))?"счастливое":"несчастливое")<<std::endl;
    //задание 6
    std::cout<<"Написать функцию, которая принимает две даты \n(т.е. функция принимает шесть параметров) и\nвычисляет разность в днях между этими датами. \nДля решения этой задачи необходимо также\nнаписать функцию, которая определяет, \nявляется ли год високосным."<<std::endl;
    for(int i=0;i<6;i++){
        std::cout<<((i==0||i==3)?"введите день: ":
        (i==1||i==4)?"введите месяц: ": "введите год: ")<<std::endl;
        std::cin>>userInput[i];}
    std::cout<<"days= "<<howManyDays(userInput[0],userInput[1],userInput[2],userInput[3],userInput[4],userInput[5])<<std::endl;
    //задание 7
    std::cout<<"Написать функцию, определяющую среднее арифметическое\nэлементов передаевамого ей массива"<<std::endl;
    for(int i=0;i<6;i++){
        std::cout<<"введите число: ";
        std::cin>>userInput[i];}
    std::cout<<"среднее арифметическое чисел = "<<average(userInput)<<std::endl;
    //задание 8
    std::cout<<"Написать функцию, определяющую количество положительных, отрицательных и нулевых\nэлементов передаваемого ей массива."<<std::endl;
    for(int i=0;i<6;i++){
        std::cout<<"введите число: ";
        std::cin>>userInput[i];}
    q8(userInput);
    return 0;}