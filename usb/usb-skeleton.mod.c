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
	{ 0x4d1d48da, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x20ecbe57, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xa0931e44, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xb85163da, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x56a29773, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xd9b427cf, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x156a8a59, __VMLINUX_SYMBOL_STR(down_trylock) },
	{ 0x6dc0c9dc, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x4292364c, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x28836eb0, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x49868d2a, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x8ff4079b, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x51d6cc1a, __VMLINUX_SYMBOL_STR(usb_deregister_dev) },
	{ 0x2410c8ed, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x11ea1286, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x6b10105b, __VMLINUX_SYMBOL_STR(usb_register_dev) },
	{ 0xf005ca85, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb39fe35a, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x51c3bd95, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x57469af3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x357951be, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x78e739aa, __VMLINUX_SYMBOL_STR(up) },
	{ 0x89803a3a, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x6bf1c17f, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xfd83e9e3, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xd83d75f, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x69499eae, __VMLINUX_SYMBOL_STR(usb_find_interface) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9e03a482, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x5814c0c6, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xe5d21047, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6f699588, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x4395953e, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0x24f45195, __VMLINUX_SYMBOL_STR(usb_wait_anchor_empty_timeout) },
	{ 0x36b5659, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:vFFF0pFFF0d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9E76848E2E0A7414A8072F2");
