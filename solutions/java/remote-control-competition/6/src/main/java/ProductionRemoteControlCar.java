import java.util.Comparator;

class ProductionRemoteControlCar implements RemoteControlCar, Comparable<ProductionRemoteControlCar> {
    int distanceTravelled;
    int numberOfVictories;

    public ProductionRemoteControlCar() {
        this.distanceTravelled = 0;
        this.numberOfVictories = 0;
    }

    public void drive() {
        this.distanceTravelled += 10;
    }

    public int getDistanceTravelled() {
        return this.distanceTravelled;
    }

    public int getNumberOfVictories() {
        return this.numberOfVictories;
    }

    public void setNumberOfVictories(int numberOfVictories) {
        this.numberOfVictories = numberOfVictories;
    }

    @Override
    public int compareTo(ProductionRemoteControlCar o) {
        return o.numberOfVictories - this.numberOfVictories;
    }
}
