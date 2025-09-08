#include "space_age.h"

#include "space_age.h"

static const float EARTH_YEAR = 31557600.0;
static const float MERCURY_YEAR = EARTH_YEAR * 0.2408467;
static const float VENUS_YEAR = EARTH_YEAR * 0.61519726;
static const float MARS_YEAR = EARTH_YEAR * 1.8808158;
static const float JUPITER_YEAR = EARTH_YEAR * 11.862615;
static const float SATURN_YEAR = EARTH_YEAR * 29.447498;
static const float URANUS_YEAR = EARTH_YEAR * 84.016846;
static const float NEPTUNE_YEAR = EARTH_YEAR * 164.79132;

float age(planet_t planet, int64_t seconds) {
    switch (planet) {
        case MERCURY:
            return seconds / MERCURY_YEAR;
            break;
        case VENUS:
            return seconds / VENUS_YEAR;
            break;
        case EARTH:
            return seconds / EARTH_YEAR;
            break;
        case MARS:
            return seconds / MARS_YEAR;
            break;
        case JUPITER:
            return seconds / JUPITER_YEAR;
            break;
        case SATURN:
            return seconds / SATURN_YEAR;
            break;
        case URANUS:
            return seconds / URANUS_YEAR;
            break;
        case NEPTUNE:
            return seconds / NEPTUNE_YEAR;
            break;
        default:
            return -1;
            break;
    }

}
