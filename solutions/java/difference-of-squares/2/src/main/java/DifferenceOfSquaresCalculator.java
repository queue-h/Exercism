import java.lang.Math;

class DifferenceOfSquaresCalculator {

    // algorithm found here: https://iq.opengenus.org/difference-between-square-of-sum-and-sum-of-squares/

    int computeSquareOfSumTo(int input) {
        return (int) Math.pow(input * (input + 1) / 2, 2);
    }

    int computeSumOfSquaresTo(int input) {
        return input * (input + 1) * (2 * input + 1) / 6;
    }

    int computeDifferenceOfSquares(int input) {
        return computeSquareOfSumTo(input) - computeSumOfSquaresTo(input);
    }
}
