//
// Created by liuxiang37 on 2022/1/25.
//
#include <stdio.h>
#include <string.h>
#include "cjson/cJSON.h"
void eg001() {
    printf("\n--------------------eg001----------------------\n");
    int i,j,k;
    for(i=1;i<5;i++) {
        for(j=1;j<5;j++) {
            for(k=1;k<5;k++) {
                if(i!=k&&i!=j&&j!=k) {
                    printf("%d,%d,%d\n",i,j,k);
                }
            }
        }
    }
}
void eg004() {
    printf("\n--------------------eg004----------------------\n");
    float f;
    f = 12.001234;
    printf("the value of f = %f", f);
}
void eg005() {
    printf("\n--------------------eg005----------------------\n");
    double d;
    d = 12.001234;
    printf("the value of d = %le", d);
}
void eg011() {
    printf("\n--------------------eg011----------------------\n");
    int integerType;
    float floatType;
    double doubleType;
    char charType;

    printf("Size of int: %ld bytes\n",sizeof(integerType));
    printf("Size of float: %ld bytes\n",sizeof(floatType));
    printf("Size of double: %ld bytes\n",sizeof(doubleType));
    printf("Size of char: %ld bytes\n",sizeof(charType));
}
void eg012() {
    printf("\n--------------------eg012----------------------\n");
    double firstNumber, secondNumber, temporaryVariable;
    firstNumber = 1.234;
    secondNumber = 5.678;
    printf("%.5lf - %.5lf \n\n", firstNumber, secondNumber);
    temporaryVariable = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temporaryVariable;
    printf("%.5lf - %.5lf \n\n", firstNumber, secondNumber);
}
void eg042() {
    printf("\n--------------------eg042----------------------\n");
    int array[10] = {1,2,3,4,5,6,7,8,9,0};
    int sum = 0;
    int loop;
    float avg;
    for(loop=0;loop<10;loop++) {
        sum = sum + array[loop];
    }
    avg = (float) sum / loop;
    printf("avg = %f",avg);
}
void eg043() {
    printf("\n--------------------eg043----------------------\n");
    int array[10] = {1,2,3,4,5,6,7,8,9,0};
    int loop;
    for(loop = 0;loop<10;loop++) {
        printf("%d " , array[loop]);
    }
    printf("\n");
    for(loop = 9;loop>=0;loop--) {
        printf("%d " , array[loop]);
    }
    int sum = 0;
    for(loop = 0;loop<10;loop++) {
        sum += array[loop];
    }
    printf("\n");
    printf("sum = %d", sum);
}
void eg045() {
    printf("\n--------------------eg045----------------------\n");
    int array[10] = {1,2,3,4,5,6,7,8,9,0};
    int loop, largest, smallest;
    largest = array[0];
    smallest = array[0];
    for(loop = 1;loop < 10; loop++) {
        if (largest < array[loop]) {
            largest = array[loop];
        }
        if (smallest > array[loop]) {
            smallest = array[loop];
        }
    }
    printf("max = %d",largest);
    printf("\n");
    printf("min = %d",smallest);
}
void eg047() {
    printf("\n--------------------eg047----------------------\n");
    int array[10] = {0,1,2,3,4,5,6,7,8,9};
    int even[10],odd[10];
    int loop, e,d;
    e = d = 0;
    for(loop = 0;loop<10;loop++) {
        if(array[loop]%2 == 0) {
            even[e] = array[loop];
            e++;
        } else {
            odd[d] = array[loop];
            d++;
        }
    }
    printf(" original ---> ");
    for(loop = 0; loop < 10;loop++) {
        printf(" %d", array[loop]);
    }
    printf("\n even ------> ");
    for(loop = 0; loop < e;loop++) {
        printf(" %d", even[loop]);
    }
    printf("\n odd ------> ");
    for(loop = 0; loop < d;loop++) {
        printf(" %d", odd[loop]);
    }
}
void eg048() {
    printf("\n--------------------eg048----------------------\n");
    int original[10] = {1,2,3,4,5,6,7,8,9,0};
    int copied[10];
    int loop;

    for(loop = 0;loop<10;loop++) {
        copied[loop] = original[loop];
    }
    for(loop=0;loop<10;loop++) {
        printf("%2d   %2d\n",
               original[loop], copied[loop]);
    }
}
void eg052() {
    printf("\n--------------------eg052----------------------\n");
    int original[10] = {1,2,3,4,5,6,7,8,9,0};
    int loop;
    for(loop = 0;loop<10;loop++) {
        printf("%d\n", *(original+loop));
    }
}
void cyclicSwap(int *a, int *b, int *c) {
    int temp;
    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}
void eg053() {
    printf("\n--------------------eg053----------------------\n");
    int a = 1;
    int b = 2;
    int c = 3;
    printf("%d %d %d",a,b,c);
    printf("\n");
    cyclicSwap(&a,&b,&c);
    printf("%d %d %d",a,b,c);
}
void eg054() {
    printf("\n--------------------eg054----------------------\n");

    cJSON *root = cJSON_CreateObject();
    cJSON *item = cJSON_CreateObject();
    cJSON *next = cJSON_CreateObject();

    cJSON_AddItemToObject(root, "rc", cJSON_CreateNumber(0));//根节点下添加
    cJSON_AddItemToObject(root, "operation", cJSON_CreateString("CALL"));
    cJSON_AddItemToObject(root, "service", cJSON_CreateString("telephone"));

    printf("%s\n", cJSON_Print(root));
}
void eg055() {
    printf("\n--------------------eg055----------------------\n");
    const char str[] = "you dont give up, then there's no limitation";
    const char ch = 'n';
    char *ret;
    ret = (char*) memchr(str, ch, strlen(str));
    // n 也返回了
    printf("%s", ret); // nt give up, then there's no limitation
}
void eg056() {
    printf("\n--------------------eg056----------------------\n");
    char str1[15];
    char str2[15];

    int ret;

    memcpy(str1, "abcdef", 6);
    memcpy(str2, "ABCDEF", 6);

    ret = memcmp(str1, str2, 5);
    printf("\n%d", ret);
}
void eg057() {
    printf("\n--------------------eg057----------------------\n");

    const char src[50] = "http://www.runoob.com";
    char dest[50];

    memcpy(dest, src, strlen(src)+1);
    printf("dest = %s\n", dest);
}
void eg058() {
    printf("\n--------------------eg058----------------------\n");
    char *s = "http://www.runoob.com";
    char d[20];
    memcpy(d, s+11, 6);
    d[6] = '\0';
    printf("%s", d);
}
void eg059() {


}









