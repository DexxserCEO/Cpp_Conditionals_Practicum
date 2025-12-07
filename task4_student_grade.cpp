#include <iostream>
#include <string>
using namespace std;

int main() {
    int score;
    cout << "Введіть кількість балів (0-100): ";
    cin >> score;

    string grade;

    if (score >= 90 && score <= 100) {
        grade = "Відмінно";
    }
    else if (score >= 75) { // Автоматично score < 90
        grade = "Добре";
    }
    else if (score >= 60) { // Автоматично score < 75
        grade = "Задовільно";
    }
    else if (score >= 0) { // Автоматично score < 60
        grade = "Незадовільно";
    }
    else {
        grade = "Помилка: Некоректні бали";
    }

    cout << "Оцінка: " << grade << endl;

    return 0;
}