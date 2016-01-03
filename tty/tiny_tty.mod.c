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
	{ 0xfe126855, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x285221a3, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x5bafdf4e, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xb9f55d49, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0x2a23846c, __VMLINUX_SYMBOL_STR(tty_unregister_device) },
	{ 0xa9b92632, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x168af6c6, __VMLINUX_SYMBOL_STR(tty_port_destroy) },
	{ 0x2363d34f, __VMLINUX_SYMBOL_STR(tty_port_register_device) },
	{ 0xd9d765bf, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0x51c3bd95, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x894794e1, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0xcbee176b, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0xc707ec79, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0xbf490a3a, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x961de7b7, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_flags) },
	{ 0x678a0582, __VMLINUX_SYMBOL_STR(tty_buffer_request_room) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8526c35a, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x4292364c, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xc9fef317, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x91f46562, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x57469af3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x357951be, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x435320be, __VMLINUX_SYMBOL_STR(tty_port_open) },
	{ 0x3e0fd3ab, __VMLINUX_SYMBOL_STR(tty_port_close) },
	{ 0x36b5659, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xe5d21047, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdad4037b, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x3bc3d3a4, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F7C291EC2DA943285B79A7F");
