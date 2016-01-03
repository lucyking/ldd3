#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xfe6a7c89, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x28a1fdf2, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0xf19371ba, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0xd0d8621b, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x1ce5b6e4, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x21c19996, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
	{ 0x6c2e3320, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xff39848e, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0xace95489, __VMLINUX_SYMBOL_STR(driver_create_file) },
	{ 0xdd1645cc, __VMLINUX_SYMBOL_STR(bus_create_file) },
	{ 0x508bc9fa, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xa4a3e3ec, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x6c07d933, __VMLINUX_SYMBOL_STR(add_uevent_var) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3D41EDD3CDFADE5F67B2B90");
