#define WASM_EXPORT __attribute__((visibility("default")))

extern int swd_init();
extern int swd_read_idcode(unsigned int *idcode);
extern void ui_set_info_hex(const char *title, unsigned int content);

WASM_EXPORT
int main() {
    unsigned int idcode = 0;

    swd_init();
    swd_read_idcode(&idcode);

    ui_set_info_hex("IDCODE\nRead from WebAssembly", idcode);

    return 0;
}
