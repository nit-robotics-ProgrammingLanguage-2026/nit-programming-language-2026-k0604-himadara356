#include <stdio.h>

int main(void)
{
    long num,goukei;
    long loop;
    goukei = 0;
    scanf("%ld", &num);
if  (num>=0)
    {
    for (loop=1;loop<=num;loop++)
        // ここでloopが3か5の倍数のときは何もしなくそのまま戻りそれ以外は今のloopの数をgoukeiに足しgoukeiに代入する
    if(loop%3==0||loop%5==0)
        {
             ;
        }
    else
        { 
      goukei = goukei + loop;//
        }
    
    }
    // ここで負の数であるときはNGを出すようにする
else
    {
     printf("NG");   
    };
if (num>=0)
    {
  printf("%ld", goukei);
    }
    return 0;
};
