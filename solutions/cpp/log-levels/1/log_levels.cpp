#include <string>

namespace log_line {
    std::string message(std::string line) {
        // return the message
        long unsigned int start{line.find(" ") + 1};
        return line.substr(start);
    }

    std::string log_level(std::string line) {
        // return the log level
        long unsigned int start{line.find("[") + 1};
        long unsigned int stop{line.find("]") - 1};
        return line.substr(start, stop);
    }

    std::string reformat(std::string line) {
        // return the reformatted message
        return message(line) + " (" + log_level(line) + ")";
    }
}
