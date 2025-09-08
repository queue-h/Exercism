#include "difference_of_squares.h"

namespace difference_of_squares {
    double square_of_sum(int n) {
        int sum = 0;
        for(int x = 1; x <= n; x++) {
            sum += x;
        }
        return sum * sum;
    }
    double sum_of_squares(int n) {
        int sum = 0;
        for(int x = 1; x <= n; x++) {
            int square = x * x;
            sum += square;
        }
        return sum;
    }

    double difference(int n) {
        return square_of_sum(n) - sum_of_squares(n);
    }
}  // namespace difference_of_squares
