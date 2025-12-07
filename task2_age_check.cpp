#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Введіть ваш вік: ";
    cin >> age;

    if (age < 0) { // Додаткова перевірка на коректність введеного віку
        cout << "Помилка: Вік не може бути від'ємним." << endl;
    }
    else if (age < 13) {
        cout << "Доступ заборонено (Вік менше 13)" << endl;
    }
    else if (age <= 17) { // Вік від 13 до 17 включно
        cout << "Доступ з батьківським контролем" << endl;
    }
    else { // Вік 18 і більше (>= 18)
        cout << "Повний доступ" << endl;
    }

    return 0;
}