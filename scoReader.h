#ifndef SCO_READER_H_GUARD
#define SCO_READER_H_GUARD
#include "sco.h"

void read(FILE *file, size_t size, void *dest);
void read_int(FILE *file, int *dest);
void read_char(FILE *file, char *dest);
void read_float(FILE *file, float *dest);
void read_string(FILE *file, char **dest);
void read_vector(FILE *file, vector_t *dest);
void read_matrix(FILE *file, matrix_t *dest);
void read_sco_file(FILE *file, sco_file_t *dest);

#endif

