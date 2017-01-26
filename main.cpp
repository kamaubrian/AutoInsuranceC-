#include <iostream>
#include <cstring>
#include <fstream>


const float THIRDPARTYRATE=0.11;
const float COMPREHENSIVERATE=0.22;

using namespace std;

void askCredentials();
void getComprehensiveInsurance();
void getThirdPartyInsurance();
void displayLogo();
void showMenu();
void giveChoice();
void giveOptions();



class people{
public:

    char firstname[14];
    char secondname[14];
    int id_number;

private:

    char user[14];
    char pass[15];
    char username[14]="kamaubrian";
    char password[14]="easy254";

    friend void askCredentials();

};
class vehicle{

public:
    int car_value,duration;
    int insurance_premium;

    void getComprehensiveInsurance(){

        cout<<"Enter the Current Value of Vehicle(In Kenya Shilings):\t"<<endl;
        cin>>car_value;
        cout<<"Enter Time Period(In Months):\t"<<endl;
        cin>>duration;
        insurance_premium=(car_value*duration*COMPREHENSIVERATE);

        cout<<"Please Pay:\t"<<insurance_premium<<endl<<"Thank You For Insuring with us"<<endl;
    }

    void getThirdPartyInsurance(){
        cout<<"Enter the Current Value of Vehicle(In Kenya Shilings):\t"<<endl;
        cin>>car_value;
        cout<<"Enter Time Period(In Months):\t"<<endl;
        cin>>duration;
        insurance_premium=(car_value*duration*COMPREHENSIVERATE);

        cout<<"Please Pay:\t"<<insurance_premium<<endl<<"Thank You For Insuring with us"<<endl;

    }
};

int main()
{
    displayLogo();
    askCredentials();

}
void displayLogo(){

    cout<<"\t\t************************"<<endl;
    cout<<"\t\tWelcome To AutoInsurance"<<endl;
    cout<<"\t\t************************"<<endl;
}
void askCredentials(){

    people customer;
    cout<<"Enter UserName:\t"<<endl;
    cin>>customer.user;
    cout<<"Enter Password:\t"<<endl;
    cin>>customer.pass;
    if(strcmp(customer.user,customer.username)==0 && strcmp(customer.pass,customer.password)==0){

        cout<<"Successful Login"<<endl<<endl;
        cout<<"Showing Available Insurance Companies."<<endl;
        cout<<"--------------------------------------"<<endl;
        showMenu();
        giveChoice();
    }else{
        cout<<"Invalid Credentials"<<endl;
        return askCredentials();
    }

}
void showMenu(){
    ifstream menu_file;
    menu_file.open("Menu.txt");
    string menu;
    if(menu_file.fail()){

        cout<<"Failed To Open File"<<endl;

    }else{
        while(menu_file>>menu){

            cout<<menu<<endl<<endl;
        }

        }
    }
void giveChoice(){
    cout<<"Selection: ";
    int selection;
    cin>>selection;

    switch(selection){
    case 1:
        cout<<"Welcome"<<endl;
        giveOptions();
        break;

    case 2:
        cout<<"Welcome"<<endl;
        giveOptions();
        break;

    case 3:
        cout<<"Welcome"<<endl;
        giveOptions();
        break;

    case 4:
        cout<<"Welcome"<<endl;
        giveOptions();
        break;

    case 5:
        cout<<"Welcome"<<endl;
        giveOptions();
        break;

    case 6:
        cout<<"Welcome"<<endl;
        giveOptions();
        break;


    case 7:
        cout<<"Welcome"<<endl;
        giveOptions();
        break;

    case 8:
        cout<<"Welcome"<<endl;
        giveOptions();
        break;

    case 9:
        cout<<"Welcome"<<endl;
        giveOptions();
        break;

    case 10:
        cout<<"Welcome"<<endl;
        giveOptions();
        break;

    case 11:
        cout<<"Welcome"<<endl;
        giveOptions();
        break;


    default:
        cout<<"Invalid Option"<<endl;
        break;
    }

}
void giveOptions(){

    cout<<"1. Comprehensive Insurance"<<endl;
    cout<<"2. Third-Party Insurance"<<endl;
    cout<<"Please Select From Either of the Two Available Options"<<endl<<endl;
    vehicle car1;
    int choice;
    cin>>choice;

    if(choice==1){
        car1.getComprehensiveInsurance();
    }else if(choice==2){
        car1.getThirdPartyInsurance();
    }else{
        cout<<"Invalid Option. Try Again"<<endl;
    }
}























