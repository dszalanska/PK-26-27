#include <iostream>
<<<<<<< HEAD
#include <iomanip>
=======

>>>>>>> 4e42700cff7bd6a650c80dcace81adcc3108add2
using namespace std;

int main() {

<<<<<<< HEAD
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
    



=======
    /*
    cout służy do wyświetlania danych na standardowym wyjściu,
    czyli w naszym przypadku w terminalu.

    Tekst umieszczamy w cudzysłowie.

    endl kończy bieżącą linię i przechodzi do następnej.
    */
    cout << "Hello world!" << endl;

    /*
    return 0 oznacza poprawne zakończenie programu.

    Wykonywanie programu rozpoczyna się od funkcji main()
    i kończy po wykonaniu jej instrukcji.
    */
>>>>>>> 4e42700cff7bd6a650c80dcace81adcc3108add2
    return 0;
}