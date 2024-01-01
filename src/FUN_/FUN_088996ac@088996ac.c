#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088996ac(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char **ppcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  
  iVar8 = 0;
  ppcVar6 = *(char ***)(&DAT_08abcfac + *(int *)(param_2 + 8) * 4);
  iVar7 = 0;
  iVar5 = param_1 + *(int *)(param_1 + 0x184) * 0x18;
  do {
    pcVar11 = *ppcVar6;
    iVar9 = *(int *)(param_1 + 0x184);
    *(int *)(iVar5 + 4) = iVar7;
    iVar4 = 0;
    iVar3 = 0;
    do {
      if (*(int *)(pcVar11 + 8) == 0) {
        *(int *)(iVar5 + 0x18) = iVar4;
        *(int *)(param_1 + 0x184) = iVar9 + 1;
        iVar5 = iVar5 + 0x18;
        break;
      }
      if (*pcVar11 != '\0') {
        iVar8 = iVar8 + 1;
      }
      *(undefined2 *)(iVar5 + iVar3 + 8) = *(undefined2 *)(pcVar11 + 2);
      pcVar11 = pcVar11 + 0x18;
      iVar3 = iVar3 + 2;
      iVar4 = iVar4 + 1;
    } while (iVar3 != 0);
    if (iVar8 != 0) {
      pcVar11 = *ppcVar6;
      do {
        iVar10 = *(int *)(param_1 + 0x184);
        *(int *)(iVar5 + 4) = iVar7;
        bVar1 = false;
        iVar9 = 0;
        iVar4 = 0;
        iVar3 = iVar8;
        do {
          if (((!bVar1) && (*pcVar11 != '\0')) && (iVar3 = iVar3 + -1, iVar3 == 0)) {
            bVar1 = true;
          }
          bVar2 = true;
          if (bVar1) {
            if (*(int *)(pcVar11 + 0x10) != 0) {
              *(undefined2 *)(iVar5 + iVar4 + 8) = *(undefined2 *)(pcVar11 + 4);
              bVar2 = false;
            }
          }
          else if (*(int *)(pcVar11 + 8) != 0) {
            *(undefined2 *)(iVar5 + iVar4 + 8) = *(undefined2 *)(pcVar11 + 2);
            bVar2 = false;
          }
          pcVar11 = pcVar11 + 0x18;
          if (bVar2) {
            *(int *)(iVar5 + 0x18) = iVar9;
            *(int *)(param_1 + 0x184) = iVar10 + 1;
            iVar5 = iVar5 + 0x18;
            break;
          }
          iVar4 = iVar4 + 2;
          iVar9 = iVar9 + 1;
        } while (iVar4 != 0);
        iVar8 = iVar8 + -1;
        if (iVar8 == 0) break;
        pcVar11 = *ppcVar6;
      } while( true );
    }
    iVar7 = iVar7 + 1;
    ppcVar6 = ppcVar6 + 1;
    if (5 < iVar7) {
      return;
    }
  } while( true );
}

