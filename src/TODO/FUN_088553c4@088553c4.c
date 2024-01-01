#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088553c4(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x800) = 0;
  *(undefined4 *)(param_1 + 0x804) = 0x3bb60b61;
  *(undefined4 *)(param_1 + 0x808) = 0;
  *(undefined4 *)(param_1 + 0x80c) = 0;
  FUN_089e02cc(param_1,"mat_context00",&LAB_08854f34,param_1 + 0x800);
  *(undefined4 *)(param_1 + 0x810) = 0;
  *(undefined4 *)(param_1 + 0x814) = 0x3bb60b61;
  *(undefined4 *)(param_1 + 0x818) = 0;
  *(undefined4 *)(param_1 + 0x81c) = 0;
  FUN_089e02cc(param_1,"mat_context01",&LAB_08854f34,param_1 + 0x810);
  *(undefined4 *)(param_1 + 0x820) = 0;
  *(undefined4 *)(param_1 + 0x824) = 0x3b888889;
  *(undefined4 *)(param_1 + 0x828) = 0;
  *(undefined4 *)(param_1 + 0x82c) = 0;
  FUN_089e02cc(param_1,"mat_spel",&LAB_08854f34,param_1 + 0x820);
  *(undefined4 *)(param_1 + 0x830) = 0;
  *(undefined4 *)(param_1 + 0x834) = 0x3ba3d70a;
  *(undefined4 *)(param_1 + 0x838) = 0;
  *(undefined4 *)(param_1 + 0x83c) = 0;
  FUN_089e02cc(param_1,"mat_Ambient",&LAB_08854ef0,param_1 + 0x830);
  FUN_089e02cc(param_1,"mat_Ambient",&LAB_08854f34,param_1 + 0x830);
  if (*(char *)(param_1 + 0xa42) == '\0') {
    iVar1 = FUN_089df7ec(param_1,"mat_context00");
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) & 0xf3 | 8;
    }
    iVar1 = FUN_089df7ec(param_1,"mat_context01");
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) & 0xf3 | 8;
    }
    iVar1 = FUN_089df7ec(param_1,"mat_spel");
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) & 0xf3 | 8;
    }
  }
  else {
    FUN_089e0a70(param_1,&LAB_08854fd8,0);
  }
  iVar1 = FUN_089df7ec(param_1,"mat_Ambient");
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) & 0x3f | 0x40;
    *(byte *)(iVar1 + 3) = *(byte *)(iVar1 + 3) & 0x1f | 0xc0;
    *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) & 0xfc | 2;
  }
  iVar1 = FUN_089df7ec(param_1,"mat_Speculer");
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) & 0x3f | 0x80;
  }
  return;
}

