#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>

// Convert string to lowercase for case-insensitive matching
std::string toLower(const std::string& str) {
    std::string result = str;
    std::transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}

// Display timetable rows that contain the sub-batch
void displayTimetable(const std::string& filename, const std::string& subBatch) {
    std::ifstream file(filename);

    if (!file.is_open()) {
        std::cerr << " Error: Cannot open file " << filename << "\n";
        return;
    }

    std::string line;
    bool headerPrinted = false;
    bool matchFound = false;

    while (getline(file, line)) {
        std::string lowerLine = toLower(line);

        // Print the header line once
        if (!headerPrinted) {
            std::stringstream ss(line);
            std::string cell;
            while (getline(ss, cell, ',')) {
                std::cout << cell << "\t";
            }
            std::cout << "\n";
            headerPrinted = true;
            continue;
        }

        // Print lines that contain the sub-batch
        if (lowerLine.find(toLower(subBatch)) != std::string::npos) {
            std::stringstream ss(line);
            std::string cell;
            while (getline(ss, cell, ',')) {
                std::cout << cell << "\t";
            }
            std::cout << "\n";
            matchFound = true;
        }
    }

    if (!matchFound) {
        std::cout << "\n No timetable entries found for sub-batch: " << subBatch << "\n";
    }

    file.close();
}

int main() {
    std::string year, section, subBatch;

    std::cout << "Timetable Finder \n\n";
    std::cout << "Enter your year (e.g., 1ST, 2ND, 3RD, 4TH): ";
    std::cin >> year;

    std::cout << "Enter your section (A or B): ";
    std::cin >> section;

    std::cout << "Enter your sub-batch ID (e.g., 1B61): ";
    std::cin >> subBatch;

    // Construct path to the corresponding CSV file
    std::string filename = "TIMETABLEJULY-TODEC24" + toLower(year) + "_year_" + toLower(section) + ".csv";

    std::cout << "\n Timetable for Sub-Batch " << subBatch << ":\n\n";
    displayTimetable(filename, subBatch);
    return 0;
}
