#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089cb2e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  short sVar3;
  undefined4 local_120;
  undefined auStack_11c [256];
  
  iVar1 = FUN_089c9da8();
  uVar2 = FUN_089c9e94(param_1);
  if (iVar1 < 1) {
    if ((-1 < iVar1) && (iVar1 = FUN_089d81d0(), iVar1 != 0)) {
      local_120 = 0;
      FUN_089b4c24(&DAT_08aa1db8,*(undefined4 *)(param_1 + 0x50));
      *(ushort *)(*(int *)(param_1 + 0x2c) + 6) =
           *(short *)(*(int *)(param_1 + 0x2c) + 6) + (ushort)*(byte *)(param_1 + 0x41);
      iVar1 = FUN_089c952c(param_1,&local_120);
      if (iVar1 == 0) {
        FUN_089b4c24(&DAT_08aa1dc8);
        iVar1 = *(int *)(param_1 + 0x2c);
        sVar3 = *(short *)(iVar1 + 6) - (ushort)*(byte *)(param_1 + 0x41);
      }
      else {
        FUN_089b4c24(" , Line=%d\n",local_120);
        iVar1 = *(int *)(param_1 + 0x2c);
        sVar3 = *(short *)(iVar1 + 6) - (ushort)*(byte *)(param_1 + 0x41);
      }
      *(short *)(iVar1 + 6) = sVar3;
    }
  }
  else if (iVar1 < 2) {
    iVar1 = strlen(uVar2);
    if (iVar1 == 0) {
      FUN_089d7d18(0);
    }
    else {
      FUN_089b4c84(auStack_11c,"host0:../../disc/%s",uVar2);
      FUN_089d7d18(auStack_11c);
    }
  }
  return 0;
}

