#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089613a4(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  param_2 = param_2 & 0xff;
  uVar3 = (uint)*(ushort *)(param_1 + 0x5190);
  iVar8 = param_2 + 1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x518e);
  uVar6 = uVar2 + uVar3 * param_2;
  cVar5 = '\0';
  if (uVar6 < uVar2 + uVar3 * iVar8) {
    do {
      cVar1 = FUN_08960048(param_1,0,uVar6 & 0xffff);
      uVar3 = (uint)*(ushort *)(param_1 + 0x5190);
      uVar2 = (uint)*(ushort *)(param_1 + 0x518e);
      cVar5 = cVar5 + cVar1;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)(uVar2 + uVar3 * iVar8));
  }
  uVar4 = (uint)*(ushort *)(param_1 + 0x51b8);
  uVar6 = (uint)*(ushort *)(param_1 + 0x51b6);
  uVar7 = uVar6 + uVar4 * param_2;
  if (uVar7 < uVar6 + uVar4 * iVar8) {
    do {
      cVar1 = FUN_08960048(param_1,0,uVar7 & 0xffff);
      uVar4 = (uint)*(ushort *)(param_1 + 0x51b8);
      uVar6 = (uint)*(ushort *)(param_1 + 0x51b6);
      cVar5 = cVar5 + cVar1;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)(uVar6 + uVar4 * iVar8));
    uVar2 = (uint)*(ushort *)(param_1 + 0x518e);
    uVar3 = (uint)*(ushort *)(param_1 + 0x5190);
  }
  FUN_0895f328(param_1,uVar2,uVar3,uVar6,uVar4,param_2);
  uVar3 = (uint)*(ushort *)(param_1 + 0x51d8);
  uVar2 = (uint)*(ushort *)(param_1 + 0x51d6);
  uVar6 = uVar2 + uVar3 * param_2;
  if (uVar6 < uVar2 + uVar3 * iVar8) {
    do {
      cVar1 = FUN_08960048(param_1,0,uVar6 & 0xffff);
      uVar3 = (uint)*(ushort *)(param_1 + 0x51d8);
      uVar2 = (uint)*(ushort *)(param_1 + 0x51d6);
      cVar5 = cVar5 + cVar1;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)(uVar2 + uVar3 * iVar8));
  }
  FUN_0895f328(param_1,*(undefined2 *)(param_1 + 0x518e),*(undefined2 *)(param_1 + 0x5190),uVar2,
               uVar3,param_2);
  return cVar5 != '\0';
}

