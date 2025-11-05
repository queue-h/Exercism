class SqueakyClean {
    static String clean(String identifier) {
        // replace spaces with underscores
        identifier = identifier.replace(" ", "_");

        // to camel case
        char[] identArray = identifier.toCharArray();
        for (int x = 0; x < identArray.length; x++) {
            if (identArray[x] == '-') {
                identArray[x + 1] = Character.toUpperCase(identArray[x + 1]);
            }
        }
        identifier = new String(identArray).replace("-", "");

        // leetspeak to normal text
        identifier = identifier.replace("4", "a");
        identifier = identifier.replace("3", "e");
        identifier = identifier.replace("0", "o");
        identifier = identifier.replace("1", "l");
        identifier = identifier.replace("7", "t");

        identifier = identifier.replaceAll("\\W", "");

        return identifier;
    }
}
