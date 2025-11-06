public class CarsAssemble {

    public double productionRatePerHour(int speed) {
        int rate = speed * 221;
        if (1 <= speed && speed <= 4) {
            return rate;
        }
        if (5 <= speed && speed <= 8) {
            return rate * 0.9;
        }
        if (speed == 9) {
            return rate * 0.8;
        }
        if (speed == 10) {
            return rate * 0.77;
        }
         return 0;
    }

    public int workingItemsPerMinute(int speed) {
        return (int) productionRatePerHour(speed) / 60;
    }
}
