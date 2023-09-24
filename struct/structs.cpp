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
        std::cout << "Некоректнi значення. Введiть додатнi числа." << std::endl;
    }
}

void Read(Product& product) {
    setlocale(LC_ALL, "rus");
    int calories;
    double weight;
    std::cout << "Введiть калорiйнiсть на 100 г продукту: ";
    std::cin >> calories;
    std::cout << "Введiть масу продукту в кiлограмах: ";
    std::cin >> weight;
    Init(product, calories, weight);
}

void Display(const Product& product) {

    std::cout << "Калорiйнiсть на 100 г продукту: " << product.first << " калорiй" << std::endl;
    std::cout << "Маса продукту в кiлограмах: " << std::fixed << std::setprecision(2) << product.second << " кг" << std::endl;
    double totalCalories = product.first * product.second * 100.0;
    std::cout << "Загальна калорiйнicть продукту: " << totalCalories << " калорiй" << std::endl;
}
