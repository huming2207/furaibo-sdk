#pragma once

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

#define MODULE_NAME "swd"

WASM_IMPORT(MODULE_NAME, "init") int swd_init();
WASM_IMPORT(MODULE_NAME, "read_idcode") int swd_read_idcode(uint32_t *idcode);
WASM_IMPORT(MODULE_NAME, "read_multi_32") int swd_read_multi_32(uint32_t addr, uint32_t *out, size_t len);
WASM_IMPORT(MODULE_NAME, "read_one_32") int swd_read_one_32(uint32_t addr, uint32_t *out);
WASM_IMPORT(MODULE_NAME, "read_multi_8") int swd_read_multi_8(uint32_t addr, uint8_t *out, size_t len);
WASM_IMPORT(MODULE_NAME, "read_one_8") int swd_read_one_8(uint32_t addr, uint8_t *out);
WASM_IMPORT(MODULE_NAME, "write_multi_32") int swd_write_multi_32(uint32_t addr, uint8_t *value, size_t len);
WASM_IMPORT(MODULE_NAME, "write_one_32") int swd_write_one_32(uint32_t addr, uint32_t value);
WASM_IMPORT(MODULE_NAME, "write_multi_8") int swd_write_multi_8(uint32_t addr, uint8_t *value, size_t len);
WASM_IMPORT(MODULE_NAME, "write_one_8") int swd_write_one_8(uint32_t addr, uint8_t value);
WASM_IMPORT(MODULE_NAME, "force_reset_session") int swd_force_reset_session();
WASM_IMPORT(MODULE_NAME, "reset") int swd_reset();
WASM_IMPORT(MODULE_NAME, "halt") int swd_halt();
WASM_IMPORT(MODULE_NAME, "reset_halt") int swd_reset_halt();
WASM_IMPORT(MODULE_NAME, "is_halted") bool swd_is_halted();

#ifdef __cplusplus
}
#endif