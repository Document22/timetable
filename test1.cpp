#include <xlnt/xlnt.hpp>
#include <iostream>

int main() {
    xlnt::workbook wb;

    try {
        wb.load("example.xlsx");  // Load the Excel file
        xlnt::worksheet ws = wb.active_sheet();  // Access the active worksheet

        for (auto row : ws.rows()) {
            for (auto cell : row) {
                std::cout << cell.to_string() << "\t";
            }
            std::cout << std::endl;
        }
    } catch (const std::exception &e) {
        std::cerr << "Error reading Excel file: " << e.what() << std::endl;
    }

    return 0;
}
