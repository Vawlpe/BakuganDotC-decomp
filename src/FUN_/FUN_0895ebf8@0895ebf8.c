#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0895ebf8(int param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  
  uVar6 = (uint)*(ushort *)(param_1 + 0x5174);
  cVar7 = '\0';
  if ((int)uVar6 < (int)(uVar6 + (int)*(char *)(param_1 + 0x4cda))) {
    iVar5 = uVar6 << 2;
    iVar4 = param_1 + uVar6 * 0x28 + 0x78;
    do {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5);
      if (param_2 == '\0') {
        cVar1 = FUN_089a91a0(0x3fc00000,0x3f800000,0x41000000,0,uVar2,iVar4,3);
        iVar3 = (uint)*(ushort *)(param_1 + 0x5174) + (int)*(char *)(param_1 + 0x4cda);
      }
      else {
        cVar1 = FUN_089a91a0(0x3f800000,0x3fc00000,0x41000000,param_2,uVar2,iVar4,3);
        iVar3 = (uint)*(ushort *)(param_1 + 0x5174) + (int)*(char *)(param_1 + 0x4cda);
      }
      cVar7 = cVar7 + cVar1;
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
    } while ((int)uVar6 < iVar3);
  }
  return cVar7 != '\0';
}

