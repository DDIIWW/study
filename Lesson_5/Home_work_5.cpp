#include<iostream>

int task_1(){
    int arr[3];
    for(int i=0;i<3;i++){
        if(i==0){std::cout<<"enter a number: ";
                 std::cin>>arr[i];
        }else{arr[i]=arr[i-1]*2;}         
        std::cout<<arr[i]<<" ";}
    return 1;}

int task_2(){
    int arr[3];
    for(int i=0;i<3;i++){
        if(i==0){std::cout<<"enter a number: ";
                 std::cin>>arr[i];
        }else{arr[i]=arr[i-1]+1;}        
        std::cout<<arr[i]<<" ";}
    return 2;}

int task_3(){
    const int size_arr=3;
    int arr[size_arr][size_arr];
    for(int i=0;i<size_arr;i++){
        for(int j=0;j<size_arr;j++){
            arr[i][j]=rand()%10;
            std::cout<<arr[i][j]<<" ";}
        std::cout<<std::endl;}
    int shift[2];
    for(int i=0;i<2;i++){
        std::cout<<((i==0)?"enter the shift: ":"the direction of the shift\n1-left\n2-up\n3-down\n4-right")<<std::endl;
        std::cin>>shift[i];}
    for(shift[0];shift[0]>0;shift[0]--){
        if(shift[1]==1){
            for(int k=0;k<size_arr;k++){
                int tmp=arr[k][0];
                for(int j=0;j<size_arr;++j){
                    arr[k][j]=arr[k][j+1];
                    if(j==size_arr-1)arr[k][j]=tmp;}}}
        if(shift[1]==2){
            int tmp_arr[size_arr];
            for(int i=0;i<size_arr;i++)tmp_arr[i]=arr[0][i];//переписываем массив во временный
            for(int i=1;i<size_arr;i++){//заменяем 
                for(int j=0;j<size_arr;++j)arr[i-1][j]=arr[i][j];
                if(i==size_arr-1)for(int k=0;k<size_arr;k++)arr[size_arr-1][k]=tmp_arr[k];}}
        if(shift[1]==3){
            int tmp_arr[size_arr];
            for(int i=0;i<size_arr;i++)tmp_arr[i]=arr[size_arr-1][i];//переписываем массив во временный
            for(int i=size_arr;i>=0;i--){//заменяем 
                for(int j=0;j<size_arr;++j)arr[i+1][j]=arr[i][j];}
            for(int i=0;i<size_arr;i++)arr[0][i]=tmp_arr[i];}
        if(shift[1]==4){
            for(int k=0;k<size_arr;k++){
                int tmp=arr[k][size_arr-1];
                for(int j=size_arr-1;j>=0;j--)arr[k][j]=arr[k][j-1];
                arr[k][0]=tmp;}}      }
    for(int i=0;i<size_arr;i++){
        for(int j=0;j<size_arr;j++){
            std::cout<<arr[i][j]<<" ";}
        std::cout<<std::endl;} 
    return 3;}

int main(){
    for(int userInput=3;userInput!=0;userInput++){
        std::cout<<"Let's go\nenter the task number\n0-Exit"<<std::endl;
        std::cin>>userInput;
        (userInput==1)? userInput=task_1():
        (userInput==2)? userInput=task_2():
        (userInput==3)? userInput=task_3():userInput--;}
    return 0;}
