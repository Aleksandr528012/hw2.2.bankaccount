#include <iostream>
#include <Windows.h>

struct bankaccount {
    std::string name;
    int accountnum;
    double balanc;
};

void change_balanc(bankaccount& p) {
    p.balanc = p.balanc;
}

int main(int argc, char** atgv) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string b; int c; double d; double e;

    std::cout << "������� ����� �����: ";
    std::cin >> c;
    std::cout << "������� ��� ���������: ";
    std::cin >> b;
    std::cout << "������� ������: ";
    std::cin >> d;

    bankaccount pers = { b,c,d };
    
    change_balanc(pers);
    std::cout << "������� ����� ������: ";
    std::cin >> e;
    pers.balanc = e;

    std::cout << "��� ����: " << pers.name << ", " << pers.accountnum << ", " << pers.balanc << std::endl;

}