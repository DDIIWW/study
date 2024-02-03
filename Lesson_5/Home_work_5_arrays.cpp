#include<iostream>

int task_1(){
    int arr[3];
    for(int i=0;i<3;i++){
        if(i==0){std::cout<<"enter a number: ";
                 std::cin>>arr[i];
        }else{arr[i]=arr[i-1]*2;}         
        std::cout<<arr[i]<<" ";}
    std::cout<<std::endl;
    return 1;}

int task_2(){
    int arr[3];
    for(int i=0;i<3;i++){
        if(i==0){std::cout<<"enter a number: ";
                 std::cin>>arr[i];
        }else{arr[i]=arr[i-1]+1;}        
        std::cout<<arr[i]<<" ";}
    std::cout<<std::endl;
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

int task_4(){
    const int size_arr=3;
    const int rand_size=100;
    int sum=0,min=rand_size,max=0;
    double arithmetic_mean;
    int arr[size_arr][size_arr];
    for(int i=0;i<size_arr;i++){//init array
        for(int j=0;j<size_arr;j++){
            arr[i][j]=rand()%rand_size;
            std::cout<<arr[i][j]<<" ";}
        std::cout<<std::endl;}
    for(int i=0;i<size_arr;i++){//calculating
        for(int j=0;j<size_arr;j++){
            sum+=arr[i][j];
            if(arr[i][j]>max)max=arr[i][j];
            if(arr[i][j]<min)min=arr[i][j];}}
    arithmetic_mean=sum/(size_arr*size_arr);
    std::cout<<"summa = "<<sum<<"\narithmetic mean = "<<arithmetic_mean<<"\nminimal ="<<min<<"\nmax = "<<max<<std::endl;
    return 4;}

int task_5(){
    const int size_arr=3;
    const int rand_size=15;
    int arr[size_arr][size_arr];
    for(int i=0;i<size_arr;i++){//init array
        for(int j=0;j<size_arr;j++)arr[i][j]=rand()%rand_size;}
    int vertical_sum[size_arr],horizont_sum[size_arr];
    for(int i=0;i<size_arr;i++)vertical_sum[i]=0,horizont_sum[i]=0;
    for(int i=0;i<size_arr;i++){//calculating
        for(int j=0;j<size_arr;j++){
            horizont_sum[i]+=arr[i][j];
            vertical_sum[j]+=arr[i][j];}}
    int sum=0;    
    for(int i=0;i<size_arr;i++)sum+=horizont_sum[i];
    for(int i=0;i<size_arr;i++){
        for(int j=0;j<size_arr;j++){
            std::cout<<arr[i][j]<<"  ";}
        std::cout<<"|"<<horizont_sum[i]<<std::endl;}
    for(int i=0;i<size_arr*size_arr+1;i++)std::cout<<"-";
    std::cout<<std::endl;
    for(int i=0;i<size_arr;i++)std::cout<<vertical_sum[i]<<" ";
    std::cout<<sum<<std::endl;  
    return 5;}

int task_6(){
    int arr_1[5][10];
    for(int i=0;i<5;i++){
        for(int j=0;j<10;j++){
            arr_1[i][j]=rand()%50;
            std::cout<<arr_1[i][j]<<" ";}
        std::cout<<std::endl;}
    std::cout<<std::endl;
    int arr_2[5][5];
    for(int i=0;i<5;i++){
        for(int j=0,k=0;k<5;j+=2,k++){
            arr_2[i][k]=arr_1[i][j]+arr_1[i][j+1];
            std::cout<<arr_2[i][k]<<" ";}
        std::cout<<std::endl;}
    return 6;}

int main(){
    for(int userInput=3;userInput!=0;userInput++){
        std::cout<<"Let's go\nenter the task number\n0-Exit"<<std::endl;
        std::cin>>userInput;
        (userInput==1)? userInput=task_1():
        (userInput==2)? userInput=task_2():
        (userInput==3)? userInput=task_3():
        (userInput==4)? userInput=task_4():
        (userInput==5)? userInput=task_5():
        (userInput==6)? userInput=task_6():userInput--;}
    return 0;}
