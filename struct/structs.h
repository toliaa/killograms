#pragma once
#include<iostream>
using namespace std;
struct Product {
    int first;    // Калорійність на 100 г продукту
    double second; // Маса продукту в кілограмах
//Attention: indicate kilograms not with a dot, but with a comma
};
    void Init(Product& product, int calories, double weight);
    void Read(Product& product);
    void Display(const Product& product);


