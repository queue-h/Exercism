public class ExperimentalRemoteControlCar implements RemoteControlCar {
    int distanceTravelled;

    public ExperimentalRemoteControlCar() {
        this.distanceTravelled = 0;
    }

    public void drive() {
        this.distanceTravelled += 20;
    }

    public int getDistanceTravelled() {
        return this.distanceTravelled;
    }
}
