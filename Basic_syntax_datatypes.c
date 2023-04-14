#include <stdio.h>
#include <stdbool.h>

int main() {
    int favNum;
    printf("Enter your fav number : ");
    scanf("%d", &favNum);
    printf("your entry is %d\n", favNum);
    printf("%d is my fav number too..!!\n\n", favNum);
    printf("%ld\n%ld\n%ld\n%ld\n%ld\n%d\n", sizeof(int), sizeof(char), sizeof(long), sizeof(short), sizeof(long long), sizeof(bool));
    return 0;
}
