#include "darts.h"
#include "math.h"
int score (coordinate_t landing_position) {
    float dist_from_center = sqrt(landing_position.x * landing_position.x + landing_position.y * landing_position.y);

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
