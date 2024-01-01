#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089bd750(ushort *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ushort *puVar10;
  ushort *puVar11;
  
  iVar8 = 0;
  if (*param_1 != 0) {
    iVar9 = 0;
    puVar11 = param_1 + 8;
    puVar10 = param_1;
    do {
      cVar1 = *(char *)puVar11;
      iVar5 = 0;
      cVar2 = *param_2;
      while( true ) {
        iVar6 = (int)cVar1;
        iVar7 = (int)cVar2;
        if (iVar6 == 0) break;
        if (0x60 < iVar6) {
          iVar6 = (iVar6 + -0x20) * 0x1000000 >> 0x18;
        }
        if (0x60 < iVar7) {
          iVar7 = (iVar7 + -0x20) * 0x1000000 >> 0x18;
        }
        iVar5 = iVar5 + 1;
        if (iVar6 != iVar7) {
          bVar4 = true;
          goto LAB_089bd814;
        }
        cVar1 = *(char *)((int)puVar11 + iVar5);
        cVar2 = param_2[iVar5];
      }
      bVar4 = false;
      if (iVar7 != 0) {
        bVar4 = true;
      }
LAB_089bd814:
      if (!bVar4) {
        return (int)param_1 + iVar9;
      }
      if (puVar10[1] == 0x78) {
        iVar5 = FUN_089bd750(*(undefined4 *)(puVar10 + 2),param_2);
        if (iVar5 != 0) {
          return iVar5;
        }
        uVar3 = *param_1;
      }
      else {
        uVar3 = *param_1;
      }
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + 0x40;
      puVar10 = puVar10 + 0x20;
      puVar11 = puVar11 + 0x20;
    } while (iVar8 < (int)(uint)uVar3);
  }
  return 0;
}

