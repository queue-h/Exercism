
class BirdWatcher {
    private final int[] birdsPerDay;

    public BirdWatcher(int[] birdsPerDay) {
        this.birdsPerDay = birdsPerDay.clone();
    }

    public int[] getLastWeek() {
        return new int[] {0, 2, 5, 3, 7, 8, 4};
    }

    public int getToday() {
        return birdsPerDay[birdsPerDay.length - 1];
    }

    public void incrementTodaysCount() {
        birdsPerDay[birdsPerDay.length - 1]++;
    }

    public boolean hasDayWithoutBirds() {
        for (int birdNum : birdsPerDay) {
            if (birdNum == 0) {
                return true;
            }
        }
        return false;
    }

    public int getCountForFirstDays(int numberOfDays) {
        if (numberOfDays > birdsPerDay.length) {
            numberOfDays = birdsPerDay.length;
        }
        int numBirds = 0;
        for (int x = 0; x < numberOfDays; x++) {
            numBirds += birdsPerDay[x];
        }
        return numBirds;
    }

    public int getBusyDays() {
        int numBusyDays = 0;
        for (int birdNum : birdsPerDay) {
            if (birdNum >= 5) {
                numBusyDays += 1;
            }
        }
        return numBusyDays;
    }
}
