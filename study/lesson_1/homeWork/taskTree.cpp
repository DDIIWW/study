#include<iostream>

const double ITC = 2.54;//константа 1 дюйм = 2.54 см

double switchСentimeterToInch(double x){
    //перевод из сантиметров в дюймы
    return x/ITC;
}

double switchInchToCentimeter(double x){
    //перевод из дюймов в сантиметры
    return x*ITC;
}

int main(){
    std::cout<<"Программа выполнит перевод едениц длинны выберите нужный вариант\n 0 - перевод из сантиметров в дюймы\n 1 - перевод из дюймов в сантиметры\n";
    bool userInputBoll;
    std::cin>>userInputBoll;
    std::cout<<"Введите число: ";
    double userInputDouble;
    std::cin>>userInputDouble;
    double output = userInputBoll ? switchInchToCentimeter(userInputDouble):switchСentimeterToInch(userInputDouble);
    std::cout<<"Ваше значение равно: "<<output<<std::endl;
    return 0;} 
    /*данная реализация по моему мне скромному мнению проще
        чем через switch-case, в первом задание реализован switch-case 
        т.к. там было проще и эфективнее его реализовать на мой скромный взгляд*/