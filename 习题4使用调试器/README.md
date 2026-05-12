# 习题4使用调试器  

---

1. `gdb --args` 这个`--args`参数会将后面的参数传入到被调试的执行程序中
2. `thread apply all bt`:这个参数会将所有的线程转储回溯信息
3. `gdb --batch --ex r --ex bt --ex q --args`:运行程序,如果程序崩溃,输出所有回溯跟踪信息
4. `run [args]`:与上面的`gdb --args`参数作用一样,将传入的参数作为被调试应用的参数出入.
5. `break [file:]function:为这个源文件的指定函数设置断点,或者可以使用一个字母`b`来进行断点.
6. `backtrace`:转出当前调用栈的回溯信息,或者直接使用简写`bt`
7. `print expt`:打印变量expt的值,或者是直接使用`p`字母
8. `continue`:继续运行程序,或者使用字母`c`,就是跳过这个断点的意思
9. `next`:下一行,遇到函数调用时单步跳过,或者使用字母`n`
10. `step`:遇上函数调用时单步进入,或者使用字母`s`
11. `quit`:退出GDB
12. `help`:获取命令的帮助信息
13. `cd pwd make`:可以在gdb的调试器环境中直接使用shell命令
14. `shell`:直接启动shell,使我们可以使用shell
15. `clear`:清理一个断点
16. `info break/info watch`:显示断点和监视点的信息
17. `attach pid`:将gdb附加到进程上
18. `detach`:将gdb与进程解绑
19. `list`:列出10行源代码,当然能列出的前提是得编译时加上-g选项,`list -`列出前10行源代码

