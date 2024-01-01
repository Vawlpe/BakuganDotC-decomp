#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_08961a68(int param_1,undefined param_2)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  if (*(char *)(param_1 + 0x4cdc) == '\0') {
    return true;
  }
  uVar7 = 0;
  cVar6 = '\0';
  if ('\0' < *(char *)(param_1 + 0x4cdc)) {
    uVar8 = 0;
    do {
      uVar4 = (uint)*(ushort *)(param_1 + 0x5190);
      iVar11 = uVar8 + 1;
      uVar3 = (uint)*(ushort *)(param_1 + 0x518e);
      uVar9 = uVar3 + uVar4 * uVar8;
      if (uVar9 < uVar3 + uVar4 * iVar11) {
        do {
          cVar2 = FUN_089619ac(param_1,param_2,uVar9 & 0xffff);
          uVar4 = (uint)*(ushort *)(param_1 + 0x5190);
          uVar3 = (uint)*(ushort *)(param_1 + 0x518e);
          cVar6 = cVar6 + cVar2;
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)(uVar3 + uVar4 * iVar11));
        uVar1 = *(ushort *)(param_1 + 0x51b8);
      }
      else {
        uVar1 = *(ushort *)(param_1 + 0x51b8);
      }
      uVar5 = (uint)uVar1;
      uVar9 = (uint)*(ushort *)(param_1 + 0x51b6);
      uVar10 = uVar9 + uVar5 * uVar8;
      if (uVar10 < uVar9 + uVar5 * iVar11) {
        do {
          cVar2 = FUN_089619ac(param_1,param_2,uVar10 & 0xffff);
          uVar5 = (uint)*(ushort *)(param_1 + 0x51b8);
          uVar9 = (uint)*(ushort *)(param_1 + 0x51b6);
          cVar6 = cVar6 + cVar2;
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)(uVar9 + uVar5 * iVar11));
        uVar3 = (uint)*(ushort *)(param_1 + 0x518e);
        uVar4 = (uint)*(ushort *)(param_1 + 0x5190);
      }
      FUN_0895f328(param_1,uVar3,uVar4,uVar9,uVar5,uVar8);
      uVar4 = (uint)*(ushort *)(param_1 + 0x51d8);
      uVar3 = (uint)*(ushort *)(param_1 + 0x51d6);
      uVar9 = uVar3 + uVar4 * uVar8;
      if (uVar9 < uVar3 + uVar4 * iVar11) {
        do {
          cVar2 = FUN_089619ac(param_1,param_2,uVar9 & 0xffff);
          uVar4 = (uint)*(ushort *)(param_1 + 0x51d8);
          uVar3 = (uint)*(ushort *)(param_1 + 0x51d6);
          cVar6 = cVar6 + cVar2;
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)(uVar3 + uVar4 * iVar11));
      }
      FUN_0895f328(param_1,*(undefined2 *)(param_1 + 0x518e),*(undefined2 *)(param_1 + 0x5190),uVar3
                   ,uVar4,uVar8);
      uVar7 = uVar7 + 1;
      uVar8 = uVar7 & 0xff;
    } while ((int)uVar7 < (int)*(char *)(param_1 + 0x4cdc));
  }
  return cVar6 != '\0';
}

