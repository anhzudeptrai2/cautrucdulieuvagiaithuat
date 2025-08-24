/* Yêu cầu đầu vào (Input Specification):
• Dòng đầu tiên sẽ chứa một số nguyên N(1≤N≤100000), là số lượng bài toán cộng mà Tudor cần giải.
• N dòng tiếp theo, mỗi dòng sẽ chứa hai số nguyên được viết cách nhau bởi một dấu cách, có giá trị tuyệt đối nhỏ hơn 1000000000. Đây là hai số nguyên mà Tudor cần cộng lại.Yêu cầu đầu ra(Output Specification) :
• In ra N dòng, mỗi dòng chứa một số nguyên là kết quả của các bài toán cộng theo đúng thứ tự.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}