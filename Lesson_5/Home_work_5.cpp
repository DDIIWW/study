#include<iostream>

int main(){
    for(int userInput=3;userInput!=0;userInput++){
        std::cout<<"Let's go\n0-Exit"<<std::endl;
        std::cin>>userInput;
        (userInput==1)? userInput=search_double_array():
        //(userInput==2)? userInput=X_or_0():userInput=-1;}
    return 0;}