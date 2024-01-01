#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c07dc(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined auStack_50 [16];
  int *local_40;
  undefined4 local_3c;
  
  fVar10 = 0.0;
  local_3c = param_1;
  FUN_08a2e7a4(auStack_50,0);
  bVar2 = true;
  if ((DAT_08ac5264 != 0) && (DAT_08ac525c != 0)) {
    FUN_08a2e348(DAT_08ac525c);
    FUN_08a2deec(DAT_08ac525c);
    iVar8 = -1;
    iVar7 = 0;
    iVar3 = FUN_08a2e584(DAT_08ac525c);
    if (iVar3 != 0) {
      local_40 = &DAT_08aa12f8;
      do {
        bVar1 = false;
        piVar4 = (int *)FUN_08a2df18(DAT_08ac525c);
        if (piVar4 == (int *)0x0) {
          bVar1 = true;
        }
        else if (iVar8 != *piVar4) {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_08a2e348(DAT_08ac5264);
          iVar3 = FUN_08a2e584(DAT_08ac5264);
          iVar8 = DAT_08ac5264;
          if (iVar3 != 0) {
            while (iVar3 = FUN_08a2df18(iVar8), iVar8 = DAT_08ac5264, iVar3 != 0) {
              *(undefined *)(iVar3 + 0x30) = 0;
              *(int *)(iVar3 + 0x3c) = iVar7;
              *(float *)(iVar3 + 0x44) = fVar10;
            }
          }
          FUN_08a2e240(DAT_08ac5264);
          fVar10 = 0.0;
          iVar7 = 0;
          if (piVar4 == (int *)0x0) {
            bVar2 = false;
            iVar8 = -1;
          }
          else {
            iVar5 = 0;
            iVar3 = *piVar4;
            piVar6 = local_40;
            do {
              if ((*piVar6 <= iVar3) && (iVar8 = iVar3, iVar3 <= piVar6[1])) break;
              iVar5 = iVar5 + 1;
              piVar6 = piVar6 + 3;
              iVar8 = -1;
            } while (iVar5 < 1);
          }
        }
        if ((((-1 < iVar8) && (*piVar4 == iVar8)) && (*(int *)(piVar4[3] + 8) == 1)) &&
           (*(char *)((int)piVar4 + 0x31) == '\0')) {
          if (-1 < piVar4[0xe]) {
            iVar7 = iVar7 + 1;
            fVar10 = fVar10 + (float)piVar4[0x10];
          }
          if (piVar4[1] == -1) {
            *(undefined *)(piVar4 + 0xc) = 1;
          }
          if ((int *)piVar4[2] != (int *)0x0) {
            piVar4[4] = *(int *)piVar4[2];
            piVar4[5] = *(int *)(piVar4[2] + 4);
            piVar4[6] = *(int *)(piVar4[2] + 8);
          }
          fVar9 = (float)FUN_089c0698(local_3c,piVar4 + 4);
          iVar3 = 0x7fffffff;
          if (fVar9 != INFINITY) {
            iVar3 = (int)fVar9;
          }
          FUN_08a2df9c(DAT_08ac5264,piVar4,iVar3);
        }
      } while (bVar2);
    }
  }
  FUN_08a2e8ec(auStack_50,2);
  return;
}

