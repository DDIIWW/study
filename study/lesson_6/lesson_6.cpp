#include<iostream>

int str(std::string str){return str.length();}

int factorial(int f){
    if(f==0||f==1)return 1;
    return f*(factorial(f-1));}

bool prostoe_chislo(int a){
    if(a<=1)return false;
    for(int i=2;i*i<=a;i++){
        if(a%i==0)return false;}
    return true;} 

double find_average(int arr[]){
    double sum=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        sum+=arr[i];}
    return sum/size;}  

void min_max(int arr[]){
    int size=sizeof(arr)/sizeof(arr[0]);
    int min =arr[0],max =arr[0],minnum=0,maxnum=0;
    for(int i=4;i>=0;i--){
        if(min>arr[i]) {
            min=arr[i];
            minnum=i;}
        if(max<arr[i]){
            max=arr[i];
            maxnum=i;}}
    std::cout<<"min= "<<min<<"\nminindex= "<<minnum<<"\nmax= "<<max<<"\nmaxindex= "<<maxnum<<std::endl;}

void reverseArray(int arr[]){
    int size=(sizeof(arr)/sizeof(arr[0]))+1;
    int per_arr[size];
    for(int i=0,j=size-1;i<size;i++,j--){
        per_arr[i]=arr[j];
        std::cout<<per_arr[i]<<" ";}
    for(int i=0;i<size;i++)arr[i]=per_arr[i];
    std::cout<<std::endl;}

            
int main(){
    int arr[3];
    for(int i=0;i<3;i++){
        arr[i]=rand()%10;
        std::cout<<arr[i]<<" ";}
    std::cout<<std::endl;
    reverseArray(arr);
    return 0;}
