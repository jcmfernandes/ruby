#ifndef PACK_BASE64_H
#define PACK_BASE64_H

#include <stddef.h>

/* Flags for SIMD-accelerated codec */
#define PACK_BASE64_URL_SAFE  (1 << 0)  /* use URL-safe alphabet (RFC 4648 §5) */
#define PACK_BASE64_LOOSE     (1 << 1)  /* accept both padded and unpadded input */

/* SIMD-accelerated streaming codec (m0, m0>) */
void pack_base64_init(void);
size_t pack_base64_encode(const char *src, size_t srclen, char *out, int flags);
int pack_base64_decode(const char *src, size_t srclen, char *out, size_t *outlen, int flags);

/* RFC 2045 scalar codec (m with line wrapping, lenient decode) */
size_t pack_base64_encode_rfc2045(const char *src, size_t srclen, char *out, int bytes_per_line);
size_t pack_base64_decode_rfc2045(const char *src, size_t srclen, char *out);

#endif /* PACK_BASE64_H */
