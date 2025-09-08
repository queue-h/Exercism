#include "raindrops.h"
#include <string>

namespace raindrops {
    std::string convert(int num){
        std::string output{""};
        if(num % 3 == 0) {
            output = output + "Pling";
        }
        if(num % 5 == 0) {
            output = output + "Plang";
        }
        if(num % 7 == 0) {
            output = output + "Plong";
        }
        if(output.compare("") == 0) {
            return std::to_string(num);
        }
        return output;
    }
}  // namespace raindrops
