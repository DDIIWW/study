#include <iostream>
#include <math.h>

int triangleType(double a,double b, double c){
    /*проыеряет теругольник и выводит
        0- если обычный
        1- если равностороний
        2- если равнобедринным
        3- если прямоугольный*/ 
    if (a==b && b==c){return 1;}
    else if (a==b || b==c || c==a){return 2;}
    else if (pow(a,2) + pow(b,2) == pow(c,2) || 
            (pow(a,2) + pow(c,2) == pow(b,2))|| 
            (pow(b,2) + pow(c,2) == pow(a,2))){
        return 3;}
    else {return 0;}    
    }

int main(){
    //блок Ввода информации
    double triangleSideA,triangleSideB,triangleSideC;
    std::cout<<"Введите длинну основания треугольника\n";
    std::cin>>triangleSideA;
    std::cout<<"Введите длинну сторону треугольника\n";
    std::cin>>triangleSideB;
    std::cout<<"Введите длинну другую сторону треугольника\n";
    std::cin>>triangleSideC;

    //блок вывода информации
    int out = triangleType(triangleSideA,triangleSideB,triangleSideC);
    switch (out)
    {
    case 1:
        std::cout<<"Треугольник равностороний"<<std::endl;
        break;
    case 2:
        std::cout<<"Треугольник равнобедренный"<<std::endl;
        break;
    case 3:
        std::cout<<"Треугольник прямоугольный"<<std::endl;
        break;
    default:
        std::cout<<"Треугольник обычный"<<std::endl;
        break;
    }
    return 0;}