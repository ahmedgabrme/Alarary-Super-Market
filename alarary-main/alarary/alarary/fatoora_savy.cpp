#include "fatoora_savy.h"
#include <fstream>
#include <iostream>
#include <ctime>
using namespace std;

string getCurrentDate() {
    time_t now = time(0);
    tm ltm;
    localtime_s(&ltm, &now);
    const string months[] = { "January","February","March","April","May","June",
                               "July","August","September","October","November","December" };
    return to_string(ltm.tm_mday) + " " + months[ltm.tm_mon] + " " + to_string(1900 + ltm.tm_year);
}

void createBillFile(const string& fileContent) {
    string current_date = getCurrentDate();
    string filename = current_date + " Bills.txt";
    ofstream outputFile(filename, ios::app);
    if (outputFile.is_open()) {
        outputFile << "\n";
        outputFile << fileContent;
        outputFile.close();
        cout << "Success: '" << filename << "' has been created." << endl;
    }
    else {
        cerr << "Error: Could not create file." << endl;
    }
}

void createBillFileRef(const double& total) {
    string current_date = getCurrentDate();
    string filename_ref = current_date + " Bills Reference.txt";
    ofstream outputFile_ref(filename_ref, ios::app);
    if (outputFile_ref.is_open()) {
        outputFile_ref << total << "\n";
        outputFile_ref.close();
        cout << "Success: '" << filename_ref << "' has been created." << endl;
    }
    else {
        cerr << "Error: Could not create file." << endl;
    }
}
void createBillFileRef(const string& name) {
    string current_date = getCurrentDate();
    string filename_ref = current_date + " Bills Reference.txt";
    ofstream outputFile_ref(filename_ref, ios::app);
    if (outputFile_ref.is_open()) {
        outputFile_ref << name << "\n";
        outputFile_ref.close();
        cout << "Success: '" << filename_ref << "' has been created." << endl;
    }
    else {
        cerr << "Error: Could not create file." << endl;
    }
}

//vector < pair<double, std::string >> getCartTotals() {
//    string current_date = getCurrentDate();
//    string filename_ref = current_date + " Bills Reference.txt";
//
//    vector<pair<double, string>> total_with_names;
//    
//    ifstream file(filename_ref);
//
//    if (!file.is_open()) {
//        cerr << "Could not open file.\n";
//        total_with_names.push_back({0, ""});
//        return total_with_names;
//    }
//    double value; 
//    std::string name;
//    while (file >> value) {
//        if (value != 0)
//        {
//            file >> name;
//            total_with_names.push_back({ value, name });
//        }
//    }
//    file.close();
//    return total_with_names;
//}

vector<pair<double, string>> getCartTotals() {
    string current_date = getCurrentDate();
    string filename_ref = current_date + " Bills Reference.txt";
    vector<pair<double, string>> total_with_names;

    ifstream file(filename_ref);
    if (!file.is_open()) {
        cerr << "Could not open file.\n";
        return total_with_names;
    }

    string totalLine, nameLine;
    while (getline(file, totalLine)) {
        if (totalLine.empty()) continue;
        if (!getline(file, nameLine)) break;

        double value = stod(totalLine);
        if (value != 0)
            total_with_names.push_back({ value, nameLine });
    }

    file.close();
    return total_with_names;
}