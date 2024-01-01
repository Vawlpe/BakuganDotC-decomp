#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a6e78(int param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (param_2 == '\0') {
    iVar5 = 5;
    iVar4 = 0x14;
    do {
      FUN_089f46dc(*(undefined4 *)(iVar1 + iVar4));
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 0x20;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x90) = 0x3f800000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x94) = 0x3f800000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x9c) = 0;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      FUN_089f4954(*(undefined4 *)(iVar1 + 0x90),*(undefined4 *)(iVar1 + 0x94),
                   *(undefined4 *)(iVar1 + 0x9c),iVar1,0);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar1 = *(int *)(param_1 + 0x1c);
    } while (iVar5 < 0xf);
    *(undefined4 *)(param_1 + 0x678) = *(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x60);
    iVar4 = 5;
    *(undefined4 *)(param_1 + 0x67c) = *(undefined4 *)(*(int *)(iVar1 + 0x14) + 100);
    iVar5 = 0x14;
    cVar6 = '\0';
    iVar7 = param_1 + 200;
    do {
      *(uint *)(*(int *)(iVar1 + iVar5) + 0xd0) = *(uint *)(*(int *)(iVar1 + iVar5) + 0xd0) | 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      uVar2 = (uint)*(byte *)(param_1 + 0x673) & 1 << (iVar4 - 5U & 0x1f);
      if ((int)*(char *)(param_1 + 0x74) == iVar4 - 5U) {
        if (uVar2 == 0) {
          *(undefined4 *)(iVar1 + 0xb0) = 0x3f19999a;
          *(undefined4 *)(iVar1 + 0xb4) = 0x3f19999a;
          *(undefined4 *)(iVar1 + 0xb8) = 0x3f19999a;
          *(undefined4 *)(iVar1 + 0xbc) = 0x3f800000;
          iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
        }
        else {
          *(undefined4 *)(iVar1 + 0xb0) = 0x3f800000;
          *(undefined4 *)(iVar1 + 0xb4) = 0x3f800000;
          *(undefined4 *)(iVar1 + 0xb8) = 0x3f800000;
          *(undefined4 *)(iVar1 + 0xbc) = 0x3f800000;
          iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
        }
      }
      else if (uVar2 == 0) {
        *(undefined4 *)(iVar1 + 0xb0) = 0x3f19999a;
        *(undefined4 *)(iVar1 + 0xb4) = 0x3f19999a;
        *(undefined4 *)(iVar1 + 0xb8) = 0x3f19999a;
        *(undefined4 *)(iVar1 + 0xbc) = 0x3ecccccd;
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      }
      else {
        *(undefined4 *)(iVar1 + 0xb0) = 0x3f800000;
        *(undefined4 *)(iVar1 + 0xb4) = 0x3f800000;
        *(undefined4 *)(iVar1 + 0xb8) = 0x3f800000;
        *(undefined4 *)(iVar1 + 0xbc) = 0x3ecccccd;
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      }
      *(undefined4 *)(iVar1 + 0x90) = 0x3fc00000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x94) = 0x3fc00000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x9c) = 0;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      FUN_089f4954(*(undefined4 *)(iVar1 + 0x90),*(undefined4 *)(iVar1 + 0x94),
                   *(undefined4 *)(iVar1 + 0x9c),iVar1,0);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x60) = 0xc3600000;
      *(char *)(iVar7 + 0x83) = cVar6;
      iVar1 = *(int *)(param_1 + 0x1c);
      *(undefined *)(iVar7 + 0x7f) = 0;
      *(undefined4 *)(iVar7 + 0x94) = 0;
      piVar3 = (int *)(iVar1 + iVar5);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
      *(short *)(iVar7 + 0x8c) = (short)(int)*(float *)(*piVar3 + 0x60);
      cVar6 = cVar6 + '\x02';
      *(short *)(iVar7 + 0x90) = (short)(int)(704.0 - *(float *)(*piVar3 + 0x60));
      iVar7 = iVar7 + 0x28;
    } while (iVar4 < 10);
  }
  else {
    iVar1 = *(int *)(iVar1 + *(char *)(param_1 + 0x74) * 4 + 0x28);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
    cVar6 = *(char *)(param_1 + 0x74);
    iVar1 = *(int *)(param_1 + 0x1c);
    param_1 = param_1 + cVar6 * 0x28;
    *(undefined4 *)(param_1 + 0x15c) = 0;
    iVar1 = iVar1 + cVar6 * 4;
    *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(*(int *)(iVar1 + 0x14) + 0xbc);
    *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x90);
  }
  return;
}

