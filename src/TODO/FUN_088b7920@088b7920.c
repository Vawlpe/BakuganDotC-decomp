#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_088b7920(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined *ptr;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  *param_1 = 0;
  param_1[0x204] = 0xffffffff;
  *(undefined *)(param_1 + 0x205) = 0;
  param_1[0x208] = in_V72;
  param_1[0x209] = in_V76;
  param_1[0x20a] = in_V7A;
  param_1[0x20b] = in_V7E;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  ptr = (undefined *)FUN_089d7d74(0x300,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  param_1[0x20c] = ptr;
  memset_jak(ptr,0,0x300);
  iVar4 = 0;
  iVar3 = 0;
  do {
    iVar2 = FUN_089f5700(DAT_08ac5c68,"eff_ball_a");
    *(undefined4 *)(iVar2 + 0xdc) = 2;
    *(undefined4 *)(iVar2 + 0x60) = 0;
    *(undefined4 *)(iVar2 + 100) = 0xc47a0000;
    *(undefined4 *)(iVar2 + 0x68) = 0;
    *(undefined4 *)(iVar2 + 0x6c) = 0;
    *(undefined4 *)(iVar2 + 0xbc) = 0;
    *(undefined4 *)(iVar2 + 0x70) = 0x3e4ccccd;
    *(undefined4 *)(iVar2 + 0x74) = 0x3e4ccccd;
    *(undefined4 *)(iVar2 + 0x78) = 0x3e4ccccd;
    *(undefined4 *)(iVar2 + 0x7c) = 0;
    *(int *)(param_1[0x20c] + iVar3) = iVar2;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar4 < 0xc0);
  FUN_088b7808(param_1,1);
  return param_1;
}

