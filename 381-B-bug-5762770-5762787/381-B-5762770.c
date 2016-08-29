#include <stdio.h>
#include <string.h>

#define MAX_NUMBER      5000

// 標準入力から空白区切りの数値を読み込む
// @return 読み込んだ数値
int get_val()
{
    int ch;
    int val = 0;

    while ((ch = fgetc(stdin)) != EOF) {
        if (isdigit(ch)) {
            val *= 10;
            val += ch - '0';
        } else break;
    }

    return val;
}

// 標準入力から数値列を読み込み、各数値の出現回数を buf に格納する
// 2回以上出現した数値は出力されないので、card_numから減算する
// @return 出現した最大の数値
int get_card_number(unsigned long *card_num, unsigned int *buf)
{
    int max_num = 0;
    unsigned long i;
    int val;
    unsigned long max_card_num = *card_num;

    for (i=0; i<max_card_num; i++) {
        val = get_val();
        *(buf + val) = *(buf + val)+1;
        if (*(buf + val) > 2) *card_num = *card_num - 1;
        if (val > max_num) max_num = val;
   }

    return max_num;
}

// 出現した数値を出力する
void print_element(unsigned long offset, unsigned long *result, unsigned int *buf)
{
    if (*buf > 0) {
        *buf = *buf - 1;
        printf("%ld", offset);
        if (*result > 1) {
            printf(" ");
            *result = *result - 1;
        } else {
            printf("\n");
        }
    }
}

// 昇順/降順で print_element() を呼び出す
void print_stairs(int max_num, unsigned long *result, unsigned int *buf)
{
    unsigned long i;

    for (i=1; i<=max_num; i++) print_element(i, result, buf+i);
    for (i=max_num; i>=1; i--) print_element(i, result, buf+i);
}

// メイン
int main(int argc, char *argv[])
{
    unsigned int nmb_cnt[(MAX_NUMBER+1)] = { 0 };
    unsigned long m, result;
    int max_num;

    // 数値の取得
    scanf("%lu\n", &m);
    result = m;
    max_num = get_card_number(&result, nmb_cnt);

    // 最大の数値は1回出現すればいいので、それ以上の場合は結果から減算
    if (nmb_cnt[max_num] > 1) result--;
    nmb_cnt[max_num] = 1;

    printf("%ld\n", result);

    // 昇順/降順で数値を出力する
    print_stairs(max_num, &result, nmb_cnt);
}
