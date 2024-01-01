#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08936f20(int param_1)

{
  float *pfVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  undefined uVar5;
  int iVar6;
  int iVar7;
  undefined uVar8;
  int *piVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  
  cVar10 = '\0';
  if (*(char *)(param_1 + 0x1a68) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x1a68) == '\x01') {
    iVar7 = (int)*(char *)(param_1 + 0x76);
    bVar3 = false;
    if (*(char *)(param_1 + 0x77) == iVar7) {
      if (*(char *)(param_1 + 0x74) != *(char *)(param_1 + 0x75)) {
        if (*(char *)(param_1 + 0x74) == '\0') {
          if (*(char *)(param_1 + iVar7 + 0x19f8) == -1) {
            bVar3 = true;
          }
          else {
            *(undefined *)(param_1 + 0x1a69) = 1;
          }
        }
        else {
          bVar3 = true;
        }
      }
    }
    else if (*(char *)(param_1 + iVar7 + 0x19f8) == -1) {
      bVar3 = true;
    }
    else {
      *(undefined *)(param_1 + 0x1a69) = 1;
    }
    iVar7 = 0x13;
    if (bVar3) {
      iVar11 = 0x4c;
      do {
        iVar12 = *(int *)(*(int *)(param_1 + 0x1c) + iVar11);
        *(uint *)(iVar12 + 0xd0) = *(uint *)(iVar12 + 0xd0) & 0xfffffffe;
        iVar7 = iVar7 + 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar11) + 0xbc) = 0;
        iVar11 = iVar11 + 4;
      } while (iVar7 < 0x14);
      iVar11 = 0x2e;
      iVar7 = 0xb8;
      do {
        iVar12 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
        *(uint *)(iVar12 + 0xd0) = *(uint *)(iVar12 + 0xd0) & 0xfffffffe;
        iVar11 = iVar11 + 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0xbc) = 0;
        iVar7 = iVar7 + 4;
      } while (iVar11 < 0x2f);
      *(undefined4 *)(param_1 + 0xcb4) = 0;
      *(undefined4 *)(param_1 + 0xed8) = 0;
      *(undefined4 *)(param_1 + 0xcb8) = 0x3f800000;
      *(undefined4 *)(param_1 + 0xedc) = 0x3f800000;
      *(undefined *)(param_1 + 0x1a69) = 0;
    }
  }
  else {
    if (2 < *(byte *)(param_1 + 0x1a69)) {
      bVar2 = *(byte *)(param_1 + 0x1a69);
      goto LAB_089370bc;
    }
    uVar5 = 5;
    if (*(char *)(param_1 + *(char *)(param_1 + 0x76) + 0x19f8) != -1) {
      uVar5 = 3;
    }
    *(undefined *)(param_1 + 0x1a69) = uVar5;
  }
  bVar2 = *(byte *)(param_1 + 0x1a69);
