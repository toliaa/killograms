#pragma once
#include<iostream>
using namespace std;
struct Product {
    int first;    // ���������� �� 100 � ��������
    double second; // ���� �������� � ���������
//Attention: indicate kilograms not with a dot, but with a comma
};
    void Init(Product& product, int calories, double weight);
    void Read(Product& product);
    void Display(const Product& product);


