#ifndef __BRFSS_READER_HPP__
#define __BRFSS_READER_HPP__

#include <cstdint>
#include <string>

// Enum for the individual states
enum e_state : uint8_t {
    STATE_ALABAMA = 1,
    STATE_ALASKA = 2,
    STATE_ARIZONA = 3,
    STATE_ARKANSAS = 4,
    STATE_CALIFORNIA = 5,
    STATE_TODO = 6,
};

inline std::string enum_to_string(e_state state) {
    switch(state) {
        case STATE_ALABAMA: return "Alabama";
        case STATE_ALASKA: return "Alaska";
        case STATE_ARIZONA: return "Arizona";
        case STATE_CALIFORNIA: return "California";
    }
    return "Todo";
}

struct data_point {
    e_state state;

    inline data_point(std::string line) {
        this->state = static_cast<e_state>(atoi(line.substr(0,2).c_str()));
    }
};


#endif /* __BRFSS_READER_HPP__ */