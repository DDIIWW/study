#include<iostream>


int search_double_array(){//Написать программу, которая находит в двумерном массиве значения, повторяющиеся два и более раз, и показывает их на экран.
    const int size_array=3;
    int arr[size_array][size_array];
    std::cout<<"matrix"<<std::endl;
    for(int i=0;i<size_array;i++){
        for(int j=0;j<size_array;j++){
            arr[i][j]=rand()%100;//arr[i][j]=i+j-это если проверять на не случайных числах
            std::cout<<arr[i][j]<<" ";}
        std::cout<<std::endl;}
    for(int str1=0;str1<size_array;str1++){
        for(int col1=0;col1<size_array;col1++){
            int flag=0;
            for(int str2=0;str2<size_array;str2++){
                for(int col2=0;col2<size_array;col2++){
                    if(arr[str1][col1]==arr[str2][col2]) flag++;}}
            if(flag>1&&col1%2==1)std::cout<<"число "<<arr[str1][col1]<<" повторяеться "<<flag<<" раз"<<std::endl;}}
    return 1;}

int x_and_0(){
    srand(time(NULL));
    const int Size=3;//значения для игры
    char table[Size][Size];
    for(int i=0;i<Size;i++){
        for(int j=0;j<Size;j++)table[i][j]='_';}
    char game='X';
    char win='*';
    for(int count=0;count<9;count++){
        system("clear");/*поменять значение в скобках на 
        clear если у вас linux 
        cls если у вас Windows*/
        if(game=='X'){
            int col=0,row=0;
            while(!false){
                for(int i=0;i<Size;i++){
                    for(int j=0;j<Size;j++)
                        std::cout<<table[i][j]<<'|';
                    std::cout<<std::endl;}
                for(int k=0;k<3;k++){
                    if(k%2==0){for(int i=10;i>0;i--)std::cout<<"-";
                            std::cout<<std::endl;}
                    else{for(int i=5;i>0;i--)std::cout<<" X";
                            std::cout<<std::endl;}}
                int tmp=1;
                for(int i=0;i<Size;i++){
                    for(int j=0;j<Size;j++)std::cout<<tmp+j<<'|';
                    tmp+=3;
                    std::cout<<std::endl;}
                int posic;
                std::cout<<"Выберите позицию: ";
                std::cin>>posic;
                switch(posic){
                    case 1:row=0;col=0;break;
                    case 2:row=0;col=1;break;
                    case 3:row=0;col=2;break;
                    case 4:row=1;col=0;break;
                    case 5:row=1;col=1;break;
                    case 6:row=1;col=2;break;
                    case 7:row=2;col=0;break;
                    case 8:row=2;col=1;break;
                    case 9:row=2;col=2;break;}
                if(posic>0&&posic<10&&table[row][col]=='_')break;
                else{std::cout<<"неверный выбор,пробуй еще..."<<std::endl;}}
            table[row][col]=game;
            game='0';}
        else if (game=='0'){
            int col=0,row=0;
            while(true){
                int posic=1+rand()%9;
                switch(posic){
                    case 1:row=0;col=0;break;
                    case 2:row=0;col=1;break;
                    case 3:row=0;col=2;break;
                    case 4:row=1;col=0;break;
                    case 5:row=1;col=1;break;
                    case 6:row=1;col=2;break;
                    case 7:row=2;col=0;break;
                    case 8:row=2;col=1;break;
                    case 9:row=2;col=2;break;}
                if(table[row][col] == '_')break;}
            if(table[0][0]=='_'&&
              (table[0][1]=='X'&&table[0][2]=='X'
             ||table[1][1]=='X'&&table[2][2]=='X'
             ||table[1][0]=='X'&&table[2][0]=='X')){row = 0; col=0;}
            else if(table[0][1]=='_'&&
                (table[0][0]=='X'&&table[0][2]=='X'
               ||table[1][1]=='X'&&table[2][1]=='X')){row = 0; col = 1;}
            table[row][col]=game;
            game='X';}
        (table[0][0]!='_'&&
        (table[0][0]==table[0][1]&&table[0][1]==table[0][2]
       ||table[0][0]==table[1][0]&&table[1][0]==table[2][0]
       ||table[0][0]==table[1][1]&&table[1][1]==table[2][2]))?win=table[2][1]:
        (table[0][1]!= '_'
       &&table[0][1]==table[1][1]
       &&table[1][1]==table[2][1])?win=table[0][1]:
        (table[0][2]!='_'&&
        (table[0][2]==table[1][2]&&table[1][2]==table[2][2]
       ||table[0][2]==table[1][1]&&table[1][1]==table[2][0]))?win=table[0][2]:
        (table[1][0]!='_'
       &&table[1][0]==table[1][1]
       &&table[1][1]==table[1][2])?win=table[1][2]:
        (table[2][0]!='_'
       &&table[2][0]==table[2][1]
       &&table[2][1]==table[2][2])?win=table[2][2]:false;
       if(win!='*')break;}
    for(int k=0;k<3;k++){
        if(k%2==0){for(int i=10;i>0;i--)std::cout<<"-";
                    std::cout<<std::endl;}
        else std::cout<<"КОНЕЦ ИГРЫ"<<std::endl;}
    std::cout<<((win=='*')?"<неПОБЕДА>":"<ПОБЕДА>")<<std::endl;
    return 2;}

int main(){
    for(int userInput=3;userInput!=0;userInput++){
        std::cout<<"Введите номер задания для проверки\n0-выход"<<std::endl;
        std::cin>>userInput;
        (userInput==1)? userInput=search_double_array():
        (userInput==2)? userInput=x_and_0():userInput=-1;}
    return 0;}