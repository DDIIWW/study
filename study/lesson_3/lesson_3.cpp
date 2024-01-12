#include<iostream>

void factorio(){
    std::cout<<"Веедите число для фактормала "<<std::endl;
    int num,res=1;
    std::cin>>num;
    for(num;num>0;num--){res=res*num;}
    std::cout<<"фаториал числа = "<<res<<std::endl;}

void Summa_chisel(){
    std::cout<<"введите число "<<std::endl;
    int num,sum=0;
    std::cin>>num;
    for (num;num>0;num--){sum+=num;}
    std::cout<<"сумма чисел от 0 = "<<sum<<std::endl;}    

void Summa_cisel_ot_do(){
    std::cout<<"введите число "<<std::endl;
    int x,y,sum=0;
    std::cin>>x;
    std::cin>>y;
    for (x;x<=y;x++){sum+=x;}
    std::cout<<"сумма чисел = "<<sum<<std::endl;}

void Chetnie_chisla(){
    std::cout<<"введите число "<<std::endl;
    int x,y;
    std::cin>>x;
    std::cin>>y;
    for (x;x<y;x++){if(x%2!=1) std::cout<<"="<<x<<std::endl;}}

void Ubyvanie(){
    std::cout<<"введите число "<<std::endl;
    int x,y,sum=0;
    std::cin>>x;
    std::cin>>y;
    for (y;x<=y;y--){
        std::cout<<"="<<y<<std::endl;}}

void Chisla_ot_do_nechet(){
    std::cout<<"введите число "<<std::endl;
    int x,y;
    std::cin>>x;
    std::cin>>y;
    if(x>y){int z = x; x=y;y=z;}
    for (x;x<y;x++){if(x%2==1) std::cout<<"="<<x<<std::endl;}}
   
 void Vlojenit_cikl(){
    for(int i=0;i<5;i++){
        std::cout<<std::endl;
        for(int j=0;j<5;j++){std::cout<<j<<" ";}}
        std::cout<<std::endl;}

void Table_ymnojenia(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            std::cout<<i<<"*"<<j<<"="<<i*j<<std::endl;}}} 

void shahmatnaia_doska(){
    int cellSize;
    std::cout << "Введите размер клеточки: ";
    std::cin >> cellSize;
    for (int row = 0; row < 10; row++){
        for (int cellrow = 0; cellrow < cellSize; cellrow++){
            for (int col = 0; col < 10; col++){
                for (int cellcol = 0; cellcol < cellSize; cellcol++){
                    if ((row + col) % 2 == 0){std::cout << "*";}
                    else std::cout << "-";}}
                    std::cout << std::endl;}}}

int main(){
    shahmatnaia_doska();
    return 0;}