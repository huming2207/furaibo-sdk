#pragma once

#include <common.h>

#ifdef __cplusplus
extern "C" {
#endif

WASM_IMPORT("ui", "set_info") void ui_set_info(const char *title, const char *content);
WASM_IMPORT("ui", "set_info_hex") void ui_set_info_hex(const char *title, uint32_t hex);
WASM_IMPORT("ui", "set_bg_color") void ui_set_bg_color(uint32_t hex);

#ifdef __cplusplus
}
#endif