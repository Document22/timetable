#include <bits/stdc++.h>
using namespace std;

class FileProcess {
private:
    int a=5, b;  // Fixed: separate `int` for each variable
protected:
    int c=10;
public:
    void loadData();  // Fixed: method declaration
    void readData();
    void display(){
    cout << c << endl;
}    
};
void FileProcess::loadData() {
    cout << "Hello inside load method" << endl;
}
// READ THE CSV FILE
void FileProcess :: readData(){
    fstream fin;
    fin.open("assets/TIMETABLEJULY-TODEC24.csv", ios::in);
    string line, temp;
    vector <string> data;
    while (!fin.eof()){
        getline(fin, line);
        cout<< line <<endl;
        data.push_back(line);
    }
    fin.close();
}

// DISPLAY A SELECTED PART 
void FileProcess :: display(){
    for(int i = 0; i<14 ; i++){
        for(int j)
    }
}

int main() {
    FileProcess obj;
    obj.readData();
    return 0;
}
