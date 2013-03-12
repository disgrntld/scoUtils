#ifndef SCO_WRITER_H_GUARD
#define SCO_WRITER_H_GUARD
#include "sco.h"

void write(FILE *file, size_t size, void *src);
void write_int(FILE *file, int src);
void write_char(FILE *file, char src);
void write_float(FILE *file, float src);
void write_string(FILE *file, char *src);
void write_vector(FILE *file, vector_t *src);
void write_matrix(FILE *file, matrix_t *src);
void write_sco_file(FILE *file, sco_file_t *src);

#endif

