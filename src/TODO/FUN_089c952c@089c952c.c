#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089c952c(int param_1,uint *param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  uVar6 = 0;
  iVar13 = 1;
  if (*(int *)(param_1 + 0x24) != 0) {
    *param_2 = 0;
    iVar3 = *(int *)(param_1 + 0x24);
    iVar4 = *(int *)(param_1 + 0x28);
    uVar2 = *(ushort *)(iVar3 + 0xe);
    iVar12 = iVar3 + (uint)*(ushort *)(iVar3 + 8) * 2 + 0x10;
    iVar11 = 0;
    iVar10 = 0;
    do {
      uVar8 = iVar12 + (uint)*(ushort *)(iVar4 + 6);
      uVar9 = iVar12 + (uint)*(ushort *)(*(int *)(param_1 + 0x24) + iVar10 + 0x10);
      if (uVar9 <= uVar8) {
        puVar5 = (ushort *)(iVar3 + (uint)uVar2 + iVar13 * 2);
        do {
          bVar1 = *(byte *)(uVar9 + 1);
          uVar7 = 0xffffffff;
          if (*(short *)(*(int *)(param_1 + 0x24) + 0xe) != 0) {
            uVar7 = (uint)*puVar5;
          }
          *param_2 = uVar7;
          iVar13 = iVar13 + 1;
          uVar9 = uVar9 + bVar1;
          puVar5 = puVar5 + 1;
          uVar6 = 1;
        } while (uVar9 <= uVar8);
      }
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 2;
      iVar4 = iVar4 + 8;
    } while (iVar11 < 1);
  }
  return uVar6;
}

