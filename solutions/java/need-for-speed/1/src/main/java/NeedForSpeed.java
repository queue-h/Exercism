class NeedForSpeed {
    int speed;
    int batteryDrain;
    int distance;
    int battery;

    NeedForSpeed(int speed, int batteryDrain) {
        this.speed = speed;
        this.batteryDrain = batteryDrain;
        this.distance = 0;
        this.battery = 100;
    }

    public boolean batteryDrained() {
        return battery < batteryDrain;
    }

    public int distanceDriven() {
        return this.distance;
    }

    public void drive() {
        if (this.battery > 0) {
            this.distance += speed;
            this.battery -= batteryDrain;
        }
    }

    public static NeedForSpeed nitro() {
        return new NeedForSpeed(50, 4);
    }
}

class RaceTrack {
    private int distance;

    RaceTrack(int distance) {
        this.distance = distance;
    }

    public boolean canFinishRace(NeedForSpeed car) {
        int numDrives = (int) Math.ceil((double) this.distance / car.speed);
        int batteryAfterNumDrives = car.battery - (numDrives * car.batteryDrain);
        return batteryAfterNumDrives >= 0;
    }
}
