class ReverseString {

    String reverse(String inputString) {
        String newString = "";
        for (int x = inputString.length() - 1; x >= 0; x--) {
            char c = inputString.charAt(x);
            newString += Character.toString(c);
        }
        return newString;
    }
  
}
