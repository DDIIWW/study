#include<iostream>

int X_or_0(){
    std::cout<<"Игра крестики-нолики, выберите:\n1-выбрать X\n2-выбрать 0"<<std::endl;
    int choise;
    while(true){
        std::cin>>choise;
        std::cout<<((choise>0&&choise<3)?"Отлично":"Попробуй еще...")<<std::endl;
        if(choise>0&&choise<3)break;}
    char table[3][3];
    for(int i=0;i<3;i++)//заполняем таблицу
        for(int j=0;j<3;j++)table[i][j]='_';
    bool win=false;
    for(int count=0;count<9;count++){
        int variant_table[]={3,3};    
        if(choise==1&&count%2==0
         ||choise==2&&count%2==1){//ходит игрок
            while(true){system("cls");//поменять cls на clear если linux
                for(int i=0;i<4;i++){//выводим таблицу
                    for(int j=0;j<4;j++){
                        if(i==0)std::cout<<j<<'|';
                        else{if(j==0)std::cout<<i<<'|';
                            else std::cout<<table[i-1][j-1]<<'|';}}
                    std::cout<<std::endl;}
                std::cout<<"Строчка: "<<std::endl;
                std::cin>>variant_table[0];
                std::cout<<"Столбик: "<<std::endl;
                std::cin>>variant_table[1];
                for(int i=0;i<2;i++)variant_table[i]--;
                if(variant_table[0]>=0&&variant_table[1]>=0
                 &&variant_table[0]<3 &&variant_table[1]<3
                 &&table[variant_table[0]][variant_table[1]]=='_')break;}}
        else{while(true){//ходит комп
                variant_table[0]=rand()%3;
                variant_table[1]=rand()%3;
                if(table[variant_table[0]][variant_table[1]]=='_')break;}}  
        table[variant_table[0]][variant_table[1]]=(count%2==0)?'X':'0';
        win=(table[0][0]!='_'&&(table[0][0]==table[0][1]&&table[0][1]==table[0][2]//win table
            ||table[0][0] == table[1][0] && table[1][0] == table[2][0] 
            ||table[0][0] == table[1][1] && table[1][1] == table[2][2]))?true:
        (table[0][1] != '_' && table[0][1] == table[1][1] && table[1][1] == table[2][1])?true:
        (table[0][2] != '_' && (table[0][2] == table[1][2] && table[1][2] == table[2][2] 
            || table[0][2] == table[1][1] && table[1][1] == table[2][0]))?true:
        (table[1][0] != '_' && table[1][0] == table[1][1] && table[1][1] == table[1][2])?true:
        (table[2][0] != '_' && table[2][0] == table[2][1] && table[2][1] == table[2][2])?true:false;
        if(win)break;} 
    system("clr");//поменять cls на clear если linux
    std::cout<<"Game Over"<<std::endl;
    for(int i=0;i<4;i++){//выводим таблицу
                for(int j=0;j<4;j++){
                if(i==0)std::cout<<j<<'|';
                else{if(j==0)std::cout<<i<<'|';
                    else std::cout<<table[i-1][j-1]<<'|';}}
                std::cout<<std::endl;}
    std::cout<<"Game Over"<<std::endl;
    return 2;}

int main(){
    X_or_0();
    return 0;}


