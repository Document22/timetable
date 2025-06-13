#include <bits/stdc++.h>
using namespace std;

class FileProcess {
private:
    int a=5, b;  // Fixed: separate `int` for each variable
protected:
    int c=10;
public:
    File CSV_FILE_PATH="";
    void loadData();  // Fixed: method declaration
    void convertToCSV(FILE file);
    void readData();
    void display(){
    cout << c << endl;
}    
};

void FileProcess::convertToCSV(FILE excelFile){
    //logic to convert 
}
void FileProcess::loadData() {
    cout << "Hello inside load method" << endl;
}
// READ THE CSV FILE
void FileProcess :: readData(){
    fstream fin;
    fin.open("assets/ctcs_log.csv", ios::in);
    string line, temp;
    cout <<"temp: "+temp.isEmpty() <<endl;
    while (fin.read() != '\0')
    {
        getline(fin, line);
        line.
        cout << line << endl;
    }
    fin.close();
}

int main() {
    FileProcess obj;
    obj.readData();
    return 0;
}
