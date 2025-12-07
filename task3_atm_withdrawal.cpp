#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double BALANCE = 5000.0; // Початковий баланс рахунку
    double amount;

    cout << fixed << setprecision(2);
    cout << "Поточний баланс: " << BALANCE << " грн" << endl;
    cout << "Введіть суму для зняття: ";
    cin >> amount;

    if (amount <= 0.0) {
        // Перша умова: не можна знімати нуль або від'ємну суму
        cout << "Помилка: Сума має бути більшою за нуль." << endl;
    }
    else if (amount > BALANCE) {
        // Друга умова: перевірка, чи сума перевищує баланс
        cout << "Недостатньо коштів на рахунку." << endl;
    }
    else {
        // Блок else: якщо жодна з попередніх умов не спрацювала, 
        // то amount > 0 І amount <= BALANCE
        double new_balance = BALANCE - amount;
        cout << "Операція успішна. Знято: " << amount << " грн" << endl;
        cout << "Залишок на рахунку: " << new_balance << " грн" << endl;
    }

    return 0;
}