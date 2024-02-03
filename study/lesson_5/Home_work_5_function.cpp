#include<iostream>

int stepen(int a,int n){
    int stepen=a;
    for(int i=1;i<n;i++)stepen*=a;
    return stepen;}

int main(){
    std::cout<<"stepen = "<<stepen(5,3)<<std::endl;
    return 0;}