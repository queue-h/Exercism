class Acronym {
    String acronym;

    Acronym(String phrase) {
        String acronym = "";
        char[] phraseArr = phrase.toCharArray();

        acronym += phraseArr[0];
        for (int x = 0; x < phraseArr.length; x++) {
            if (Character.isWhitespace(phraseArr[x]) || phraseArr[x] == '-' || phraseArr[x] == '_') {
                if (Character.isAlphabetic(phraseArr[x + 1])) {
                    acronym += phraseArr[x + 1];
                }
            }
        }
        this.acronym = acronym.toUpperCase();
    }

    String get() {
        return this.acronym;
    }

}
