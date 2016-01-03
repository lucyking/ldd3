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
	{ 0xd468961, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x722d8b91, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x357951be, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x58ac4fbe, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x139b504, __VMLINUX_SYMBOL_STR(cpu_current_top_of_stack) },
	{ 0x6bf1c17f, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0xbf5f72a2, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x26b3c701, __VMLINUX_SYMBOL_STR(__wake_up_sync) },
	{ 0x10679f4a, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x38a3dd2d, __VMLINUX_SYMBOL_STR(kobject_set_name) },
	{ 0x36b5659, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x6243fb5c, __VMLINUX_SYMBOL_STR(tty_devnum) },
	{ 0x8581960c, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x8329e6f0, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x91f46562, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x28836eb0, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x51c3bd95, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xf58d0d9c, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
	{ 0xe5d21047, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xea4404fa, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4292364c, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x57469af3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3bb5114a, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x72c30f06, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E7C3100AE70C8FEEA0EA80B");
