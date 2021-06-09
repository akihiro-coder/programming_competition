#include<stdio.h>


int main()
{
    int num, i, exist_odd = 0;
    int count = 0;

    printf("個数:");
    scanf("%d", &num);
    int s[num];
    for(i = 0; i < num; i++){
        printf("%d個目の数字:", i+1);
        scanf("%d", &s[i]);
    }


    /* 
        ３つの数字があるとする
        ３つの数字が全て偶数ならばカウントして値を更新する
        カウント＆値の更新　→　次のループに遷移する方法を模索していた
        無限ループという方法を使っていいものなのかが迷っていた
        でもbreakで抜ければいいだけのこと
        for文を使うし、全て偶数ならば次のループに遷移しないといけないなど混乱していた
     */

    // for(i = 0; i < num; i++){
    //     if(s[i] % 2 == 0){
    //         count++;
    //     }
    // }
    // for(i = 0; i < num; i++){
    //     if(count == num - 1){
    //         s[i] = s[i] / 2;
    //     }
    //     count = 0;
    // }
  

    // for(i = 0; i < num; i++){
    //     if(s[i] % 2 == 0){
    //         count++;
    //     }
    // }






    /* 
        回答例：
        ３つの数字があるとすると、
        ３つが奇数であるか確認
        奇数ならば奇数フラグを立て、ループを回避
        偶数であるならばフラグは立てず、値を更新してから次のループに遷移（ループ内にとどまる）

     */


    while(1){
        for(i = 0; i < num; i++){
            if(s[i] % 2 != 0){
                exist_odd = 1;
            }
        }
        if(exist_odd){
            break;
        }

        for(i = 0; i < num; i++){
           s[i] /= 2;
        }
        count++;
    }

    printf("回数: %d", count);
    return 0;
}

