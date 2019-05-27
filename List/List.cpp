/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   List.cpp
 * Author: tiara
 * 
 * Created on May 26, 2019, 4:49 PM
 */


//implementation file List.cpp
#include "List.h"
#include <iostream>
using namespace std;

List::List() {
    N = 0;
    listArray[MAX];
}

bool List::Empty() {
    if (N = 0) {
        return true;
    }
    return false;
}

void List::InsertAtEnd(ElementType x) {
    cin >> x;
    cout << x << endl;
    N++;
    listArray[N - 1] = x;
    cout << "Value added";
}

void List::Delete(ElementType x) {
    for (int i = 0; i < N; i++) {
        if (listArray[i] == x) {
            for (int j = i; j < N - 1; j++) {
                listArray[j] = listArray[j + 1];
            }
            N--;
        }
    }
}

void List::Display() {
    for (int i = 0; i < N; i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << listArray[i];
    }
}

int List::Sum() {
    int sum = 0;
    for (int i = 0; i < N; i++)
        sum += listArray[i];
    return sum;
}

int List::Average() {
    return (Sum() / N);
}



