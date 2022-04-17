#include <iostream>

using namespace std;

int days (int a, int b){
    return a-b;
}
int months (int a, int b){
    return a-b;
}
int years (int a, int b){
    return a-b;
}

int main()
{

    int current_date , current_month , current_year;
    int dob, dob_month, dob_year;
    int date, month, year;

    cout<<"\t \t AGE CALCULATOR \t \t"<<endl<<endl;

    cout<<"Enter Current Date : ";
    cin>>current_date;
    cout<<endl;

    cout<<"   Enter Current Month : ";
    cin>>current_month;
    cout<<endl;

    cout<<"      Enter Current Year : ";
    cin>>current_year;
    cout<<endl;

    cout<<"   Enter Your Date of Birth - Day : ";
    cin>>dob;
    cout<<endl;

    cout<<"      Enter Your Date of Birth - Month : ";
    cin>>dob_month;
    cout<<endl;

    cout<<"         Enter Your Date of Birth - Year : ";
    cin>>dob_year;
    cout<<endl;

    date = days(current_date, dob);
    month = months(current_month, dob_month);
    year = years(current_year, dob_year);

    cout<<endl<<endl;

    cout<<"\t \t Your Age Is : "<<year<<" Years "<<month<<" Months And "<<date<<" Days"<<endl<<endl;

}
