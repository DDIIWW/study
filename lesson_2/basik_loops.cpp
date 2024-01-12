#include<iostream>

int main(){
    /*int x=0;//цикл while
    while (x<5){x++;
        std::cout<<x<<std::endl;}*/
   
    /*int x,y;// цикл do..while
    std::cout<<"введите число ";
    std::cin>>x;
    do
    {   std::cout<<"введите другое число ";
        std::cin>>y;
    } while (x==y);*/

    /*int n,sum=0,x=0;//сумма чисел от 1 до N
    std::cout<<"введите целое положительное число -> ";
    std::cin>>n;
    while (x<n){x++;
        sum+=x;}
    std::cout<<"сумма чисел от 1 до "<<n<<" = "<<sum<<std::endl;*/

    int x=0;//степени числа (подробный вариант)
    double power=1.0,num;
    std::cout<<"введите число -> ";
    std::cin>>num;
    do{std::cout<<num<<"^"<<x<<" = "<<power<<std::endl;
        power*=num;
        x++;}
    while(x<=7);

    return 0;}
