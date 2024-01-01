#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089f5734(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  iVar4 = 0;
  bVar1 = false;
  if (((*(int *)(param_1 + 8) != 0) && (iVar4 = FUN_089f5378(param_1), iVar4 != 0)) &&
     ((*(uint *)(iVar4 + 0x124) & 4) != 0)) {
    bVar1 = true;
  }
  if (iVar4 == 0) {
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x160,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    iVar4 = 0;
    if (iVar3 != 0) {
      FUN_089f3aa8(iVar3);
      iVar4 = iVar3;
    }
  }
  *(undefined4 *)(iVar4 + 0x134) = 0;
  *(undefined4 *)(iVar4 + 0x138) = 0;
  *(undefined4 *)(iVar4 + 0x13c) = 0x3f800000;
  *(undefined4 *)(iVar4 + 0x140) = 0x3f800000;
  *(int *)(iVar4 + 0xd4) = param_2;
  *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 0x20;
  if (*(char *)(param_2 + 0xac) == '\0') {
    FUN_089f3eb8(iVar4,3);
    FUN_089f4330(iVar4);
    *(undefined4 *)(iVar4 + 0xe0) = 0;
  }
  else {
    FUN_089f3eb8(iVar4,1);
    *(undefined4 *)(iVar4 + 0xe0) = 0;
  }
  *(undefined4 *)(iVar4 + 0x80) = in_V72;
  *(undefined4 *)(iVar4 + 0x84) = in_V76;
  *(undefined4 *)(iVar4 + 0x88) = in_V7A;
  *(undefined4 *)(iVar4 + 0x8c) = in_V7E;
  if (bVar1) {
    return iVar4;
  }
  iVar4 = FUN_089f5194(param_1,iVar4);
  return iVar4;
}

