public class JedliksToyCar {
    private int distance;
    private int battery;

    public JedliksToyCar() {
        this.distance = 0;
        this.battery = 100;
    }

    public static JedliksToyCar buy() {
        return new JedliksToyCar();
    }

    public String distanceDisplay() {
        return String.format("Driven %d meters", this.distance);
    }

    public String batteryDisplay() {
        if (this.battery <= 0) {
            return "Battery empty";
        }
        return String.format("Battery at %s", this.battery + "%");
    }

    public void drive() {
        if (this.battery > 0) {
            this.distance += 20;
            this.battery -= 1;
        }
    }
}
