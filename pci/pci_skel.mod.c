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
	{ 0x497b1c74, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x998b1d4c, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf1690b2d, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xae02ccae, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d00002413sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CAC3D9B11F72FCED5E41787");
