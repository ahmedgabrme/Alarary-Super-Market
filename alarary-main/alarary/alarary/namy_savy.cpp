#include "namy_savy.h"
#include <fstream>
#include <ctime>
#include <iostream>
using namespace std;

string getTodayDate() {
    time_t now = time(0);
    tm ltm;
    localtime_s(&ltm, &now);
    const string months[] = { "January","February","March","April","May","June",
                               "July","August","September","October","November","December" };
    return to_string(ltm.tm_mday) + " " + months[ltm.tm_mon] + " " + to_string(1900 + ltm.tm_year);
}

void addCustomerName(const string& name) {
    string today_date = getTodayDate();
    string filename_ref = today_date + " Bills Reference.txt";
    ofstream outputFile_ref(filename_ref, ios::app);
    if (outputFile_ref.is_open()) {
        outputFile_ref << name << "\n";
        outputFile_ref.close();
    }
}

void addCustomerEmail(const string& email) {
    ofstream emails_file("emails.txt", ios::app);
    if (emails_file.is_open()) {
        emails_file << email << "\n";
        emails_file.close();
    }
}