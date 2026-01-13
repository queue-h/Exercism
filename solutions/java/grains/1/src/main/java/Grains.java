import java.math.BigInteger;

class Grains {

    BigInteger grainsOnSquare(final int square) {
        if (square < 1 || square > 64) {
            throw new IllegalArgumentException("square must be between 1 and 64");
        }
        return BigInteger.TWO.pow(square - 1);
    }

    BigInteger grainsOnBoard() {
        BigInteger sum = BigInteger.ZERO;
        for (int x = 1; x <= 64; x++) {
            sum = sum.add(grainsOnSquare(x));
        }
        return sum;
    }

}
