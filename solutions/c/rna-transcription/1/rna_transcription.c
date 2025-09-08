#include "rna_transcription.h"
#include "rna_transcription.h"
#include "stdlib.h"
#include "string.h"


char *to_rna(const char *dna) {

    char *rna = (char *) malloc(strlen(dna) * sizeof(char));
    for (size_t x = 0; x < strlen(dna); x++) {
        switch (dna[x]) {
            case 'G':
                rna[x] = 'C';
                break;
            case 'C':
                rna[x] = 'G';
                break;
            case 'T':
                rna[x] = 'A';
                break;
            case 'A':
                rna[x] = 'U';
                break;
            default:
                rna[x] = dna[x];
                break;
        }
    }
    return rna;
}
