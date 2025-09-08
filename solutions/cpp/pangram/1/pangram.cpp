#include "pangram.h"
#include <string>
#include <boost/algorithm/string.hpp>


namespace pangram {

    bool is_pangram(std::string line) {
        boost::algorithm::to_lower(line);
        for(char x = 'a'; x < 'z'; x++) {
            if(line.find(x) != std::string::npos) {
                continue;
            } else {
                return false;
            }
        }
        return true;
    }

}  // namespace pangram
