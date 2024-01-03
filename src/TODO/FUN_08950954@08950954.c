#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08950954(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *ptr;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  
  FUN_0890990c();
  *(undefined **)(param_1 + 0xc) = &DAT_08af4dec;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar2 = FUN_089d7d74(0x20,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  ptr = (undefined *)FUN_089d7d74(0x10,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  *(undefined **)(param_1 + 0x50) = ptr;
  memset_jak(ptr,0,0x10);
  FUN_08909df4(param_1,0);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  iVar3 = FUN_089edb58();
  if (iVar3 == 0) {
    FUN_089eda24(0);
  }
  iVar3 = FUN_089eac08();
  if (iVar3 == 0) {
    FUN_089eaa70();
    puVar4 = (undefined4 *)FUN_089eac30();
    *puVar4 = 0x44fa0000;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  *DAT_08ac5934 = 0;
  DAT_08ac5934[1] = 0;
  DAT_08ac5934[2] = 0;
  DAT_08ac5934[3] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined *)(*(int *)(param_1 + 0x20) + 0x3c) = 1;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  FUN_089c96f4();
  iVar6 = 0;
  iVar3 = param_1;
  do {
    *(undefined4 *)(iVar3 + 0x7c) = 0;
    iVar6 = iVar6 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar6 < 3);
  iVar3 = DONE_NotZero_DAT_08AAC9E0();
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  else {
    piVar5 = (int *)DONE_Get_DAT_08AAC9E0();
    memset_jak((undefined *)(*piVar5 + 0x80),0,0xb6);
    uVar1 = DONE_Get_DAT_08AAC9E0();
    FUN_0880ceb8(uVar1);
    uVar1 = DONE_Get_DAT_08AAC9E0();
    FUN_0880d11c(uVar1,1);
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  return param_1;
}

