class Fighter {

    boolean isVulnerable() {
        return true;
    }

    int getDamagePoints(Fighter fighter) {
        return 1;
    }
}


class Warrior extends Fighter {

    boolean isVulnerable() {
        return false;
    }

    int getDamagePoints(Fighter fighter) {
        if (fighter.isVulnerable()) {
            return 10;
        }
        return 6;
    }

    public String toString() {
        return "Fighter is a Warrior";
    }
}

class Wizard extends Fighter {
    boolean preparedInAdvance = false;

    int getDamagePoints(Fighter fighter) {
        if (preparedInAdvance) {
            return 12;
        }
        return 3;
    }

    void prepareSpell() {
        preparedInAdvance = true;
    }

    boolean isVulnerable() {
        return !preparedInAdvance;
    }

    public String toString() {
        return "Fighter is a Wizard";
    }
}
