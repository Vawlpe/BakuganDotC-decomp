#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x08a1d788)

void FUN_08a1d6b8(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  uint uVar10;
  undefined2 *puVar11;
  
  if (param_1 != 0) {
    uVar6 = (uint)*(ushort *)(param_1 + 0x18);
    uVar10 = 0;
    puVar11 = *(undefined2 **)(param_1 + 0x48);
    do {
      puVar9 = puVar11;
      if (uVar6 != 0) {
        iVar8 = *(int *)(param_1 + 4);
        iVar4 = 0;
        iVar5 = 0;
        do {
          while( true ) {
            iVar2 = iVar8 + iVar5;
            iVar5 = iVar5 + 0xc0;
            uVar3 = 2;
            if (*(short *)(iVar2 + 0x18) != 0) {
              uVar3 = (uint)*(ushort *)(iVar2 + 0x1e);
            }
            if (uVar3 == uVar10) break;
            iVar4 = iVar4 + 1;
            if ((int)uVar6 <= iVar4) goto LAB_08a1d74c;
          }
          *puVar9 = (short)iVar4;
          iVar4 = iVar4 + 1;
          uVar6 = (uint)*(ushort *)(param_1 + 0x18);
          puVar9 = puVar9 + 1;
        } while (iVar4 < (int)uVar6);
      }
LAB_08a1d74c:
      if (uVar10 == 0) {
        *(short *)(param_1 + 0x4c) = (short)((int)puVar9 - (int)puVar11 >> 1);
LAB_08a1d760:
        if (uVar10 == 2) goto LAB_08a1d78c;
      }
      else {
        if (uVar10 != 1) goto LAB_08a1d760;
        *(short *)(param_1 + 0x4e) = (short)((int)puVar9 - (int)puVar11 >> 1);
      }
      uVar10 = uVar10 + 1;
      puVar11 = puVar9;
    } while( true );
  }
LAB_08a1d81c:
  FUN_08a1d560(param_1);
  if (param_1 != 0) {
    uVar1 = 0;
    if (*(ushort *)(param_1 + 0x20) != 0) {
      iVar4 = *(int *)(param_1 + 0x14);
      uVar6 = 0;
      uVar1 = 0;
      do {
        uVar10 = (uint)*(ushort *)(iVar4 + 0xc);
        if (uVar10 != 0) {
          iVar5 = *(int *)(iVar4 + 4);
          uVar3 = 0;
          do {
            while( true ) {
              uVar3 = uVar3 + 1;
              if ((*(ushort *)(iVar5 + 2) & 0x100) != 0) break;
              uVar1 = uVar1 | *(ushort *)(iVar5 + 2) & 0x200;
              iVar5 = iVar5 + 0x10;
              if (uVar3 == uVar10) goto LAB_08a1d88c;
            }
            uVar1 = uVar1 | 0x100;
            iVar5 = iVar5 + 0x10;
          } while (uVar3 != uVar10);
        }
LAB_08a1d88c:
        uVar6 = uVar6 + 1;
        iVar4 = iVar4 + 0x30;
      } while (uVar6 != *(ushort *)(param_1 + 0x20));
    }
    *(ushort *)(param_1 + 2) = uVar1 | *(ushort *)(param_1 + 2) & 0xfcff;
  }
  return;
LAB_08a1d78c:
  iVar4 = 0;
  if (uVar6 != 0) {
    iVar8 = *(int *)(param_1 + 4);
    iVar2 = 0;
    iVar5 = iVar8;
    do {
      iVar2 = iVar2 + 0xc0;
      uVar1 = *(ushort *)(iVar5 + 0x42) & 0xfffc;
      iVar7 = iVar8 + *(short *)(iVar5 + 0x40) * 0xc0;
      *(ushort *)(iVar5 + 0x42) = uVar1;
      *(undefined2 *)(iVar5 + 0x3c) = 0;
      if (-1 < *(short *)(iVar5 + 0x40)) {
        *(ushort *)(iVar5 + 0x42) = uVar1 | 2;
        iVar5 = iVar8 + (uint)*(ushort *)(iVar7 + 0x3c) * 0xc0;
        *(ushort *)(iVar7 + 0x42) = *(ushort *)(iVar7 + 0x42) | 1;
        if (*(ushort *)(iVar7 + 0x3c) != 0) {
          *(ushort *)(iVar5 + 0x42) = *(ushort *)(iVar5 + 0x42) & 0xfffd;
        }
        *(short *)(iVar7 + 0x3c) = (short)iVar4;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar8 + iVar2;
    } while (iVar4 < (int)(uint)*(ushort *)(param_1 + 0x18));
  }
  goto LAB_08a1d81c;
}

