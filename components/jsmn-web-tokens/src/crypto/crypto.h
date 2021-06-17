#ifndef CRYPTO_H
#define CRYPTO_H
#define WITH_MBEDTLS 1

// clang-format off
#if defined(WITH_OPENSSL)
#  include "crypto_openssl.h"
#elif defined(WITH_GNUTLS)
#  error "WITH_GNUTLS not supported!"
#elif defined(WITH_MBEDTLS)
#  include "crypto_mbedtls.h"
#elif defined(WITH_WOLFSSL)
#endif
// clang-format on

#include "crypto_base64uri.h"

#ifdef __cplusplus
extern "C"
{
#endif

#ifdef __cplusplus
}
#endif
#endif
