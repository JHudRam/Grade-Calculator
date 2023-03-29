/*
 PIC 10A Homework 2, Grade.cpp
 Author: Jacob Ramos
 Date: 2-6-23
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    //Declare strings and doubles to be used
    string Exam_format;
    double Homework_Grade, Midterm_Grade, Final_Grade, Ovr_Grade1, Ovr_Grade2;
    //Prompt user to input homework, midterm and final grade
    cout << "Please enter your homework grade (0-100): ";
    cin >> Homework_Grade;
    cout << "please enter your midterm grade (0-100): ";
    
    cin >> Midterm_Grade;
    cout << "Please enter your final grade (0-100): ";
    
    cin >> Final_Grade;
    cout << "please enter exam format, online or inperson? ";
    
    cin >> Exam_format;
    
    //If user enters a number < 0 or > 100, input is out of range
    if (Homework_Grade < 0 || Homework_Grade > 100
        || Midterm_Grade < 0 || Midterm_Grade > 100
        || Final_Grade < 0 || Final_Grade > 100
        || (Exam_format != "online" && Exam_format != "inperson")) {
        
        cout << "Wrong input for grades or format!" << endl;
        return 0;
    }
    
    else {
        
        //Grade calculation based on wheather class was inperson or online
        if (Exam_format == "online")
        { Ovr_Grade1 = Homework_Grade * 0.70 + Midterm_Grade * 0.10 +
            Final_Grade * 0.20;
            Ovr_Grade2 = Homework_Grade * 0.70 + Midterm_Grade * 0.00 +
            Final_Grade * 0.30; }
        
        else
        { Ovr_Grade1 = Homework_Grade * 0.40 + Midterm_Grade * 0.20 +
            Final_Grade * 0.40;
            Ovr_Grade2 = Homework_Grade * 0.40 + Midterm_Grade * 0.00 +
            Final_Grade * 0.60; }
        
    
    //Overall grade with higher value
    if (Ovr_Grade1 > Ovr_Grade2)
    {  cout << "Overall grade is " << Ovr_Grade1 << endl; }
    else
    { cout << "Overall grade is " << Ovr_Grade2 << endl; }
}
    return 0;
}

