// Important Links
// https://www.cdc.gov/brfss/annual_data/2020/llcp_varlayout_20_onecolumn.html
// https://www.cdc.gov/brfss/annual_data/2020/pdf/codebook20_llcp-v2-508.pdf

#include <iostream>
#include <fstream>
#include <string>

#include "brfss_reader.hpp"

// Run the code from its root folder, exe file found in /build
int main()
{
    std::ifstream t;
    t.open("data/LLCP2020.ASC");

    std::string line;
    //while (true) {
        std::getline(t, line);
        data_point test{line};
        std::cout << enum_to_string(test.state) << "\n";
    //}

    t.close();
}