#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a4f4c(undefined4 param_1,int param_2,char param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (param_4 & 0xff) * 0x10;
  piVar3 = (int *)(&DAT_08b01050 + iVar2);
  memset_jak(piVar3,0,0x10);
  *piVar3 = param_2;
  *(undefined4 *)(&DAT_08b01054 + iVar2) = param_1;
  (&DAT_08b0105d)[iVar2] = 1;
  (&DAT_08b0105e)[iVar2] = 1;
  (&DAT_08b0105f)[iVar2] = 1;
  if (param_3 == '\x01') {
    iVar1 = *piVar3;
    *(undefined4 *)(&DAT_08b01058 + iVar2) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xc0) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xc4) = 0x3f800000;
    *(undefined4 *)(iVar1 + 200) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xcc) = 0x3f800000;
    (&DAT_08b0105c)[iVar2] = 1;
  }
  return;
}

