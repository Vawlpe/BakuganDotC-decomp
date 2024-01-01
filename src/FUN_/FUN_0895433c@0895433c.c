#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895433c(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar8 = 0;
  iVar2 = *(int *)(param_1 + 0x1c);
  if (param_2 == '\0') {
    iVar10 = 1;
    iVar9 = 4;
    do {
      FUN_089f46dc(*(undefined4 *)(iVar2 + iVar9));
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 0x20;
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9));
      iVar10 = iVar10 + 1;
      iVar9 = iVar9 + 4;
      iVar2 = *(int *)(param_1 + 0x1c);
    } while (iVar10 < 9);
    *(undefined4 *)(param_1 + 0x600) = *(undefined4 *)(*(int *)(iVar2 + 4) + 0x60);
    iVar9 = 1;
    *(undefined4 *)(param_1 + 0x604) = *(undefined4 *)(*(int *)(iVar2 + 4) + 100);
    iVar2 = 4;
    iVar10 = param_1 + 0x28;
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
      cVar1 = *(char *)(param_1 + iVar9 + 0x5f8);
      if ((int)*(char *)(param_1 + 0x74) == iVar9 + -1) {
        if (cVar1 == '\0') {
          *(undefined4 *)(iVar3 + 0xb0) = 0x3f19999a;
          *(undefined4 *)(iVar3 + 0xb4) = 0x3f19999a;
          *(undefined4 *)(iVar3 + 0xb8) = 0x3f19999a;
          *(undefined4 *)(iVar3 + 0xbc) = 0x3f800000;
          piVar6 = (int *)(*(int *)(param_1 + 0x1c) + iVar2);
          iVar3 = *piVar6;
          iVar4 = *piVar6;
          iVar5 = *piVar6;
          iVar7 = *piVar6;
        }
        else {
          *(undefined4 *)(iVar3 + 0xb0) = 0x3f800000;
          *(undefined4 *)(iVar3 + 0xb4) = 0x3f800000;
          *(undefined4 *)(iVar3 + 0xb8) = 0x3f800000;
          *(undefined4 *)(iVar3 + 0xbc) = 0x3f800000;
          piVar6 = (int *)(*(int *)(param_1 + 0x1c) + iVar2);
          iVar3 = *piVar6;
          iVar4 = *piVar6;
          iVar5 = *piVar6;
          iVar7 = *piVar6;
        }
      }
      else if (cVar1 == '\0') {
        *(undefined4 *)(iVar3 + 0xb0) = 0x3f19999a;
        *(undefined4 *)(iVar3 + 0xb4) = 0x3f19999a;
        *(undefined4 *)(iVar3 + 0xb8) = 0x3f19999a;
        *(undefined4 *)(iVar3 + 0xbc) = 0x3ecccccd;
        piVar6 = (int *)(*(int *)(param_1 + 0x1c) + iVar2);
        iVar3 = *piVar6;
        iVar4 = *piVar6;
        iVar5 = *piVar6;
        iVar7 = *piVar6;
      }
      else {
        *(undefined4 *)(iVar3 + 0xb0) = 0x3f800000;
        *(undefined4 *)(iVar3 + 0xb4) = 0x3f800000;
        *(undefined4 *)(iVar3 + 0xb8) = 0x3f800000;
        *(undefined4 *)(iVar3 + 0xbc) = 0x3ecccccd;
        piVar6 = (int *)(*(int *)(param_1 + 0x1c) + iVar2);
        iVar3 = *piVar6;
        iVar4 = *piVar6;
        iVar5 = *piVar6;
        iVar7 = *piVar6;
      }
      FUN_089f4954(*(undefined4 *)(iVar4 + 0x90),*(undefined4 *)(iVar5 + 0x94),
                   *(undefined4 *)(iVar7 + 0x9c),iVar3,0);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0x60) = 0xc3600000;
      *(char *)(iVar10 + 0x83) = (char)iVar8 * '\x02';
      iVar3 = *(int *)(param_1 + 0x1c);
      *(undefined *)(iVar10 + 0x7f) = 0;
      *(undefined4 *)(iVar10 + 0x94) = 0;
      piVar6 = (int *)(iVar3 + iVar2);
      cVar1 = *(char *)(param_1 + iVar9 + 0x5f8);
      *(short *)(iVar10 + 0x8c) = (short)(int)*(float *)(*piVar6 + 0x60);
      *(short *)(iVar10 + 0x90) = (short)(int)(704.0 - *(float *)(*piVar6 + 0x60));
      if (cVar1 == '\0') {
        *(uint *)(*piVar6 + 0xd0) = *(uint *)(*piVar6 + 0xd0) & 0xfffffffe;
      }
      else {
        iVar8 = (iVar8 + 1) * 0x1000000 >> 0x18;
      }
      iVar9 = iVar9 + 1;
      iVar2 = iVar2 + 4;
      iVar10 = iVar10 + 0x28;
    } while (iVar9 < 5);
  }
  else {
    iVar2 = *(int *)(iVar2 + *(char *)(param_1 + 0x74) * 4 + 0x14);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
    cVar1 = *(char *)(param_1 + 0x74);
    iVar2 = *(int *)(param_1 + 0x1c);
    param_1 = param_1 + cVar1 * 0x28;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    iVar2 = iVar2 + cVar1 * 4;
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(*(int *)(iVar2 + 4) + 0xbc);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(*(int *)(iVar2 + 4) + 0x90);
  }
  return;
}

