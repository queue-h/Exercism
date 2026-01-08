import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Random;

class DnDCharacter {

    int strength = ability(rollDice());
    int wisdom = ability(rollDice());
    int intelligence = ability(rollDice());
    int charisma = ability(rollDice());
    int dexterity = ability(rollDice());
    int constitution = ability(rollDice());

    int ability(List<Integer> scores) {

        // find min
        int min = Integer.MAX_VALUE;
        for (int i = 0; i < scores.size(); i++) {
            if (scores.get(i) < min) {
                min = scores.get(i);
            }
        }
        return scores.get(0) + scores.get(1) + scores.get(2) + scores.get(3) - min;
    }

    List<Integer> rollDice() {
        List<Integer> scores = new ArrayList<>();
        Random rand = new Random();
        for (int i = 0; i < 4; i++) {
            int score = rand.nextInt(6) + 1;
            scores.add(score);
        }
        return scores;
    }

    int modifier(int input) {
        return (int) Math.floor((input - 10) / 2.0);
    }

    int getStrength() {
        return strength;
    }

    int getDexterity() {
        return dexterity;
    }

    int getConstitution() {
        return constitution;
    }

    int getIntelligence() {
        return intelligence;
    }

    int getWisdom() {
        return wisdom;
    }

    int getCharisma() {
        return charisma;
    }

    int getHitpoints() {
        return 10 + modifier(getConstitution());
    }
}
