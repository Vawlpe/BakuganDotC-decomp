#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a5dcc(int param_1)

{
  undefined uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  char local_30 [8];
  int local_28;
  
  pcVar6 = local_30;
  local_30[0] = '\x01';
  local_30[1] = 1;
  local_30[2] = 1;
  local_30[3] = 1;
  local_30[4] = 1;
  uVar1 = FUN_089a5d70(param_1);
  *(undefined *)(param_1 + 0x74) = uVar1;
  *(undefined *)(param_1 + 0x673) = 0;
  *(undefined *)(param_1 + 0x76) = *(undefined *)(param_1 + 0x74);
  uVar4 = (uint)*(byte *)(param_1 + 0x673);
  uVar7 = 0;
  do {
    if (*pcVar6 != '\0') {
      uVar4 = uVar4 | 1 << (uVar7 & 0x1f) & 0xffU;
    }
    uVar8 = uVar7 + 1;
    pcVar6 = local_30 + uVar7 + 1;
    uVar7 = uVar8;
  } while ((int)uVar8 < 5);
  *(char *)(param_1 + 0x673) = (char)uVar4;
  memset_jak((undefined *)(param_1 + 0x78),0,0x500);
  FUN_0881a0c4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),10);
  iVar9 = 0;
  iVar10 = 0;
  do {
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar10);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
    iVar9 = iVar9 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar10) + 0xbc) = 0;
    iVar10 = iVar10 + 4;
  } while (iVar9 < 0x13);
  iVar9 = 0;
  iVar10 = 0;
  do {
    local_28 = 0;
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x160,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    iVar5 = local_28;
    if (iVar3 != 0) {
      FUN_089f3aa8(iVar3);
      iVar5 = iVar3;
    }
    *(int *)(*(int *)(param_1 + 0x1c) + iVar10 + 0x4c) = iVar5;
    FUN_089f5194(*(undefined4 *)(param_1 + 0x18),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10 + 0x4c));
    FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 4),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10 + 0x4c));
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar10 + 0x4c);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar10 + 0x4c);
    uVar2 = FUN_089f7720("NonTexture");
    *(undefined4 *)(iVar5 + 0xd4) = uVar2;
    iVar9 = iVar9 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar10 + 0x4c) + 0xbc) = 0;
    iVar10 = iVar10 + 4;
  } while (iVar9 < 3);
  FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 4));
  iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
  *(uint *)(iVar9 + 0xd0) = *(uint *)(iVar9 + 0xd0) | 0x20;
  FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 4));
  return;
}

