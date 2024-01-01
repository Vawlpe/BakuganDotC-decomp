#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089eac40(undefined *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  undefined *puVar11;
  int local_20;
  
  local_20 = 0;
  cVar1 = *param_2;
  puVar11 = param_1 + 1;
  do {
    if (cVar1 == '\0') {
      *param_1 = 0;
      return local_20;
    }
    iVar3 = FUN_08818370(param_2,&local_20);
    iVar8 = 0;
    pbVar5 = &DAT_08aa3538;
    iVar10 = 0;
    do {
      iVar4 = 1;
      if (((int)(char)*pbVar5 & 0x80U) != 0) {
        uVar6 = (uint)*pbVar5;
        uVar2 = uVar6;
        while (uVar2 != 0) {
          uVar2 = uVar6 & 0x7f;
          uVar6 = uVar2 << 1;
          if ((uVar6 & 0x80) == 0) break;
          iVar4 = iVar4 + 1;
        }
      }
      iVar7 = 0;
      if (iVar10 == iVar3) {
        puVar9 = param_1;
        if (0 < iVar4) {
          do {
            param_1 = puVar11;
            iVar7 = iVar7 + 1;
            *puVar9 = (&DAT_08aa3538)[iVar8];
            iVar8 = iVar8 + 1;
            puVar11 = param_1 + 1;
            puVar9 = param_1;
          } while (iVar7 < iVar4);
        }
        break;
      }
      iVar8 = iVar4 + iVar8;
      pbVar5 = &DAT_08aa3538 + iVar8;
      iVar10 = iVar10 + 1;
    } while (iVar8 < 0x278);
    cVar1 = param_2[local_20];
  } while( true );
}

