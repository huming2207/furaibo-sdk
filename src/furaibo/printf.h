#pragma once

#include <common.h>

#ifdef __cplusplus
extern "C" {
#endif

WASM_IMPORT("env","printf") int printf(const char* fmt, ...);
WASM_IMPORT("env", "snprintf") int snprintf(char* out_buf, int buf_len, const char *fmt, ...);

#ifdef __cplusplus
}
#endif