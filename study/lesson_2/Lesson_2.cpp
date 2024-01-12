#include<iostream>

int main(){
    /*std::cout<<"Введите число\n"; //задача 1 четное/нечетное
    int x;
    std::cin>>x;
    std::cout<<(((x%2)>0) ? "число не четное\n":"число четное\n");*/

    /*int x; //задача 2 проверка диапозона
    std::cout<<"Введите целое число\n";
    std::cin>>x;
    std::cout<<((x>=0&&x<=100)? "от 0 до 100\n":
                (x>100&&x<=200)? "от 101 до 200\n":
                (x>200&&x<=300)? "от 201 до 300\n":
                "не принадлежат ни одному диапозону\n");*/

    double array[3]; //задача 3 Сортировка 3 чисел
    std::cout<<"Введите 3 числa\n";
    for(int i=0;i<3;i++){std::cin>>array[i];}
    for (int pos=0;pos<3-1;pos++){
        for(int i=pos+1;i<3;i++){
            if (array[i]<array[pos]){
                double tmp=array[i];
                array[i]=array[pos];
                array[pos]=tmp;}}}
    for(int x=0;x<3;x++){std::cout<<array[x]<<'\t';}
    std::cout<<std::endl;
    return 0;}



    