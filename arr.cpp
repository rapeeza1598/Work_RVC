#include <stdio.h>
#include <string.h>
int main(){
    char in[] = "e4wf65ew4"; //ประกาศและกำหนด ตัวอักษร เป็นอ่าเรย์
//    printf("\n\t Number : ");
//    scanf("%s", in);
    int size = strlen(in); // นับจำนวนของ ตัวอักษร เป็นอ่าเรย์
    int in0[10];

    for (int i=0; i<=9; i++){ // กำหนด ตำแหน่งของอาเรย์ in0 (0-9) ให้เท่ากับ 0
        in0[i] = 0;
    }
    for ( int i=0; i<=size-1; i++){ // ทำงานตามจำนานครั้งของ input ตัวอักษรที่เข้ามา
            if (in[i]>='0' && in[i]<='9'){
                    if ((in[i]-'0') == (in[i]-'0')){ //บวก 1 ตามตำแหน่งของตัวเลข
                    in0[in[i]-'0'] = in0[in[i]-'0'] +1;
                    }
            }
    }
    for (int i=0; i<=9; i++){ //กำหนดให้แสดงตำแหน่ง 0-9 ของอาเรย์ in0
    printf("%d ",in0[i]);
    }
    return 0;
}
