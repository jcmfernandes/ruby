#ifndef PACK_UUENCODE_H
#define PACK_UUENCODE_H

#include <stddef.h>

size_t pack_uu_encode_line(const char *src, size_t srclen, char *out);
size_t pack_uu_decode_raw(const char *src, size_t srclen, char *out);

#endif /* PACK_UUENCODE_H */
