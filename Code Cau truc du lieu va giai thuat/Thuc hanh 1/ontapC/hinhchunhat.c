/*Cho hai số nguyên dương
    và
        .Tính diện tích,
    chu vi của hình chữ nhật có độ dài các cạnh lần lượt là
        và
            .

    Dữ liệu vào : Một dòng duy nhất chứa hai số nguyên dương
                      được ghi cách nhau bới một khoảng trắng.Dữ liệu ra : Ghi ra trên một dòng hai số nguyên là chu vi và diện tích của hình chữ nhật tương ứng,
    hai số được ghi cách nhau bởi một khoảng trắng.*/
#include <stdio.h>

int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld %lld", 2 * (a + b), a * b);
    return 0;
}
