import java.lang.Math;

class DifferenceOfSquaresCalculator {

    int computeSquareOfSumTo(int input) {
        int sum = 0;

        for (int x = 1; x <= input; x++) {
            sum += x;
        }

        return (int) Math.pow(sum, 2);
    }

    int computeSumOfSquaresTo(int input) {
        int sum = 0;

        for (int x = 1; x <= input; x++) {
            sum += (int) Math.pow(x, 2);
        }

        return sum;
    }

    int computeDifferenceOfSquares(int input) {
        return computeSquareOfSumTo(input) - computeSumOfSquaresTo(input);
    }
}
