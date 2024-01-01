#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4
FUN_08a26d94(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  
  if ((((param_1 == 0) || (param_5 == 0)) || (iVar5 = FUN_08a26d14(param_2,param_3), iVar5 == 0)) ||
     (iVar5 = FUN_08a26d44(param_2,param_3,param_4), iVar5 == 0)) {
    uVar6 = 0;
  }
  else {
    cVar1 = *(char *)(iVar5 + 0x11);
    if (cVar1 == 0) {
      bVar2 = *(byte *)(iVar5 + 0x12);
    }
    else {
      sVar3 = *(short *)(iVar5 + 0x14);
      sVar4 = *(short *)(iVar5 + 0x16);
      uVar6 = *(undefined4 *)(&DAT_08aa5e5c + *(char *)(iVar5 + 0x13) * 4);
      FUN_08a12984(1,param_5);
      FUN_08a11f10(0,uVar6,0,(int)sVar3,(int)sVar4,0x10,1,(int)cVar1,1,1,3,1,0x80,0,0,param_5);
      bVar2 = *(byte *)(iVar5 + 0x12);
    }
    uVar6 = 1;
    if ((bVar2 & 7) != 0) {
      uVar6 = *(undefined4 *)(&DAT_08aa5e5c + (bVar2 & 7) * 4);
      sVar3 = *(short *)(iVar5 + 0xe);
      FUN_08a129e0(1,param_5);
      FUN_08a11f10(0,uVar6,0,(int)sVar3,1,0x10,1,1,1,2,3,1,0x10,0,0,param_5);
      return 1;
    }
  }
  return uVar6;
}

