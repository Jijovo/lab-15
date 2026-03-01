//Ezzat Mohamadein | ComSC 210 | Lab15
using namespace std;
#include <iostream>
#include <vector>
#include <iomanip>
#include <fstream>
const int w = 20;
//Define Movie class
class Movie {
    //private members
    string title;
    int year;
    string writer;

    //public members
    public:
    //getters and setters
    const string getTitle() {return title;}
    const int getYear() {return year;}
    const string getWriter() {return writer;}
    void setTitle(string t) {title = t;}
    void setYear(int y) {year = y;}
    void setWriter(string w) {writer = w;}
    //print
    void print();

};

int main() {
    ifstream fin("input.txt");
    //check if file opened successfully
    if (!fin.good()) {
        cout << "Error opening file!" << endl;
        return 1;
    }
    //define vector container
    vector<Movie> movies;
    return 0;
}

void Movie::print() {
    cout << setw(w) << title << setw(w) << year << setw(w) << writer << endl;
}