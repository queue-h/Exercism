#include "darts.h"
#include <cmath>

namespace darts {
    int score (double x, double y) {
        double dist_from_center{sqrt(x*x + y*y)};

        if(dist_from_center <= 1) {
            return 10;
        }
        if(dist_from_center <= 5) {
            return 5;
        }
        if(dist_from_center <= 10) {
            return 1;
        }
        return 0;
    }

} // namespace darts