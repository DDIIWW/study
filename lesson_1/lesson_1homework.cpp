#include <iostream>
//#include <string>
using namespace std;

int main(){
    char userOut;
    cout<<"здесь должно быть условие, но оно не было придумано, так что придется тебе придумать его самому. ты готов? y/n"<<endl;
    cin>>userOut;
    if (userOut=='y'){cout<<"очень рад что ты готов но уже все придумано за тебя.\n пока"<<endl;}
    else if (userOut=='n'){
        cout<<"очень плохо что ты готов придется вместе придумавать. \n тебе осталось только ввести да - y или нет - n"<<endl;
        cin>>userOut;
        if (userOut=='n'){cout<<"плохо что нет, тогда пока "<<endl;}
        else if (userOut=='y') {cout<<"будет про рыцаря? y/n"<<endl;
            cin>>userOut;
            if (userOut=='n'){cout<<"не ожидал отрицательного ответа, тогда пока "<<endl;}
            else if (userOut=='y') {cout<<"будет про дракона? y/n"<<endl;
                cin>>userOut;
                if (userOut=='n'){cout<<"ну ок, тогда пока "<<endl;}
                else if (userOut=='y') {cout<<"мы все придумали "<<endl;
                    cout<<"ты очутился в замке с рыцарем и драконом но т.к. ты не из этой вселенной тебя спалил дракон, и рыцарь развеял твой прах";
                }
            }
        }
    }
     return 0;
    }
