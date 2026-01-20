class NaturalNumber {
    int factorSum;
    Classification type;
    int number;
    NaturalNumber(int number) {
        if (number < 1) {
            throw new IllegalArgumentException("You must supply a natural number (positive integer)");
        }
        this.number = number;

        int sum = 0;
        int numberCopy = number;
        for (int x = 1; x < numberCopy; x++) {
            if (numberCopy % x == 0) {
                sum += x;
            }
        }
        this.factorSum = sum;

        if (this.factorSum > this.number) {
            this.type = Classification.ABUNDANT;
        }
        if (this.factorSum < this.number) {
            this.type = Classification.DEFICIENT;
        }
        if (this.factorSum == this.number) {
            this.type = Classification.PERFECT;
        }
    }

    Classification getClassification() {
        return this.type;
    }
}
