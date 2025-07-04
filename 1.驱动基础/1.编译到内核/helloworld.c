#include <linux/module.h>
#include <linux/init.h>

// 模块初始化函数
static int helloworld_init(void)
{
    printk("helloworld\n");
    return 0;
}

// 模块退出函数
static void helloworld_exit(void)
{
    printk("helloworld bye\n");
}

module_init(helloworld_init); // 指定初始化函数
module_exit(helloworld_exit); // 指定退出函数

MODULE_LICENSE("GPL");  // 声明模块采用GPL许可证（避免内核污染警告）
MODULE_AUTHOR("xbj");   // 声明模块作者
MODULE_VERSION("V1.0"); // 声明模块版本