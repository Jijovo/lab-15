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
    const int size = 6;
    //read data from file and store in vector
    string title;
    int year;
    string writer;
    for (int i = 0; i < size; i++) { //videogame reference, not a movie reference, but iykyk
        getline(fin, title);
        fin >> year;
        fin.ignore();
        getline(fin, writer);
        Movie m;
        m.setTitle(title);
        m.setYear(year);
        m.setWriter(writer);
        movies.push_back(m);
    }
    fin.close();
    //test getters
    for (int i = 0; i < size; i++) {
        cout << movies[i].getTitle() << " " << movies[i].getYear() << " " << movies[i].getWriter() << endl;
    }
    //test print function
    cout << setw(w) << "Title" << setw(w) << "Year" << setw(w) << "Writer" << endl;
    for (int i = 0; i < size; i++) {
        movies[i].print();
    }
    return 0;
}
//define print function
void Movie::print() {
    cout << setw(w) << title << setw(w) << year << setw(w) << writer << endl;
}