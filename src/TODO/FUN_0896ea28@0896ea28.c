#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x0896eb14)

void FUN_0896ea28(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 in_V7C;
  undefined4 local_50 [14];
  
  iVar10 = 0;
  memcpy_jak(local_50,&DAT_08ac34b0,0x30);
  if (*(char *)(param_1 + 0x2a72) == '\0') {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x74);
  if (*(char *)(param_1 + 0x29bd) < '\x03') {
    iVar4 = 2;
    if ('\0' < (char)bVar1) {
      if ((char)bVar1 < '\x03') {
        iVar10 = 0xff;
      }
      else {
        if ('\x03' < (char)bVar1) {
          bVar7 = *(byte *)(param_1 + 0x2a70);
          goto LAB_0896eb0c;
        }
        iVar10 = 1;
      }
      goto LAB_0896eb08;
    }
    if (-1 < (char)bVar1) {
      iVar10 = 0;
      goto LAB_0896eb08;
    }
    bVar7 = *(byte *)(param_1 + 0x2a70);
  }
  else {
    iVar4 = 4;
    if (bVar1 < 6) {
      if (bVar1 == 1) {
        iVar10 = 1;
      }
      else if ((bVar1 == 2) || (bVar1 == 3)) {
        iVar10 = 0xff;
      }
      else if (bVar1 == 4) {
        iVar10 = 2;
      }
      else if (bVar1 == 5) {
        iVar10 = 3;
      }
      else {
        iVar10 = 0;
      }
    }
LAB_0896eb08:
    bVar7 = *(byte *)(param_1 + 0x2a70);
  }
LAB_0896eb0c:
  if (bVar7 == 0) {
    uVar5 = (uint)*(byte *)(param_1 + 0x2b94);
    if ((int)uVar5 < (int)(uVar5 + (int)*(char *)(param_1 + 0x2b95))) {
      iVar9 = uVar5 << 2;
      uVar8 = uVar5;
      do {
        iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
        uVar8 = uVar8 + 1;
        *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
        uVar5 = (uint)*(byte *)(param_1 + 0x2b94);
        iVar9 = iVar9 + 4;
      } while ((int)uVar8 < (int)(uVar5 + (int)*(char *)(param_1 + 0x2b95)));
    }
    cVar2 = *(char *)(param_1 + 0x77);
    if (cVar2 < '\x01') {
      if (cVar2 < '\0') {
        uVar3 = *(undefined *)(param_1 + 0x77);
        goto LAB_0896efe4;
      }
      if (iVar10 == 0xff) {
        uVar3 = *(undefined *)(param_1 + 0x77);
        goto LAB_0896efe4;
      }
      *(undefined *)(param_1 + 0x2a71) = 0;
      iVar9 = *(int *)(*(int *)(param_1 + 0x1c) +
                      (uVar5 + iVar4 * (uint)*(byte *)(param_1 + 0x2a71) + iVar10) * 4);
      *(uint *)(iVar9 + 0xd0) = *(uint *)(iVar9 + 0xd0) | 1;
      iVar9 = *(int *)(*(int *)(param_1 + 0x1c) +
                      ((uint)*(byte *)(param_1 + 0x2b94) + iVar4 * (uint)*(byte *)(param_1 + 0x2a71)
                      + iVar10) * 4);
      uVar11 = local_50[iVar10 * 3 + 1];
      uVar13 = local_50[iVar10 * 3 + 2];
      *(undefined4 *)(iVar9 + 0xb0) = local_50[iVar10 * 3];
      *(undefined4 *)(iVar9 + 0xb4) = uVar11;
      *(undefined4 *)(iVar9 + 0xb8) = uVar13;
      *(undefined4 *)(iVar9 + 0xbc) = 0x3ecccccd;
      uVar11 = *(undefined4 *)
                (*(int *)(*(int *)(param_1 + 0x1c) +
                         ((uint)*(byte *)(param_1 + 0x2b94) +
                          iVar4 * (uint)*(byte *)(param_1 + 0x2a71) + iVar10) * 4) + 0xbc);
      *(undefined4 *)(param_1 + 0x2a80) = 0;
      *(undefined4 *)(param_1 + 0x2a78) = uVar11;
      *(undefined *)(param_1 + 0x2a70) = 1;
    }
    else if (cVar2 < '\x02') {
      *(undefined *)(param_1 + 0x2a71) = 1;
      iVar9 = *(int *)(*(int *)(param_1 + 0x1c) +
                      (uVar5 + iVar4 * (uint)*(byte *)(param_1 + 0x2a71) + iVar10) * 4);
      *(uint *)(iVar9 + 0xd0) = *(uint *)(iVar9 + 0xd0) | 1;
      iVar9 = *(int *)(*(int *)(param_1 + 0x1c) +
                      ((uint)*(byte *)(param_1 + 0x2b94) + iVar4 * (uint)*(byte *)(param_1 + 0x2a71)
                      + iVar10) * 4);
      uVar11 = local_50[iVar10 * 3 + 1];
      uVar13 = local_50[iVar10 * 3 + 2];
      *(undefined4 *)(iVar9 + 0xb0) = local_50[iVar10 * 3];
      *(undefined4 *)(iVar9 + 0xb4) = uVar11;
      *(undefined4 *)(iVar9 + 0xb8) = uVar13;
      *(undefined4 *)(iVar9 + 0xbc) = 0x3f4ccccd;
      uVar11 = *(undefined4 *)
                (*(int *)(*(int *)(param_1 + 0x1c) +
                         ((uint)*(byte *)(param_1 + 0x2b94) +
                          iVar4 * (uint)*(byte *)(param_1 + 0x2a71) + iVar10) * 4) + 0xbc);
      *(undefined4 *)(param_1 + 0x2a80) = 0;
      *(undefined4 *)(param_1 + 0x2a78) = uVar11;
      *(undefined *)(param_1 + 0x2a70) = 2;
    }
    else if (cVar2 < '\x03') {
      *(undefined *)(param_1 + 0x2a71) = 2;
      iVar9 = *(int *)(*(int *)(param_1 + 0x1c) +
                      (uVar5 + iVar4 * (uint)*(byte *)(param_1 + 0x2a71) + iVar10) * 4);
      *(uint *)(iVar9 + 0xd0) = *(uint *)(iVar9 + 0xd0) | 1;
      iVar9 = *(int *)(*(int *)(param_1 + 0x1c) +
                      ((uint)*(byte *)(param_1 + 0x2b94) + iVar4 * (uint)*(byte *)(param_1 + 0x2a71)
                      + iVar10) * 4);
      uVar11 = local_50[iVar10 * 3 + 1];
      uVar13 = local_50[iVar10 * 3 + 2];
      *(undefined4 *)(iVar9 + 0xb0) = local_50[iVar10 * 3];
      *(undefined4 *)(iVar9 + 0xb4) = uVar11;
      *(undefined4 *)(iVar9 + 0xb8) = uVar13;
      *(undefined4 *)(iVar9 + 0xbc) = 0x3f4ccccd;
      uVar11 = *(undefined4 *)
                (*(int *)(*(int *)(param_1 + 0x1c) +
                         ((uint)*(byte *)(param_1 + 0x2b94) +
                          iVar4 * (uint)*(byte *)(param_1 + 0x2a71) + iVar10) * 4) + 0xbc);
      *(undefined4 *)(param_1 + 0x2a80) = 0;
      *(undefined4 *)(param_1 + 0x2a78) = uVar11;
      *(undefined *)(param_1 + 0x2a70) = 3;
    }
  }
  else if (bVar7 < 2) {
    if ((*(char *)(param_1 + 0x78) == *(char *)(param_1 + 0x77)) &&
       (*(byte *)(param_1 + 0x76) == bVar1)) {
      fVar12 = *(float *)(param_1 + 0x2a80) + 0.03333334;
      *(float *)(param_1 + 0x2a80) = fVar12;
      uVar11 = vmul_s(fVar12 * 3.141593,in_V7C);
      fVar12 = (float)vcos_s(uVar11);
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) +
                         ((uint)*(byte *)(param_1 + 0x2b94) +
                          iVar4 * (uint)*(byte *)(param_1 + 0x2a71) + iVar10) * 4) + 0xbc) =
           *(float *)(param_1 + 0x2a78) - (1.0 - fVar12) * 0.5 * 0.4;
    }
    else {
      *(undefined *)(param_1 + 0x2a70) = 0;
    }
  }
  else {
    if (3 < bVar7) {
      uVar3 = *(undefined *)(param_1 + 0x77);
      goto LAB_0896efe4;
    }
    if (*(char *)(param_1 + 0x78) == *(char *)(param_1 + 0x77)) {
      fVar12 = *(float *)(param_1 + 0x2a80) + 0.03333334;
      *(float *)(param_1 + 0x2a80) = fVar12;
      uVar11 = vmul_s(fVar12 * 3.141593,in_V7C);
      fVar12 = (float)vcos_s(uVar11);
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) +
                         ((uint)*(byte *)(param_1 + 0x2b94) +
                          iVar4 * (uint)*(byte *)(param_1 + 0x2a71) + iVar10) * 4) + 0xbc) =
           *(float *)(param_1 + 0x2a78) - (1.0 - fVar12) * 0.5 * 0.8;
    }
    else {
      *(undefined *)(param_1 + 0x2a70) = 0;
    }
  }
  uVar3 = *(undefined *)(param_1 + 0x77);
LAB_0896efe4:
  *(undefined *)(param_1 + 0x78) = uVar3;
  *(undefined *)(param_1 + 0x76) = *(undefined *)(param_1 + 0x74);
  return;
}

