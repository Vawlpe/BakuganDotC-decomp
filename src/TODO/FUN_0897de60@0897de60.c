#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0897de60(int param_1)

{
  undefined uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  
  *(undefined *)(param_1 + 0x1134) = 0;
  uVar7 = 0;
  iVar6 = 2;
  uVar5 = 3;
  cVar3 = *(char *)(param_1 + 0xee5);
  iVar2 = 1;
  do {
    iVar4 = iVar2;
    if (cVar3 < '\0') {
      uVar1 = *(undefined *)(param_1 + 0xee1);
LAB_0897dea0:
      uVar8 = FUN_0897a03c(param_1,uVar1);
      iVar2 = (int)((ulonglong)uVar8 >> 0x20);
      if (((int)uVar8 == iVar6) && (iVar2 = iVar4, uVar7 == uVar5)) {
        iVar2 = 0;
      }
    }
    else if ('\x01' < cVar3) {
      uVar1 = *(undefined *)(param_1 + 0xee1);
      goto LAB_0897dea0;
    }
    if (iVar2 != 0) {
      *(byte *)(param_1 + 0x1134) = *(byte *)(param_1 + 0x1134) | (byte)(iVar4 << (uVar7 & 0x1f));
    }
    uVar7 = uVar7 + 1;
    if (3 < (int)uVar7) {
      return;
    }
    cVar3 = *(char *)(param_1 + 0xee5);
    iVar2 = iVar4;
  } while( true );
}

