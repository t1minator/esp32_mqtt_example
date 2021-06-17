#include "test.h"
#include "esp_system.h"

#if ESP_IDF_VERSION_MAJOR >= 4
#include <esp32/aes.h>
#else
#include <hwcrypto/aes.h>
#endif

int test(){

	return 1;
}
