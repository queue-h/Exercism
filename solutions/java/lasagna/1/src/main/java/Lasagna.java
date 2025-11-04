public class Lasagna {

    public int expectedMinutesInOven() {
        return 40;
    }

    public int remainingMinutesInOven(int currentTime) {
        return expectedMinutesInOven() - currentTime;
    }

    public int preparationTimeInMinutes(int numLayers) {
        return numLayers * 2;
    }

    public int totalTimeInMinutes(int layers, int cookingTime) {
        return preparationTimeInMinutes(layers) + cookingTime;
    }
}
