idf_component_register(SRCS "src/crypto/crypto_base64" "src/crypto/crypto_mbedtls.c"  "src/jsmn_tokens" 
                       INCLUDE_DIRS "include" "src" "src/crypto"
                       REQUIRES mbedtls )