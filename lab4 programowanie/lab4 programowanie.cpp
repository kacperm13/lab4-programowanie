#include <iostream>
using namespace std;
/*													//zad1
void porownanie(int a, int b);
int wyswietlanie(int a, int b);
int main()
{
	int a;
	int b;
	cout << "Podaj dwie liczby: ";
	cin >> a >> b;
	porownanie(a, b);
	int wieksza = wyswietlanie(a, b);
	cout << "Wieksza jest liczba " << wieksza << " .\n";

}
void porownanie(int a, int b) {
	if (a > b){
		cout << "Pierwsza liczba jest wieksza.\n";
		}
	else if (b > a){
		cout << "Druga liczba jest wieksza.\n";
	}
	else {
		cout << "Liczby sa rowne.\n";
	}
}
int wyswietlanie(int a, int b) {
	int wynik;
	if (a > b) {
		wynik = a;
	}
	else if (b > a) {
		wynik = b;
	}
	else {
		cout <<"Liczby sa rowne.";
	}
	return wynik;
}
*/

/*
void dzielenie(int n);									//zad2
int main(){
	int n;
	cout << "Podaj liczbe calkowita dodatnia:";
	cin >> n;
	if (n < 0) {
		cout << "Liczba jest mniejsza niz 0. Podaj liczbe ponownie.";
		cin >> n;	
	}
	dzielenie(n);

}
void dzielenie(int n) {
	for (int i=1; i <= n; i++) {
		if (n % i == 0) {
			cout << "Liczba jest podzielna przez: " << i << ".\n";
		}
	}
}
*/
void dodawanie(float a, float b);
void odejmowanie(float a, float b);
void mnozenie(float a, float b);
void dzielenie(float a, float b);

int main() {                              //zad 3
    float a;                    
    float b;
    int c = 1;
    char opcja;
    while (c == 1) {
        cout << "Podaj dwie liczby:\n";
        cin >> a;
        cin >> b;
        cout << "Podaj symbol dzialania, ktore bedzie wykonywane:\n+ - DODAWANIE\n- - ODEJMOWANIE\n* - MNOZENIE\n/ - DZIELENIE\n";
        cin >> opcja;

        if (c == 0) {
            return 0;
        }
        else {
            switch (opcja) {
            case '+':
                dodawanie(a, b);
                cout << "Czy zakonczyc dzialanie kalkulatora?\n0 - TAK\n1 - NIE\n";
                cin >> c;
                break;
            case '-':
                odejmowanie(a, b);
                cout << "Czy zakonczyc dzialanie kalkulatora?\n0 - TAK\n1 - NIE\n";
                cin >> c;
                break;
            case '*':
                mnozenie(a, b);
                cout << "Czy zakonczyc dzialanie kalkulatora?\n0 - TAK\n1 - NIE\n";
                cin >> c;
                break;
            case '/':
                if (b == 0) {
                    cout << "Nie mozna dzielic przez 0.\n";
                }
                else {
                    dzielenie(a,b);
                }
                cout << "Czy zakonczyc dzialanie kalkulatora?\n0 - TAK\n1 - NIE\n";
                cin >> c;
                break;
            default:
                cout << "Niepoprawny znak.\n";
                cout << "Czy zakonczyc dzialanie kalkulatora?\n0 - TAK\n1 - NIE\n";
                cin >> c;
            }
        }

    }
}
void dodawanie(float a, float b) {
    cout << a + b << "\n";
}
void odejmowanie(float a, float b) {
    cout << a - b << "\n";
}
void mnozenie(float a, float b) {
    cout << a * b << "\n";
}
void dzielenie(float a, float b) {
    if (b == 0) {
        cout << "Nie mozna dzielic przez 0.";
    }
    cout << a / b << "\n";
}
