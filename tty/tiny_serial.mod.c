#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xfe6a7c89, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x4507414e, __VMLINUX_SYMBOL_STR(uart_unregister_driver) },
	{ 0xb6394c00, __VMLINUX_SYMBOL_STR(uart_add_one_port) },
	{ 0xc353831f, __VMLINUX_SYMBOL_STR(uart_register_driver) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf9ecc60f, __VMLINUX_SYMBOL_STR(uart_write_wakeup) },
	{ 0xbf490a3a, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x961de7b7, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_flags) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x57469af3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x357951be, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xaf5fe112, __VMLINUX_SYMBOL_STR(uart_get_divisor) },
	{ 0x58b82b5b, __VMLINUX_SYMBOL_STR(uart_get_baud_rate) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E2EDCE5C7C7FD19DB8BEA8C");
