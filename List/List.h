/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   List.h
 * Author: tiara
 *
 * Created on May 26, 2019, 4:49 PM
 */

//header file List.h
typedef int ElementType;
const int MAX = 100;

class List {
public:
    List(); //create an empty list
    bool Empty(); //return true if the list is empty, otherwise return false
    void InsertAtEnd(ElementType x); //insert a value x on the end of the list
    void Delete(ElementType x); //if value x is in the list, remove x
    void Display(); //display the data values in the list in the order inserted
    int Sum(); //compute and return the sum of the values in the list
    int Average();

private:
    int N; //number of values in list
    ElementType listArray[MAX]; //the array to hold the list values

};
