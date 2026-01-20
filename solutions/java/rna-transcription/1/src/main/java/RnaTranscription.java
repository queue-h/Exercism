class RnaTranscription {

    String transcribe(String dnaStrand) {
        String transcripted = "";
        char[] dna = dnaStrand.toCharArray();

        for (int x = 0; x < dna.length; x++) {
            if (dna[x] == 'G') {
                transcripted += 'C';
            }
            if (dna[x] == 'C') {
                transcripted += 'G';
            }
            if (dna[x] == 'T') {
                transcripted += 'A';
            }
            if (dna[x] == 'A') {
                transcripted += 'U';
            }
        }

        return transcripted;
    }

}
