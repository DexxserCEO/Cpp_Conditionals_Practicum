#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double purchase_amount;
    double discount_percent;

    cout << "Введіть суму покупки (грн): ";
    cin >> purchase_amount;

    if (purchase_amount < 100.0) {
        discount_percent = 0.0;
    }
    else if (purchase_amount < 500.0) { // [100.0, 499.99]
        discount_percent = 5.0;
    }
    else if (purchase_amount < 1000.0) { // [500.0, 999.99]
        discount_percent = 10.0;
    }
    else { // purchase_amount >= 1000.0
        discount_percent = 15.0;
    }

    double discount_factor = discount_percent / 100.0;
    double final_amount = purchase_amount * (1.0 - discount_factor);

    cout << fixed << setprecision(2);
    cout << "Сума покупки: " << purchase_amount << " грн" << endl;
    cout << "Застосована знижка: " << discount_percent << "%" << endl;
    cout << "Кінцева сума до оплати: " << final_amount << " грн" << endl;

    return 0;
}