#include <stdio.h>

// 声明枚举类型
enum Weekday{sun,mon,tue,wed,thu,fri,sat};

int main() {
    // 定义枚举变量
    enum Weekday workday, weekend;
    
    // 给枚举变量赋值（赋枚举元素）
    workday = mon;   // mon对应整数1
    weekend = sun;   // sun对应整数0
    
    // 直接输出：打印的是枚举元素对应的整数值
    printf("工作日：%d\n", workday);  // 输出1
    printf("周末：%d\n", weekend);    // 输出0
    
    return 0;
}
