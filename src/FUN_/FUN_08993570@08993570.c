#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08993570(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int local_a0 [4];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  int local_80 [10];
  int local_58 [10];
  
  piVar7 = local_a0;
  piVar3 = local_a0;
  piVar4 = local_a0;
  local_a0[0] = 7;
  local_a0[1] = 0x17;
  local_a0[2] = 0x15;
  local_a0[3] = 0xa6;
  local_90 = 0x18;
  local_8c = 0xa7;
  local_88 = 1;
  local_84 = 5;
  memcpy_jak(local_80,&DAT_08ac3bf4,0x50);
  iVar1 = *(int *)(param_1 + 0x104);
  if (*(int *)(param_1 + 0x108) == 0) {
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = iVar2 + 1;
        if (*(int *)(param_1 + 0xdc) != *piVar7) {
          return 0;
        }
        param_1 = param_1 + 4;
        piVar7 = piVar7 + 1;
      } while (iVar2 < iVar1);
    }
    return 1;
  }
  iVar6 = 1;
  iVar2 = 1;
  if (1 < iVar1) {
    iVar5 = param_1 + 4;
    do {
      if (*(int *)(param_1 + 0xdc) == *(int *)(iVar5 + 0xdc)) {
        iVar2 = iVar2 + 1;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar6 < iVar1);
  }
  iVar6 = 0;
  if (iVar2 != iVar1) {
    iVar5 = 0;
    iVar2 = param_1;
    if (0 < iVar1) {
      do {
        if (*(int *)(iVar2 + 0xdc) == *(int *)((int)piVar3 + 0x20)) {
          iVar5 = iVar5 + 1;
        }
        iVar6 = iVar6 + 1;
        piVar3 = (int *)((int)piVar3 + 4);
        iVar2 = iVar2 + 4;
      } while (iVar6 < iVar1);
    }
    iVar2 = 0;
    if (iVar5 != iVar1) {
      iVar6 = param_1;
      if (0 < iVar1) {
        do {
          iVar5 = *(int *)(iVar6 + 0xdc);
          if (iVar5 < 0) {
            if (-2 < iVar5) {
              return 0;
            }
          }
          else if (iVar5 == 0x27) {
            return 0;
          }
          iVar2 = iVar2 + 1;
          iVar6 = iVar6 + 4;
        } while (iVar2 < iVar1);
      }
      iVar5 = 0;
      iVar6 = 0;
      iVar2 = param_1;
      if (0 < iVar1) {
        do {
          if (*(int *)(iVar2 + 0xdc) == *(int *)((int)piVar4 + 0x48)) {
            iVar6 = iVar6 + 1;
          }
          iVar5 = iVar5 + 1;
          piVar4 = (int *)((int)piVar4 + 4);
          iVar2 = iVar2 + 4;
        } while (iVar5 < iVar1);
      }
      uVar8 = 0;
      if (iVar6 != iVar1) {
        iVar1 = 0;
        do {
          piVar3 = (int *)FUN_0880cc48();
          if (((uint)*(byte *)(*piVar3 + 0x604) & 1 << (uVar8 & 0x1f)) != 0) {
            iVar2 = *(int *)(param_1 + 0x104);
            iVar5 = 0;
            iVar6 = 0;
            if (0 < iVar2) {
              iVar9 = 0;
              iVar10 = param_1;
              do {
                piVar3 = (int *)FUN_0880cc48();
                if (*(uint *)(iVar10 + 0xdc) == (uint)*(ushort *)(*piVar3 + iVar1 + iVar9 + 0x606))
                {
                  iVar6 = iVar6 + 1;
                }
                iVar2 = *(int *)(param_1 + 0x104);
                iVar5 = iVar5 + 1;
                iVar9 = iVar9 + 2;
                iVar10 = iVar10 + 4;
              } while (iVar5 < iVar2);
            }
            if (iVar6 == iVar2) {
              return 0;
            }
          }
          uVar8 = uVar8 + 1;
          iVar1 = iVar1 + 0x14;
          if (7 < (int)uVar8) {
            return 1;
          }
        } while( true );
      }
    }
  }
  return 0;
}

