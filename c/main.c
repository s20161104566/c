//
//  main.c
//  c
//
//  Created by s20161104566 on 2017/6/22.
//  Copyright © 2017年 s20161104566. All rights reserved.
//

#include <stdio.h>
int main(int args,const char * argv[]) {
    FILE *fr;
    char time[8],str1[70],str2[70],lat[12],lg[15],spr[7],gro[7],date[8],high[5];
    int i;
    fr=fopen("//Users//s20161104566//Desktop//GPS170510.log","r+" );
    fscanf(fr,"%s%s",str1,str2);
    printf("结果: %s\n%s\n",str1,str2);
    for(i=0;i<8;i++)
        time[i]=str1[i+7];
    time[7]='\0';
    printf("时间:%s\n",time);
    for(i=0;i<12;i++)
        lat[i]=str1[i+16];
    lat[11]='\0';
    printf("纬度:%s\n",lat);
    for(i=0;i<12;i++)
        lg[i]=str1[i+28];
   lg[11]='\0';
    printf("经度:%s\n",lg);
    for(i=0;i<8;i++)
        spr[i]=str1[i+39];
    spr[6]='\0';
    printf("速率:%s\n",spr);
    fclose(fr);
    for(i=0;i<7;i++)
        gro[i]=str1[i+45];
    gro[6]='\0';
    printf("地面航向:%s\n",gro);
    for(i=0;i<8;i++)
        date[i]=str1[i+51];
    date[7]='\0';
    printf("日期:%s\n",date);
    for(i=0;i<5;i++)
        high[i]=str2[i+43];
    high[4]='\0';
    printf("海拔:%s千米\n",high);
    fclose(fr);
    return 0;
}
