/*сайты для изучение
metanit.com
ravesli.com

сайты для блок схем
draw.io

типы алгоритмов
    линейные
    ветвление
    циклические

булевая алгебра
    &&-и; ||-или ; !-не

если проблема с выводом руского языка:
int main(){
    setlocale(LC_ALL,"Russian")}*/

#include <iostream>
using namespace std;

int main(){
    //cout<<"helo world"<<endl;
    /*double a;
    cin>>a;
    if (a%2==0){cout<<"Делиться\n";}
    else{ cout<<"делиться на 2\n";}
    return 0;*/

    /*switch case

    int x;
    cin>>x;

    switch{
        case 1:
            cout<<"x=1";
            break;
        case 2:
            cout<<"x=1";
            break;
    }
    преобразование типов
        раний способ
        int a;
        (double)a
        явное преобразование типов
        int a;
        static_cast<double>(a);
    */
    double a,b,c;
    cout<<"введите первое число: ";
    cin>>a;
    cout<<"введите второе число: ";
    cin>>b;
    cout<<"введите третье число: ";
    cin>>c;

    if (a>b && a>c) {cout<<"ваше наибольшее число: "<<a<<endl;}
    else if (b>a && b>c) {cout<<"ваше наибольшее число: "<<b<<endl;}
    else if (c>a && c>b) {cout<<"ваше наибольшее число: "<<c<<endl;}

    return 0;
}
