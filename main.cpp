#include <cmath>
#include <matplot/matplot.h>
#include <iostream>


using namespace matplot; using namespace std;

int main() {

    std::vector<double> x = linspace(0, 2 * pi);
    std::vector<double> y = transform(x, [](auto x) { return sin(x); });


    cout << "about to plot" << endl;
    plot(x, y);
    cout << "plot called" << endl;

    show();
    return 0;
}

#include <iostream>
#include <fstream>
#include <commata/parse_csv.hpp>
#include <commata/stored_table.hpp>

//using commata::make_stored_table_builder;
//using commata::parse_csv;
//using commata::stored_table;
//using namespace std;
//
//int main() {
//
//    stored_table colorTable;
//
//    parse_csv(ifstream("../color_srgb.csv"), make_stored_table_builder(colorTable));
//
//    cout << colorTable.size()-1 << " colors loaded" << endl;
//
//
//
//    return 0;
//}