import java.lang.Math;

class ArmstrongNumbers {

    boolean isArmstrongNumber(int numberToCheck) {
        int[] digits = IntToArray(numberToCheck);

        int digitSum = 0;
        int exp = digits.length;

        for (int x = 0; x < digits.length; x++) {
            digitSum += (int) Math.pow(digits[x], exp);
        }

        return digitSum == numberToCheck;
    }

    static int[] IntToArray(int n) {
        int index = 0;
        int len = Integer.toString(n).length();
        int[] arr = new int[len];

        while(n != 0) {
            arr[len - index - 1] = n % 10;
            n = n / 10;
            index++;
        }
        return arr;
    }
}
