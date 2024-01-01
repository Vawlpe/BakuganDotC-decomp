#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a5b10(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_0880dc00("DOMesHelp");
  FUN_088cc354(iVar1);
  strcpy(&DAT_08b010bc,*(undefined4 *)(iVar1 + (param_3 & 0xff) * 4));
  iVar1 = DAT_08b01098;
  FUN_089f51b8(DAT_08b01098);
  *(undefined4 *)(iVar1 + 0x84) = 0;
  (**(code **)(*(int *)(DAT_08b01098 + 0x74) + 0x14))
            (param_1,param_2,0,DAT_08b01098 + *(short *)(*(int *)(DAT_08b01098 + 0x74) + 0x10),
             &DAT_08b010bc,1,0,0);
  FUN_088184e8(0,DAT_08b01098,&DAT_08b010bc,&DAT_08b010ac,&DAT_08b010b0,&DAT_08b010b4);
  DAT_08b010b8 = *(undefined4 *)(DAT_08b01098 + 0x84);
  DAT_08b0109c = 0x3f800000;
  DAT_08b010a4 = (float)*(int *)(DAT_08b01098 + 0x88);
  return;
}

