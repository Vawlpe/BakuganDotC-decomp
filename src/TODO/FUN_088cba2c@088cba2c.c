#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_088cba2c(int param_1,float *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int local_50;
  float local_4c;
  undefined local_48;
  float *local_44;
  
  iVar6 = *(int *)(param_1 + 0x5c);
  local_48 = 0;
  fVar13 = 0.0;
  local_4c = 0.0;
  fVar11 = 0.0;
  fVar10 = 24.0;
  bVar3 = false;
  bVar2 = false;
  iVar8 = 0;
  iVar7 = 0;
  fVar12 = 0.0;
  bVar4 = false;
  local_44 = param_2;
LAB_088cbac4:
  do {
    do {
      while( true ) {
        if (fVar13 < fVar10) {
          fVar13 = fVar10;
        }
        if (local_4c < fVar11) {
          local_4c = fVar11;
        }
        local_50 = 0;
        if (bVar2) {
          iVar5 = FUN_08818370(iVar8,&local_50);
          iVar8 = iVar8 + local_50;
        }
        else {
          iVar5 = FUN_08818370(iVar6,&local_50);
          iVar6 = iVar6 + local_50;
        }
        if ((iVar5 != -0xc) && (iVar5 != -0xb)) break;
        iVar6 = iVar6 + 1;
      }
      if (*(int *)(param_1 + 0x1ec) < 1) {
        bVar1 = iVar5 < -5;
      }
      else {
        if (iVar5 == -3) {
          bVar1 = false;
          if (iVar7 + 1 < *(int *)(param_1 + 0x1ec)) goto LAB_088cbb6c;
          iVar5 = -4;
        }
        bVar1 = iVar5 < -5;
      }
LAB_088cbb6c:
    } while ((bVar1) && (-0xb < iVar5));
    if (iVar5 != -1) {
      if (iVar5 != -3) {
        if (iVar5 == -4) {
          iVar7 = 0;
          if (*(char *)(param_1 + 0x78) != '\0') {
            fVar10 = fVar12 + 24.0;
            fVar11 = fVar11 + *(float *)(param_1 + 0x54);
            goto LAB_088cbac4;
          }
          fVar11 = 0.0;
          fVar10 = fVar12 + 24.0;
          if ((*(char *)(param_1 + 0x7a) != '\0') && (bVar4)) {
            fVar11 = *(float *)(param_1 + 0x54) + 4.0 + 0.0;
          }
        }
        else {
          if (((iVar5 < -0xc) && (-0x10 < iVar5)) || (iVar5 == -0x13)) {
            bVar2 = true;
            goto LAB_088cbac4;
          }
          if (iVar5 == -0x10) {
            bVar3 = true;
            local_48 = 1;
            bVar4 = bVar3;
            goto LAB_088cbac4;
          }
          if (iVar5 == -0x12) goto LAB_088cbac4;
        }
        if (iVar5 != -2) {
          fVar9 = *(float *)(param_1 + 0x50);
          if (iVar5 == -0x11) {
            fVar10 = fVar10 + fVar9;
          }
          else if (iVar5 == -5) {
            fVar10 = fVar10 + fVar9 * 0.5;
          }
          else {
            fVar10 = fVar10 + fVar9;
          }
        }
        goto LAB_088cbac4;
      }
      if (bVar2) {
        bVar2 = false;
      }
      if (bVar3) {
        bVar3 = false;
        if (*(char *)(param_1 + 0x7a) != '\0') {
          fVar11 = fVar11 + 4.0;
        }
        fVar12 = 16.0;
        fVar9 = *(float *)(param_1 + 0x54);
      }
      else {
        fVar9 = *(float *)(param_1 + 0x54);
      }
      fVar10 = fVar12 + 24.0;
      iVar7 = iVar7 + 1;
      fVar11 = fVar11 + fVar9;
      goto LAB_088cbac4;
    }
    if (!bVar2) {
      if (fVar13 < fVar10) {
        fVar13 = fVar10;
      }
      if (local_4c < fVar11) {
        local_4c = fVar11;
      }
      *local_44 = fVar13;
      local_44[1] = local_4c;
      local_44[2] = 0.0;
      local_44[3] = 0.0;
      return local_48;
    }
    bVar2 = false;
    if ((bVar3) && (bVar3 = false, fVar12 = 16.0, *(char *)(param_1 + 0x7a) != '\0')) {
      fVar11 = fVar11 + 4.0;
    }
  } while( true );
}

