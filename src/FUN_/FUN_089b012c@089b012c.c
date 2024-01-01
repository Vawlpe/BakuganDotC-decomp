#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089b012c(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  if (param_2 == '\0') {
    iVar8 = 4;
    iVar7 = 0x10;
    do {
      FUN_089f46dc(*(undefined4 *)(iVar2 + iVar7));
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 0x20;
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7));
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 4;
      iVar2 = *(int *)(param_1 + 0x1c);
    } while (iVar8 < 8);
    *(undefined4 *)(param_1 + 0x57c) = *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x60);
    iVar7 = 4;
    *(undefined4 *)(param_1 + 0x580) = *(undefined4 *)(*(int *)(iVar2 + 0x10) + 100);
    iVar8 = 0x10;
    cVar9 = '\0';
    iVar10 = param_1 + 0xa0;
    do {
      *(uint *)(*(int *)(iVar2 + iVar8) + 0xd0) = *(uint *)(*(int *)(iVar2 + iVar8) + 0xd0) | 1;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
      cVar1 = *(char *)(param_1 + iVar7 + 0x575);
      if ((int)*(char *)(param_1 + 0x74) == iVar7 + -4) {
        if (cVar1 == '\0') {
          *(undefined4 *)(iVar2 + 0xb0) = 0x3f19999a;
          *(undefined4 *)(iVar2 + 0xb4) = 0x3f19999a;
          *(undefined4 *)(iVar2 + 0xb8) = 0x3f19999a;
          *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
          piVar5 = (int *)(*(int *)(param_1 + 0x1c) + iVar8);
          iVar2 = *piVar5;
          iVar3 = *piVar5;
          iVar4 = *piVar5;
          iVar6 = *piVar5;
        }
        else {
          *(undefined4 *)(iVar2 + 0xb0) = 0x3f800000;
          *(undefined4 *)(iVar2 + 0xb4) = 0x3f800000;
          *(undefined4 *)(iVar2 + 0xb8) = 0x3f800000;
          *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
          piVar5 = (int *)(*(int *)(param_1 + 0x1c) + iVar8);
          iVar2 = *piVar5;
          iVar3 = *piVar5;
          iVar4 = *piVar5;
          iVar6 = *piVar5;
        }
      }
      else if (cVar1 == '\0') {
        *(undefined4 *)(iVar2 + 0xb0) = 0x3f19999a;
        *(undefined4 *)(iVar2 + 0xb4) = 0x3f19999a;
        *(undefined4 *)(iVar2 + 0xb8) = 0x3f19999a;
        *(undefined4 *)(iVar2 + 0xbc) = 0x3ecccccd;
        piVar5 = (int *)(*(int *)(param_1 + 0x1c) + iVar8);
        iVar2 = *piVar5;
        iVar3 = *piVar5;
        iVar4 = *piVar5;
        iVar6 = *piVar5;
      }
      else {
        *(undefined4 *)(iVar2 + 0xb0) = 0x3f800000;
        *(undefined4 *)(iVar2 + 0xb4) = 0x3f800000;
        *(undefined4 *)(iVar2 + 0xb8) = 0x3f800000;
        *(undefined4 *)(iVar2 + 0xbc) = 0x3ecccccd;
        piVar5 = (int *)(*(int *)(param_1 + 0x1c) + iVar8);
        iVar2 = *piVar5;
        iVar3 = *piVar5;
        iVar4 = *piVar5;
        iVar6 = *piVar5;
      }
      FUN_089f4954(*(undefined4 *)(iVar3 + 0x90),*(undefined4 *)(iVar4 + 0x94),
                   *(undefined4 *)(iVar6 + 0x9c),iVar2,0);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar8) + 0x60) = 0xc3600000;
      *(char *)(iVar10 + 0x83) = cVar9;
      iVar2 = *(int *)(param_1 + 0x1c);
      *(undefined *)(iVar10 + 0x7f) = 0;
      *(undefined4 *)(iVar10 + 0x94) = 0;
      piVar5 = (int *)(iVar2 + iVar8);
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 4;
      *(short *)(iVar10 + 0x8c) = (short)(int)*(float *)(*piVar5 + 0x60);
      cVar9 = cVar9 + '\x02';
      *(short *)(iVar10 + 0x90) = (short)(int)(704.0 - *(float *)(*piVar5 + 0x60));
      iVar10 = iVar10 + 0x28;
    } while (iVar7 < 6);
  }
  else {
    iVar2 = *(int *)(iVar2 + *(char *)(param_1 + 0x74) * 4 + 0x18);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
    cVar9 = *(char *)(param_1 + 0x74);
    iVar2 = *(int *)(param_1 + 0x1c);
    param_1 = param_1 + cVar9 * 0x28;
    *(undefined4 *)(param_1 + 0x134) = 0;
    iVar2 = iVar2 + cVar9 * 4;
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0xbc);
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x90);
  }
  return;
}

