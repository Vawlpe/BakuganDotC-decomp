#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893160c(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  memset_jak((undefined *)(param_1 + 0x19f8),0xff,4);
  memset_jak((undefined *)(param_1 + 0x19fc),0,4);
  memset_jak((undefined *)(param_1 + 0x1a00),0,4);
  memset_jak((undefined *)(param_1 + 0x1a04),0xff,2);
  piVar3 = (int *)_DONE_Get_DAT_08AAC9E0();
  uVar7 = *(int *)(*piVar3 + 0x48c) - 1U & 0xff;
  iVar9 = 0;
  do {
    piVar3 = (int *)_DONE_Get_DAT_08AAC9E0();
    uVar8 = uVar7 * 4 + iVar9;
    if ((int)uVar8 < 0) {
      uVar4 = -(-uVar8 & 7) & 0x1f;
    }
    else {
      uVar4 = uVar8 & 7;
    }
    if (((uint)*(byte *)(*piVar3 + ((int)(uVar8 + ((uint)((int)uVar8 >> 3) >> 0x1d)) >> 3) + 0x51a)
        & 1 << uVar4) != 0) {
      *(char *)(param_1 + iVar9 + 0x19f8) = (char)uVar8;
      piVar3 = (int *)_DONE_Get_DAT_08AAC9E0();
      if ((int)uVar8 < 0) {
        uVar4 = -(-uVar8 & 7) & 0x1f;
      }
      else {
        uVar4 = uVar8 & 7;
      }
      if (((uint)*(byte *)(*piVar3 + ((int)(uVar8 + ((uint)((int)uVar8 >> 3) >> 0x1d)) >> 3) + 0x531
                          ) & 1 << uVar4) == 0) {
        *(undefined *)(param_1 + iVar9 + 0x1a00) = 1;
      }
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 4);
  iVar9 = 0;
  bVar2 = false;
  do {
    piVar3 = (int *)_DONE_Get_DAT_08AAC9E0();
    cVar1 = *(char *)(*piVar3 + (uVar7 + 1) * 2 + iVar9 + 0x4e4);
    if (cVar1 != -1) {
      *(char *)(param_1 + iVar9 + 0x1a04) = cVar1;
      iVar5 = 0;
      iVar6 = param_1;
      do {
        iVar5 = iVar5 + 1;
        if (*(char *)(iVar6 + 0x19f8) == cVar1) {
          *(byte *)(iVar6 + 0x19fc) = *(byte *)(iVar6 + 0x19fc) | 1;
          if (!bVar2) {
            *(byte *)(iVar6 + 0x19fc) = *(byte *)(iVar6 + 0x19fc) | 2;
            bVar2 = true;
          }
          break;
        }
        iVar6 = param_1 + iVar5;
      } while (iVar5 < 4);
    }
    iVar9 = iVar9 + 1;
    if (1 < iVar9) {
      return;
    }
  } while( true );
}

