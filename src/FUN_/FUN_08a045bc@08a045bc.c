#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

byte FUN_08a045bc(int *param_1,int **param_2,int param_3,int param_4,char **param_5,int param_6)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  int **ppiVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  int *local_30;
  int *local_2c;
  
  piVar6 = *(int **)(param_3 + 0x10);
  bVar10 = 0;
  bVar5 = false;
  iVar11 = 0;
  if (param_1 != (int *)0x0) {
    iVar11 = *param_1;
  }
  *param_2 = (int *)0x0;
  if (piVar6 != (int *)0x0) {
    do {
      iVar7 = *piVar6;
      ppiVar4 = (int **)0x0;
      if (iVar11 != 0) {
        ppiVar4 = (int **)(iVar11 + *(short *)(piVar6 + 1));
      }
      if (param_6 == 0) {
        bVar9 = *(byte *)((int)piVar6 + 6);
        bVar3 = (bVar9 & 4) != 0;
      }
      else {
        pcVar8 = *param_5;
        if (pcVar8 == (char *)0x0) {
          bVar3 = false;
          bVar9 = *(byte *)((int)piVar6 + 6);
        }
        else {
          cVar2 = *pcVar8;
          *param_5 = pcVar8 + 1;
          bVar3 = cVar2 == 'Y';
          bVar9 = *(byte *)((int)piVar6 + 6);
        }
      }
      if ((((iVar7 == param_4) ||
           ((iVar7 = *(int *)(iVar7 + 8), iVar7 == *(int *)(param_4 + 8) && (iVar7 != 0)))) &&
          (bVar5 = (bVar9 & 8) != 0, !bVar5)) && ((bVar3 && (bVar10 = 1, iVar11 != 0)))) {
        if ((bVar9 & 1) == 0) {
          *param_2 = (int *)ppiVar4;
          bVar9 = *(byte *)((int)piVar6 + 6);
        }
        else {
          *param_2 = *ppiVar4;
          bVar9 = *(byte *)((int)piVar6 + 6);
        }
      }
      piVar6 = piVar6 + 2;
    } while ((byte)(bVar5 | bVar10 | bVar9 & 2) == 0);
    if ((bVar5 | bVar10) == 0) {
      piVar6 = *(int **)(param_3 + 0x10);
      do {
        local_30 = (int *)0x0;
        if ((iVar11 != 0) &&
           (local_30 = (int *)(iVar11 + *(short *)(piVar6 + 1)),
           (*(byte *)((int)piVar6 + 6) & 1) != 0)) {
          local_30 = (int *)*local_30;
        }
        bVar5 = true;
        if (param_6 == 0) {
          bVar5 = false;
          if (((*(byte *)((int)piVar6 + 6) & 4) != 0) && ((*(byte *)((int)piVar6 + 6) & 8) == 0)) {
            bVar5 = true;
          }
        }
        if (((*(int *)(*piVar6 + 0x10) != 0) && (bVar5)) &&
           (iVar7 = FUN_08a045bc(&local_30,&local_2c,*piVar6,param_4,param_5,param_6), iVar7 != 0))
        {
          if (iVar11 != 0) {
            *param_2 = local_2c;
          }
          return 1;
        }
        pbVar1 = (byte *)((int)piVar6 + 6);
        piVar6 = piVar6 + 2;
      } while ((*pbVar1 & 2) == 0);
    }
  }
  return bVar10;
}

