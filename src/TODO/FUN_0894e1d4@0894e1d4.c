#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0894e1d4(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar8 = *(int *)(param_1 + 0x1c);
  if (param_2 == '\0') {
    iVar7 = 4;
    iVar6 = 0x10;
    do {
      FUN_089f46dc(*(undefined4 *)(iVar8 + iVar6));
      iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      *(uint *)(iVar8 + 0xd0) = *(uint *)(iVar8 + 0xd0) | 0x20;
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6));
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 4;
      iVar8 = *(int *)(param_1 + 0x1c);
    } while (iVar7 < 8);
    *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(*(int *)(iVar8 + 0x10) + 0x60);
    iVar6 = 4;
    *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(*(int *)(iVar8 + 0x10) + 100);
    iVar7 = 0x10;
    iVar10 = param_1 + 0xa0;
    do {
      iVar9 = iVar6 + -4;
      *(uint *)(*(int *)(iVar8 + iVar7) + 0xd0) = *(uint *)(*(int *)(iVar8 + iVar7) + 0xd0) | 1;
      iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
      cVar1 = *(char *)(param_1 + iVar9 + 0x2d1);
      if (*(char *)(param_1 + 0x74) == iVar9) {
        if (cVar1 == '\0') {
          *(undefined4 *)(iVar8 + 0xb0) = 0x3f19999a;
          *(undefined4 *)(iVar8 + 0xb4) = 0x3f19999a;
          *(undefined4 *)(iVar8 + 0xb8) = 0x3f19999a;
          *(undefined4 *)(iVar8 + 0xbc) = 0x3f800000;
          piVar4 = (int *)(*(int *)(param_1 + 0x1c) + iVar7);
          iVar8 = *piVar4;
          iVar2 = *piVar4;
          iVar3 = *piVar4;
          iVar5 = *piVar4;
        }
        else {
          *(undefined4 *)(iVar8 + 0xb0) = 0x3f800000;
          *(undefined4 *)(iVar8 + 0xb4) = 0x3f800000;
          *(undefined4 *)(iVar8 + 0xb8) = 0x3f800000;
          *(undefined4 *)(iVar8 + 0xbc) = 0x3f800000;
          piVar4 = (int *)(*(int *)(param_1 + 0x1c) + iVar7);
          iVar8 = *piVar4;
          iVar2 = *piVar4;
          iVar3 = *piVar4;
          iVar5 = *piVar4;
        }
      }
      else if (cVar1 == '\0') {
        *(undefined4 *)(iVar8 + 0xb0) = 0x3f19999a;
        *(undefined4 *)(iVar8 + 0xb4) = 0x3f19999a;
        *(undefined4 *)(iVar8 + 0xb8) = 0x3f19999a;
        *(undefined4 *)(iVar8 + 0xbc) = 0x3ecccccd;
        piVar4 = (int *)(*(int *)(param_1 + 0x1c) + iVar7);
        iVar8 = *piVar4;
        iVar2 = *piVar4;
        iVar3 = *piVar4;
        iVar5 = *piVar4;
      }
      else {
        *(undefined4 *)(iVar8 + 0xb0) = 0x3f800000;
        *(undefined4 *)(iVar8 + 0xb4) = 0x3f800000;
        *(undefined4 *)(iVar8 + 0xb8) = 0x3f800000;
        *(undefined4 *)(iVar8 + 0xbc) = 0x3ecccccd;
        piVar4 = (int *)(*(int *)(param_1 + 0x1c) + iVar7);
        iVar8 = *piVar4;
        iVar2 = *piVar4;
        iVar3 = *piVar4;
        iVar5 = *piVar4;
      }
      FUN_089f4954(*(undefined4 *)(iVar2 + 0x90),*(undefined4 *)(iVar3 + 0x94),
                   *(undefined4 *)(iVar5 + 0x9c),iVar8,0);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0x60) = 0xc3600000;
      *(char *)(iVar10 + 0x83) = (char)iVar9 * '\x02';
      iVar8 = *(int *)(param_1 + 0x1c);
      *(undefined *)(iVar10 + 0x7f) = 0;
      *(undefined4 *)(iVar10 + 0x94) = 0;
      piVar4 = (int *)(iVar8 + iVar7);
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 4;
      *(short *)(iVar10 + 0x8c) = (short)(int)*(float *)(*piVar4 + 0x60);
      *(short *)(iVar10 + 0x90) = (short)(int)(704.0 - *(float *)(*piVar4 + 0x60));
      iVar10 = iVar10 + 0x28;
    } while (iVar6 < 6);
  }
  else {
    iVar6 = *(char *)(param_1 + 0x74) + 6;
    iVar7 = iVar6 * 4;
    iVar8 = *(int *)(iVar8 + iVar7);
    *(uint *)(iVar8 + 0xd0) = *(uint *)(iVar8 + 0xd0) & 0xfffffffe;
    iVar8 = *(int *)(param_1 + 0x1c);
    param_1 = param_1 + iVar6 * 0x28;
    *(undefined4 *)(param_1 + 0x94) = 0;
    piVar4 = (int *)(iVar8 + iVar7);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(*piVar4 + 0xbc);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(*piVar4 + 0x90);
  }
  return;
}

