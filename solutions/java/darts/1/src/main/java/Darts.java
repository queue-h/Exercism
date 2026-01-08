import java.lang.Math;

class Darts {
    // (x)² + (y)² < radius²

    int score(double xOfDart, double yOfDart) {
        // inner circle
        if (Math.pow(xOfDart, 2) + Math.pow(yOfDart, 2) < Math.pow(1, 2)) {
            return 10;
        }
        if (Math.pow(xOfDart, 2) + Math.pow(yOfDart, 2) < Math.pow(5, 2)) {
            return 5;
        }
        if (Math.pow(xOfDart, 2) + Math.pow(yOfDart, 2) < Math.pow(10, 2)) {
            return 1;
        }
        return 0;
    }


}
