#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    float P, R;
    int T;
    cout<<"Podaj P:";
    cin>>P ;
    cout<<"Podaj R:";
    cin>> R;
    cout<<"Podaj T:";
    cin>> T;
    cout<<"P = "<<P<<endl;
    cout<<"R = "<<R<<endl; 
    cout<<"T = "<<T<<endl;

    float  I = (P * T * R )/100;
    cout<< fixed <<setprecision(2);
    
    cout<<"Wynik całkowity: "<<static_cast<int>(I)<< endl;
    cout<<"Wynik rzeczywisty: "<<I;
    



    return 0;
}