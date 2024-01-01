#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e7e30(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  float fVar6;
  float fVar7;
  
  iVar3 = FUN_088e7364(param_1,0);
  if (iVar3 != 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x350);
  if ((((*(byte *)(iVar3 + 0x39) == 0) || (1 < *(byte *)(iVar3 + 0x39))) ||
      (*(char *)(param_1 + 0x390) != '\0')) ||
     (puVar5 = *(uint **)(param_1 + 0x35c), puVar5 == (uint *)0x0)) goto LAB_088e8124;
  uVar4 = *(uint *)(param_1 + 0x360);
  if (*puVar5 <= uVar4) {
    *(undefined4 *)(param_1 + 0x360) = 0;
    *(undefined *)(param_1 + 0x400) = 0;
    uVar4 = 0;
  }
  puVar5 = puVar5 + uVar4 * 2 + 1;
  uVar1 = *(ushort *)puVar5;
  if (4 < uVar1) goto LAB_088e8124;
  if (uVar1 == 1) {
    *(undefined4 *)(param_1 + 0x3a0) = 2;
    *(undefined4 *)(param_1 + 0x3a8) = 0;
    uVar1 = *(ushort *)((int)puVar5 + 2);
    uVar2 = *(ushort *)(puVar5 + 1);
    *(undefined4 *)(param_1 + 0x374) = 0;
    *(undefined4 *)(param_1 + 0x37c) = 0;
    *(float *)(param_1 + 0x370) = (float)(int)(short)uVar1 * 0.2;
    *(float *)(param_1 + 0x378) = (float)(int)(short)uVar2 * 0.2;
    *(float *)(param_1 + 0x410) = (float)(int)(short)*(ushort *)((int)puVar5 + 6) * 0.1 * 0.03333334
    ;
    goto LAB_088e8124;
  }
  if (uVar1 != 2) {
    if (uVar1 != 3) {
      if (uVar1 == 4) {
        if (*(int *)(param_1 + 0x3a0) == 6) {
          *(undefined4 *)(param_1 + 0x3a0) = 6;
          *(undefined4 *)(param_1 + 0x3a8) = 0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x3a0) = 1;
        *(undefined4 *)(param_1 + 0x3a8) = 0;
        *(int *)(param_1 + 0x3b0) = (int)(short)*(ushort *)((int)puVar5 + 2) / 2;
      }
    }
    goto LAB_088e8124;
  }
  *(undefined4 *)(param_1 + 0x3a0) = 3;
  *(undefined4 *)(param_1 + 0x3a8) = 0;
  fVar6 = (float)((short)*(ushort *)((int)puVar5 + 2) + 0x5a) * 0.01745329;
  *(float *)(param_1 + 0x3b4) = fVar6;
  if (3.141593 < fVar6) {
    fVar6 = fVar6 - 6.283185;
    *(float *)(param_1 + 0x3b4) = fVar6;
LAB_088e8008:
    *(float *)(param_1 + 0x3b4) = fVar6;
  }
  else {
    if (fVar6 <= -3.141593) {
      fVar6 = fVar6 + 6.283185;
      *(float *)(param_1 + 0x3b4) = fVar6;
      goto LAB_088e8008;
    }
    *(float *)(param_1 + 0x3b4) = fVar6;
  }
  fVar6 = 30.0;
  if (iVar3 == 0) {
LAB_088e808c:
    iVar3 = (int)(short)*(ushort *)(puVar5 + 1);
  }
  else {
    if ((*(int *)(DAT_08ac58c4 + 4) == 0x11) &&
       ((*(char *)(iVar3 + 0x3b) == -99 || (*(char *)(iVar3 + 0x3b) == -0x61)))) {
      fVar6 = 3.0;
      goto LAB_088e808c;
    }
    if (*(int *)(DAT_08ac58c4 + 4) == 9) {
      if ((*(char *)(iVar3 + 0x3b) == -0x60) || (*(char *)(iVar3 + 0x3b) == -0x61)) {
        fVar6 = 90.0;
        goto LAB_088e808c;
      }
      iVar3 = (int)(short)*(ushort *)(puVar5 + 1);
    }
    else {
      iVar3 = (int)(short)*(ushort *)(puVar5 + 1);
    }
  }
  fVar7 = -((float)iVar3 * 6.283185 * 1.525902e-05 - 1.570796);
  if (3.141593 < fVar7) {
    fVar7 = fVar7 - 6.283185;
  }
  else if (fVar7 <= -3.141593) {
    fVar7 = fVar7 + 6.283185;
  }
  *(float *)(param_1 + 0x424) = fVar7 / fVar6;
LAB_088e8124:
  FUN_088def24(param_1,0,1,0);
  return;
}

