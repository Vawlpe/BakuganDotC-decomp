#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08971d1c(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0880dc00("DOMesHelp");
  FUN_088cc354(iVar1);
  iVar2 = param_3 + 0xbe0;
  strcpy(iVar2,*(undefined4 *)(iVar1 + (param_4 & 0xff) * 4));
  iVar1 = *(int *)(param_3 + 0xbbc);
  FUN_089f51b8(iVar1);
  *(undefined4 *)(iVar1 + 0x84) = 0;
  iVar1 = *(int *)(*(int *)(param_3 + 0xbbc) + 0x74);
  (**(code **)(iVar1 + 0x14))
            (param_1,param_2,0,*(int *)(param_3 + 0xbbc) + (int)*(short *)(iVar1 + 0x10),iVar2,1,0,0
            );
  FUN_088184e8(0,*(undefined4 *)(param_3 + 0xbbc),iVar2,param_3 + 0xbd0,param_3 + 0xbd4,
               param_3 + 0xbd8);
  *(undefined4 *)(param_3 + 0xbdc) = *(undefined4 *)(*(int *)(param_3 + 0xbbc) + 0x84);
  iVar1 = *(int *)(*(int *)(param_3 + 0xbbc) + 0x88);
  *(undefined4 *)(param_3 + 0xbc0) = 0x3f800000;
  *(float *)(param_3 + 0xbc8) = (float)iVar1;
  return;
}

