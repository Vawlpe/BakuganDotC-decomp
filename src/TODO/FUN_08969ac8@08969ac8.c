#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08969ac8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  memset_jak((undefined *)(param_1 + 0x7c),0,0x2580);
  if (*(char *)(param_1 + 0x29bd) < '\x03') {
    FUN_0881a0c4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0x18);
    uVar3 = 0x68;
    *(undefined4 *)(param_1 + 0x2b68) = 0x68;
    iVar8 = 0x2c;
  }
  else {
    FUN_0881a0c4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0x19);
    uVar3 = 0xc6;
    *(undefined4 *)(param_1 + 0x2b68) = 0xc6;
    iVar8 = 0x4c;
  }
  uVar4 = 0;
  if (uVar3 != 0) {
    iVar2 = *(int *)(param_1 + 0x1c);
    iVar5 = 0;
    iVar6 = param_1;
    do {
      *(uint *)(*(int *)(iVar2 + iVar5) + 0xd0) =
           *(uint *)(*(int *)(iVar2 + iVar5) + 0xd0) & 0xfffffffe;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0xbc) = 0;
      iVar2 = *(int *)(param_1 + 0x1c);
      uVar4 = uVar4 + 1;
      piVar7 = (int *)(iVar2 + iVar5);
      iVar5 = iVar5 + 4;
      *(undefined4 *)(iVar6 + 0x25fc) = *(undefined4 *)(*piVar7 + 0x68);
      iVar6 = iVar6 + 4;
    } while (uVar4 < uVar3);
  }
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x160,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar6 = 0;
  if (iVar2 != 0) {
    FUN_089f3aa8(iVar2);
    iVar6 = iVar2;
  }
  *(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x2b68) * 4) = iVar6;
  FUN_089f5194(*(undefined4 *)(param_1 + 0x18),
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x2b68) * 4));
  FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8),
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x2b68) * 4));
  iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x2b68) * 4);
  *(uint *)(iVar8 + 0xd0) = *(uint *)(iVar8 + 0xd0) & 0xfffffffe;
  return;
}

