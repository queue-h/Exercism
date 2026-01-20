import java.lang.Math;

class ResistorColorTrio {

    enum colors {
        ;
        public static final int BLACK = 0;
        public static final int BROWN = 1;
        public static final int RED = 2;
        public static final int ORANGE = 3;
        public static final int YELLOW = 4;
        public static final int GREEN = 5;
        public static final int BLUE = 6;
        public static final int VIOLET = 7;
        public static final int GREY = 8;
        public static final int WHITE = 9;
    }

    int colorCode(String color) {
        return switch (color) {
            case "black" -> colors.BLACK;
            case "brown" -> colors.BROWN;
            case "red" -> colors.RED;
            case "orange" -> colors.ORANGE;
            case "yellow" -> colors.YELLOW;
            case "green" -> colors.GREEN;
            case "violet" -> colors.VIOLET;
            case "white" -> colors.WHITE;
            case "blue" -> colors.BLUE;
            case "grey" -> colors.GREY;
            default -> -1;
        };
    }


    String label(String[] colors) {
        long value = (10 * colorCode(colors[0]) + colorCode(colors[1])) * (long) Math.pow(10, colorCode(colors[2]));
        String prefix = "";

        if (value >= Math.pow(10, 9)) {
            prefix = "giga";
            value /= (long) Math.pow(10, 9);
        } else if (value >= Math.pow(10, 6)) {
            prefix = "mega";
            value /= (long) Math.pow(10, 6);
        } else if(value >= Math.pow(10, 3)) {
            prefix = "kilo";
            value /= (long) Math.pow(10, 3);
        }

        return value + " " + prefix + "ohms";
    }
}
