#include <iostream>

int main(){
    std::cout<<"Введите год: ";
    int year;
    std::cin>>year;
    std::cout<<((((year%4)==0&&(year%100)!=0)||
                (year%400==0))? "год высокосный\n" : "год не высокосный\n" );
    return 0;}
