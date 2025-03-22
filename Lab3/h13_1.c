#include <stdio.h>

int main() {
    int daysInMonth = 31;
    int startingDay = 2;  // 2015年12月1日是星期二，用0 - 6表示星期日 - 星期六

    // 打印日历头部
    printf(" 2015年12月\n");
    printf("日 一 二 三 四 五 六\n");

    // 打印日历前面的空格
    for (int i = 0; i < startingDay; i++) {
        printf("   ");
    }

    // 打印日期
    for (int day = 1; day <= daysInMonth; day++) {
        printf("%2d ", day);
        if ((day + startingDay) % 7 == 0 || day == daysInMonth) {
            printf("\n");
        }
    }

    return 0;
}