class ResistorColorDuo {
    enum colors {
        ;
        static final int BLACK = 0;
        static final int BROWN = 1;
        static final int RED = 2;
        static final int ORANGE = 3;
        static final int YELLOW = 4;
        static final int GREEN = 5;
        static final int BLUE = 6;
        static final int VIOLET = 7;
        static final int GREY = 8;
        static final int WHITE = 9;
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

    int value(String[] colors) {
        return 10 * colorCode(colors[0]) + colorCode(colors[1]);
    }
}
