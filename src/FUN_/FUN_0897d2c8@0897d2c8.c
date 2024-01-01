#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0897d2c8(int param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  cVar1 = *(char *)(param_1 + 0xee5);
  if (cVar1 < '\x02') {
    if (cVar1 < '\0') {
      iVar4 = (int)*(char *)(param_1 + 0xee0);
      goto LAB_0897d598;
    }
    piVar3 = (int *)FUN_0880cc48();
    uVar5 = (uint)*(byte *)((int)*(char *)(param_1 + 0xee0) + *(char *)(param_1 + 0xee1) * 6 +
                            param_1 + 0x1250);
    iVar4 = *piVar3 + ((int)uVar5 >> 3);
    if ((int)uVar5 < 0) {
      bVar2 = (byte)(1 << (-(-uVar5 & 7) & 0x1f));
    }
    else {
      bVar2 = (byte)(1 << (uVar5 & 7));
    }
    *(byte *)(iVar4 + 0x5e3) = *(byte *)(iVar4 + 0x5e3) | bVar2;
    *(undefined *)
     ((int)*(char *)(param_1 + 0xee0) + *(char *)(param_1 + 0xee1) * 6 + param_1 + 0x1268) = 0;
  }
  else {
    if ('\x02' < cVar1) {
      iVar4 = (int)*(char *)(param_1 + 0xee0);
      goto LAB_0897d598;
    }
    bVar2 = FUN_0897a03c(param_1,*(undefined *)(param_1 + 0xee1));
    if ((bVar2 == 0xff) || (bVar2 == 0)) {
      piVar3 = (int *)FUN_0880cc48();
      uVar5 = (int)*(char *)(param_1 + 0xee0) + 1;
      iVar4 = *piVar3 + (int)*(char *)(param_1 + 0xee1) / 3 +
              ((int)(uVar5 + ((uint)((int)uVar5 >> 3) >> 0x1d)) >> 3);
      if ((int)uVar5 < 0) {
        bVar2 = (byte)(1 << (-(-uVar5 & 7) & 0x1f));
      }
      else {
        bVar2 = (byte)(1 << (uVar5 & 7));
      }
      *(byte *)(iVar4 + 0x53e) = *(byte *)(iVar4 + 0x53e) | bVar2;
      *(undefined *)
       ((int)*(char *)(param_1 + 0xee0) + ((int)*(char *)(param_1 + 0xee1) / 3) * 6 + param_1 +
       0x1268) = 0;
    }
    else if (bVar2 < 2) {
      if (bVar2 == 0) {
        iVar4 = (int)*(char *)(param_1 + 0xee0);
        goto LAB_0897d598;
      }
      piVar3 = (int *)FUN_0880cc48();
      uVar5 = (uint)*(byte *)(param_1 + (int)*(char *)(param_1 + 0xee1) / 3 + 0x1284);
      iVar4 = *piVar3 + ((int)uVar5 >> 3);
      if ((int)uVar5 < 0) {
        bVar2 = (byte)(1 << (-(-uVar5 & 7) & 0x1f));
      }
      else {
        bVar2 = (byte)(1 << (uVar5 & 7));
      }
      *(byte *)(iVar4 + 0x5e3) = *(byte *)(iVar4 + 0x5e3) | bVar2;
      *(undefined *)(param_1 + (int)*(char *)(param_1 + 0xee1) / 3 + 0x1286) = 0;
    }
    else {
      if (2 < bVar2) {
        iVar4 = (int)*(char *)(param_1 + 0xee0);
        goto LAB_0897d598;
      }
      piVar3 = (int *)FUN_0880cc48();
      uVar5 = (uint)*(byte *)(param_1 + (int)*(char *)(param_1 + 0xee1) / 3 + 0x1280);
      iVar4 = *piVar3 + ((int)uVar5 >> 3);
      if ((int)uVar5 < 0) {
        bVar2 = (byte)(1 << (-(-uVar5 & 7) & 0x1f));
      }
      else {
        bVar2 = (byte)(1 << (uVar5 & 7));
      }
      *(byte *)(iVar4 + 0x5e3) = *(byte *)(iVar4 + 0x5e3) | bVar2;
      *(undefined *)(param_1 + (int)*(char *)(param_1 + 0xee1) / 3 + 0x1282) = 0;
    }
  }
  iVar4 = (int)*(char *)(param_1 + 0xee0);
LAB_0897d598:
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4 * 4 + 0x38);
  *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
  return;
}

