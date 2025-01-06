#include <iostream>
#include <Windows.h>

struct bankaccount {
    std::string name;
    int accountnum;
    double balanc;
}; 

int main(int argc, char** atgv) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string b; int c; double d; double e;

    std::cout << "¬ведите номер счета: ";
    std::cin >> c;
    std::cout << "¬ведите им€ владельца: ";
    std::cin >> b;
    std::cout << "¬ведите баланс: ";
    std::cin >> d;
    std::cout << "¬ведите новый баланс: ";
    std::cin >> e;

    bankaccount a = {b,c,d};
    a.name = b;
    a.accountnum = c;
    a.balanc = d;

    if (e != d) a.balanc = e;
   
    std::cout << "¬аш счет: " << (a.name) << ", " << a.accountnum << ", " << a.balanc << std::endl;

}