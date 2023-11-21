#include <stdio.h>

int main(void){
    // printf("Hello World.\n");
    // printf("こんにちは。私の名前は%sです。\n年齢は%d歳です。\n", "山田太郎", 20);
    // printf("%d + %d = %d\n", 5, 2, 5 + 2);
    // printf("%d - %d = %d\n", 5, 2, 5 - 2);
    // printf("%d * %d = %d\n", 5, 2, 5 * 2);
    // printf("%d / %d = %d 余り %d\n", 5, 2, 5 / 2, 5 % 2);

    /* 使用する変数の定義 */
    // int a;
    // int b = 3; //初期化と代入を同時
    // int add, sub; //複数の変数を同時宣言
    // double avg; //int以外の変数を宣言
    // a = 10; //代入
    // add = a + b;
    // sub = a - b;
    // avg = (a + b) / 2.0;
    // printf("%d + %d = %D\n", a ,b, add);
    // printf("%d - %d = %d\n", a, b, sub);
    // printf("%dと%dの平均値:%f\n", a, b, avg);

    // int a1 = 2, b1 = 2, c1 = 2, d1 = 2;
    // a1 = a1 + 1;
    // printf("a1は%d\n", a1);

    // printf("%d * %d + %d = %d\n", 2, 3, 1, 2 * 3 + 1);
    // printf("%d * (%d + %d) = %d\n", 2, 3, 1, 2 * (3 + 1));

    // ※変数は必ず初期化して使う

    // if文

    // int a;
    // printf("数値を入力:");
    // scanf("%d", &a);

    // if (a > 0) {
    //     printf("入力した値は、正の数です。\n");
    // } else {
    //     printf("入力した値は、正の数ではございません。\n");
    // }

    // int num;
    // printf("1~3の値を入力してください：");
    // scanf("%d", &num);

    // if (num == 1) {
    //     printf("one\n");
    // } else if (num == 2) {
    //     printf("two\n");
    // } else if (num == 3) {
    //     printf("three\n");
    // } else {
    //     printf("不適切な値です。\n");
    // }

    // int dice;
    // printf("1-6の数を入力してください：");
    // scanf("%d",&dice);

    // if (1 <= dice && dice <= 6){
    //     if(dice == 2 || dice == 4 || dice == 6) {
    //         printf("丁です\n");
    //     } else {
    //         printf("半です\n");
    //     }
    // } else {
    //     printf("範囲外の数値です。\n");
    // } 

    // int num2;
    // printf("1-3の値を入力してください：");
    // scanf("%d", &num2);

    // switch(num2) {
    //     case 1:
    //         printf("one\n");
    //         break;
    //     case 2:
    //         printf("two\n");
    //         break;
    //     case 3:
    //         printf("three\n");
    //         break;
    //     default:
    //         printf("不適切な値です\n");
    //         break;
    // }

    // for文

    // int i, j;
    // for (i = 1; i <= 2; i++) {
    //     for (j = 1; j <= 3; j++ ){
    //         printf("%d+%d=%d ", i, j, i + j);
    //     }
    //     printf("\n");
    // }

    // while文

    // int i = 0;
    // while (i <= 5) {
    //     printf("%d ", i);
    //     i++;
    // }
    // printf("\n");

    // do while
    // int i = 10;
    // do {
    //     printf("%d ", i);
    //     i++;
    // } while (i <= 5);
    // printf("\n");

    // int i, num;
    // printf("回数を入力： ");
    // scanf("%d", &num);
    // //whileループで実行
    // printf("whileで実行");
    // i = 1;
    // while (i <= num){
    //     printf("*");
    //     i++;
    // }
    // printf("\n");

    // printf("do whileループで実行");
    // i = 1;
    // do {
    //     printf("*");
    //     i++;
    // } while (i <= num);
    // printf("\n");

    // 無限ループ
    // int num;
    // printf("負の値で、ループから抜けます。\n");
    // while (1) {
    //     printf("数値を入力");
    //     scanf("%d", &num);
    //     if (num < 0){
    //         break;
    //     }
    // }
    // printf("終了\n");
}

/*
書式指定
%d 整数値を10進数
%f 実数値を10進数
%ls 実数値を10真数で表示する (&fより長い桁が表示可能)
%c 文字。ASCIIコードで表示された文字列が表示される。 
%s 文字列。文字列をそのまま表示できる。
*/