LAB_089370bc:
  if (bVar2 < 5) {
    if (bVar2 == 1) {
      iVar13 = 0x13;
      iVar12 = 0x4c;
      iVar11 = param_1 + 0x98;
      iVar7 = param_1 + 0x370;
      do {
        iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
        *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar12) + 0xbc) = 0;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar12) + 0x128) = 2;
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar12) + 0x60) =
             *(float *)(iVar11 + 0xac8) + 64.0;
        iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
        FUN_089a54cc(0x3f800000,0,*(float *)(iVar11 + 0xac8) - *(float *)(iVar6 + 0x60),0,iVar6,
                     iVar7,7);
        iVar13 = iVar13 + 1;
        iVar12 = iVar12 + 4;
        iVar11 = iVar11 + 8;
        iVar7 = iVar7 + 0x28;
      } while (iVar13 < 0x14);
      iVar13 = 0x2e;
      iVar12 = 0xb8;
      iVar11 = param_1 + 0x170;
      iVar7 = param_1 + 0x7a8;
      do {
        iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
        *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar12) + 0xbc) = 0;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar12) + 0x128) = 2;
        FUN_08932898(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar12),
                     *(undefined *)(param_1 + *(char *)(param_1 + 0x76) + 0x19f8));
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar12) + 0x60) =
             *(float *)(iVar11 + 0xac8) + 64.0;
        iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
        FUN_089a54cc(0x3f800000,0,*(float *)(iVar11 + 0xac8) - *(float *)(iVar6 + 0x60),0,iVar6,
                     iVar7,7);
        iVar13 = iVar13 + 1;
        iVar12 = iVar12 + 4;
        iVar11 = iVar11 + 8;
        iVar7 = iVar7 + 0x28;
      } while (iVar13 < 0x2f);
      iVar12 = 0x36;
      iVar11 = 0xd8;
      iVar7 = param_1 + 0x1b0;
      do {
        iVar12 = iVar12 + 1;
        piVar9 = (int *)(*(int *)(param_1 + 0x1c) + iVar11);
        iVar11 = iVar11 + 4;
        *(float *)(*piVar9 + 0x60) = *(float *)(iVar7 + 0xac8) + 64.0;
        iVar7 = iVar7 + 8;
      } while (iVar12 < 0x37);
      FUN_08934a98(param_1,*(undefined *)(param_1 + *(char *)(param_1 + 0x76) + 0x19f8));
      FUN_08934bf4(param_1,*(undefined *)(param_1 + *(char *)(param_1 + 0x76) + 0x19f8));
      uVar5 = *(undefined *)(param_1 + 0x76);
      *(char *)(param_1 + 0x1a69) = *(char *)(param_1 + 0x1a69) + '\x01';
      uVar8 = *(undefined *)(param_1 + 0x74);
    }
    else if (bVar2 == 2) {
      iVar13 = 0x13;
      iVar7 = *(int *)(param_1 + 0x1c);
      iVar12 = 0x4c;
      iVar11 = param_1 + 0x370;
      do {
        cVar4 = FUN_089a91a0(0x3f800000,0x3f800000,0x41800000,0,*(undefined4 *)(iVar7 + iVar12),
                             iVar11,5);
        cVar10 = cVar10 + cVar4;
        iVar13 = iVar13 + 1;
        iVar12 = iVar12 + 4;
        iVar11 = iVar11 + 0x28;
        iVar7 = *(int *)(param_1 + 0x1c);
      } while (iVar13 < 0x14);
      iVar13 = 0x2e;
      iVar12 = 0xb8;
      iVar11 = param_1 + 0x7a8;
      do {
        cVar4 = FUN_089a91a0(0x3f800000,0x3f800000,0x41800000,0,*(undefined4 *)(iVar7 + iVar12),
                             iVar11,5);
        cVar10 = cVar10 + cVar4;
        iVar13 = iVar13 + 1;
        iVar12 = iVar12 + 4;
        iVar11 = iVar11 + 0x28;
        iVar7 = *(int *)(param_1 + 0x1c);
      } while (iVar13 < 0x2f);
      *(undefined4 *)(param_1 + 0xcb4) = *(undefined4 *)(*(int *)(iVar7 + 0xb8) + 0xbc);
      iVar13 = 0;
      iVar11 = param_1;
      iVar12 = *(int *)(param_1 + 0xcd0);
      if (0.0 < *(float *)(param_1 + 0xcbc)) {
        do {
          fVar14 = *(float *)(param_1 + 0x7c4) - 1.0;
          pfVar1 = (float *)(iVar11 + 0x10f8);
          iVar13 = iVar13 + 1;
          iVar11 = iVar11 + 4;
          *(float *)(iVar12 + 0x60) = *pfVar1 - (1.0 - fVar14 * fVar14) * 64.0;
          iVar12 = *(int *)(iVar12 + 4);
        } while ((float)iVar13 < *(float *)(param_1 + 0xcbc));
        iVar7 = *(int *)(param_1 + 0x1c);
      }
      *(undefined4 *)(param_1 + 0xed8) = *(undefined4 *)(*(int *)(iVar7 + 0xb8) + 0xbc);
      iVar12 = 0;
      iVar7 = *(int *)(param_1 + 0xef4);
      iVar11 = param_1;
      if (0.0 < *(float *)(param_1 + 0xee0)) {
        do {
          fVar14 = *(float *)(param_1 + 0x7c4) - 1.0;
          pfVar1 = (float *)(iVar11 + 0x11f8);
          iVar12 = iVar12 + 1;
          iVar11 = iVar11 + 4;
          *(float *)(iVar7 + 0x60) = *pfVar1 - (1.0 - fVar14 * fVar14) * 64.0;
          iVar7 = *(int *)(iVar7 + 4);
        } while ((float)iVar12 < *(float *)(param_1 + 0xee0));
      }
      uVar5 = *(undefined *)(param_1 + 0x76);
      uVar8 = *(undefined *)(param_1 + 0x74);
      if (cVar10 != '\0') {
        *(undefined *)(param_1 + 0x1a69) = 0;
      }
    }
    else if (bVar2 == 3) {
      iVar12 = 0x13;
      iVar11 = 0x4c;
      iVar7 = param_1 + 0x370;
      do {
        FUN_089a5408(0x3f800000,1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar11),iVar7,1);
        iVar12 = iVar12 + 1;
        iVar11 = iVar11 + 4;
        iVar7 = iVar7 + 0x28;
      } while (iVar12 < 0x14);
      iVar12 = 0x2e;
      iVar11 = 0xb8;
      iVar7 = param_1 + 0x7a8;
      do {
        FUN_089a5408(0x3f800000,1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar11),iVar7,1);
        iVar12 = iVar12 + 1;
        iVar11 = iVar11 + 4;
        iVar7 = iVar7 + 0x28;
      } while (iVar12 < 0x2f);
      uVar5 = *(undefined *)(param_1 + 0x76);
      *(char *)(param_1 + 0x1a69) = *(char *)(param_1 + 0x1a69) + '\x01';
      uVar8 = *(undefined *)(param_1 + 0x74);
    }
    else if (bVar2 == 4) {
      iVar13 = 0x13;
      iVar7 = *(int *)(param_1 + 0x1c);
      iVar12 = 0x4c;
      iVar11 = param_1 + 0x370;
      do {
        cVar4 = FUN_089a91a0(0x3f800000,0x3f800000,0x41800000,1,*(undefined4 *)(iVar7 + iVar12),
                             iVar11,1);
        cVar10 = cVar10 + cVar4;
        iVar13 = iVar13 + 1;
        iVar12 = iVar12 + 4;
        iVar11 = iVar11 + 0x28;
        iVar7 = *(int *)(param_1 + 0x1c);
      } while (iVar13 < 0x14);
      iVar11 = 0x2e;
      iVar12 = 0xb8;
      iVar13 = param_1 + 0x7a8;
      do {
        cVar4 = FUN_089a91a0(0x3f800000,0x3f800000,0x41800000,1,*(undefined4 *)(iVar7 + iVar12),
                             iVar13,1);
        cVar10 = cVar10 + cVar4;
        iVar11 = iVar11 + 1;
        iVar12 = iVar12 + 4;
        iVar13 = iVar13 + 0x28;
        iVar7 = *(int *)(param_1 + 0x1c);
      } while (iVar11 < 0x2f);
      *(undefined4 *)(param_1 + 0xcb4) = *(undefined4 *)(*(int *)(iVar7 + 0xb8) + 0xbc);
      uVar5 = *(undefined *)(param_1 + 0x76);
      uVar8 = *(undefined *)(param_1 + 0x74);
      *(undefined4 *)(param_1 + 0xed8) = *(undefined4 *)(*(int *)(iVar7 + 0xb8) + 0xbc);
      if (cVar10 != '\0') {
        *(undefined *)(param_1 + 0x1a69) = 5;
      }
    }
    else {
      uVar5 = *(undefined *)(param_1 + 0x76);
      uVar8 = *(undefined *)(param_1 + 0x74);
    }
  }
  else {
    *(undefined *)(param_1 + 0x1a68) = 0;
    uVar5 = *(undefined *)(param_1 + 0x76);
    uVar8 = *(undefined *)(param_1 + 0x74);
  }
  *(undefined *)(param_1 + 0x77) = uVar5;
  *(undefined *)(param_1 + 0x75) = uVar8;
  return;
}

