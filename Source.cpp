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

    std::cout << "������� ����� �����: ";
    std::cin >> c;
    std::cout << "������� ��� ���������: ";
    std::cin >> b;
    std::cout << "������� ������: ";
    std::cin >> d;
    std::cout << "������� ����� ������: ";
    std::cin >> e;

    bankaccount a = {b,c,d};
    a.name = b;
    a.accountnum = c;
    a.balanc = d;

    if (e != d) a.balanc = e;
   
    std::cout << "��� ����: " << (a.name) << ", " << a.accountnum << ", " << a.balanc << std::endl;

}