import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;

class HighScores {
    List<Integer> highScores;

    public HighScores(List<Integer> highScores) {
        this.highScores = highScores;
    }

    List<Integer> scores() {
        return highScores;
    }

    Integer latest() {
        return highScores.getLast();
    }

    Integer personalBest() {
        if (highScores.size() == 1) {
            return highScores.getFirst();
        }

        List<Integer> sortedScores = highScores.stream().sorted(Comparator.comparing(Integer::intValue)).toList().reversed();
        return sortedScores.getFirst();
    }

    List<Integer> personalTopThree() {
        List<Integer> topThreeScores = new ArrayList<>();
        List<Integer> sortedScores = highScores.stream().sorted(Comparator.comparing(Integer::intValue)).toList().reversed();


        if (sortedScores.size() >= 3) {
            topThreeScores.add(sortedScores.get(0));
            topThreeScores.add(sortedScores.get(1));
            topThreeScores.add(sortedScores.get(2));
        } else {
            for (Integer highScore : sortedScores) {
                topThreeScores.add(highScore);
            }
        }

        return topThreeScores;

    }

}
