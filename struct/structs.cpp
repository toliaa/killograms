#include "structs.h"
#include <iostream>
#include <iomanip>
//Attention: indicate kilograms not with a dot, but with a comma
void Init(Product& product, int calories, double weight) {
    if (calories >= 0 && weight >= 0.0) {
        product.first = calories;
        product.second = weight;
    }
    else {
        std::cout << "���������i ��������. ����i�� ������i �����." << std::endl;
    }
}

void Read(Product& product) {
    setlocale(LC_ALL, "rus");
    int calories;
    double weight;
    std::cout << "����i�� �����i��i��� �� 100 � ��������: ";
    std::cin >> calories;
    std::cout << "����i�� ���� �������� � �i��������: ";
    std::cin >> weight;
    Init(product, calories, weight);
}

void Display(const Product& product) {

    std::cout << "�����i��i��� �� 100 � ��������: " << product.first << " �����i�" << std::endl;
    std::cout << "���� �������� � �i��������: " << std::fixed << std::setprecision(2) << product.second << " ��" << std::endl;
    double totalCalories = product.first * product.second * 100.0;
    std::cout << "�������� �����i��ic�� ��������: " << totalCalories << " �����i�" << std::endl;
}
