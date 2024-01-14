#include<iostream>
#include<array>//массивы
#include<cstdlib>//стандартая для С
#include<ctime>//время на С
//массивы
int one_array(){
    //одномерные масиивы
    int arr[100];
    int arr2[]={1,2,3,4,5,6,7,8,9,0};
    int* arr3=new int[5];//создание через сырой указатель
    std::array<int,5> arr4;
    int a=arr2[1];

    return 0;}

int quest_1(){//нахождение максимума и минимума
    int arr[]={4,6,7,125,228};
    int mx=arr[0];
    int mn=arr[0];
    for(int i=4;i>=0;i--){
        (mx<arr[i])? mx=arr[i]:mn=arr[i];}
    std::cout<<mx<<" "<<mn<<std::endl;
    return 0;}

int quest_2(){//посчитать сумму всех значений и вывести на экран
    int arr[10];
    int sum=0;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        arr[i]=i+1;
        sum+=arr[i];}
    std::cout<<sum<<std::endl;
    return 0;}

int max_array(){//многомерные массивы
    int arr[3][3][3];//трехмерный массив
    int array[2][3]={{1,2,3},{4,5,6}};//с инициализацией
    //array [0][2]=3;
    //третий способ
    int** arra=new int*[3];//указываем строки
    for(int i=0;i<3;i++)arra[3]=new int[3];//колонки
    std::array<std::array<int,3>,3> arr1;//четвертый способ
    return 0;}

int quest_3(){//найти максимальный элеиент строки в двуметрном массиве
    std::srand(std::time(nullptr));//указываем сид для рандомайзера
    int arr[3][2];//3 строки 2 столбца
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            //arr[i][j]=i+j;
            arr[i][j]=rand()%100;//случайное значение от 0 до 99
            std::cout<<arr[i][j]<<" ";}
        std::cout<<std::endl;}
    for(int i=0;i<3;i++){
        int max=arr[i][0];
        for(int j=0;j<2;j++){
            (max<arr[i][j])? max=arr[i][j]:max=max;}
        std::cout<<"max element "<<i+1<<" string="<<max<<std::endl;}
    return 0;}

int quest_4(){//дан массив 3х4 заполнить его и вывести кол-во нулей
    int arr[3][4]={{0,2,3,4},{9,0,2,3},{3,2,0,1}};
    int count=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==0) count++;}}
    std::cout<<"колво 0 будет "<<count<<std::endl;
    return 0;}

int quest_5(){//написать сложение матриц 3х3
    int arr1[3][3];
    int arr2[3][3];
    int result[3][3];
    std::cout<<"первая матрица"<<std::endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr1[i][j]=i+j;
            std::cout<<arr1[i][j]<<" ";}
        std::cout<<std::endl;}
    std::cout<<"вторая матрица"<<std::endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr2[i][j]=rand()%100;
            std::cout<<arr2[i][j]<<" ";}
        std::cout<<std::endl;}
    std::cout<<"результат"<<std::endl;        
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            result[i][j]=arr1[i][j]+arr2[i][j];
            std::cout<<result[i][j]<<" ";}
        std::cout<<std::endl;}
    return 0;}

int quest_6(){//Написать программу, которая находит в двумерном массиве значения, повторяющиеся два и более раз, и показывает их на экран.
    int arr[3][3];
    unsigned int number[3];
    std::cout<<"matrix"<<std::endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j]=i+j;
            std::cout<<arr[i][j]<<" ";}
        std::cout<<std::endl;}
    unsigned int count[3]={1};
    for(int k=0;k<3;k++){
        for(int n=0;n<3;n++){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    (arr[k][n]==arr[i][j])?number[k]=arr[k][n]:
                    (count[k]>1)?count[k]++:count[k];}}}}
    for(int i=0;i<3;i++){
        if(count[i]!=0){
        std::cout<<"элемент "<<number[i]<<" cодержиться "<<count[i]<<" раз"<<std::endl;}}
    return 0;}    

int main(){
    quest_6();
    return 0;}