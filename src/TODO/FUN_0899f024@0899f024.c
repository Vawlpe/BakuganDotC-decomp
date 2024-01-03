#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0899f024(int param_1,char param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  
  if (param_2 == '\0') {
    uVar12 = 0;
    iVar11 = 0;
    iVar9 = param_1 + 0x74;
    cVar8 = '\0';
    iVar10 = param_1;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar11);
      if (((uint)*(byte *)(param_1 + 0x10b8) & 1 << (uVar12 & 0x1f)) == 0) {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
        uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar11);
      }
      else {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
        uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar11);
      }
      FUN_089a5408(0x3fc00000,0,uVar3,iVar9,3);
      piVar4 = (int *)(*(int *)(param_1 + 0x1c) + iVar11);
      *(short *)(iVar10 + 0x8a) = (short)(int)*(float *)(*piVar4 + 0x60);
      pfVar5 = (float *)(*piVar4 + 0x60);
      *pfVar5 = *pfVar5 + 64.0;
      *(short *)(iVar10 + 0x88) =
           (short)(int)*(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar11) + 0x60);
      fVar13 = (float)FUN_089a4b3c((float)(int)*(short *)(iVar10 + 0x88),
                                   (float)(int)*(short *)(iVar10 + 0x8a));
      *(char *)(iVar10 + 0x7f) = cVar8;
      uVar12 = uVar12 + 1;
      iVar11 = iVar11 + 4;
      iVar9 = iVar9 + 0x28;
      cVar8 = cVar8 + '\x02';
      *(short *)(iVar10 + 0x8c) = (short)(int)fVar13;
      iVar10 = iVar10 + 0x28;
    } while ((int)uVar12 < 8);
    iVar9 = param_1 + 0x140;
    iVar11 = 8;
    iVar10 = 0x20;
    iVar2 = param_1 + 0x1b4;
    cVar8 = '\0';
    do {
      FUN_089f4a90(0,(float)(uint)*(byte *)(param_1 + iVar11 + 0x10a0),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10));
      uVar12 = 1 << (iVar11 - 8U & 0x1f);
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar10);
      if ((*(byte *)(param_1 + 0x10b8) & uVar12) == 0) {
        *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
        uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10);
      }
      else {
        *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 1;
        uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10);
      }
      FUN_089a5408(0x3fc00000,0,uVar3,iVar2,3);
      piVar4 = (int *)(*(int *)(param_1 + 0x1c) + iVar10);
      *(short *)(iVar9 + 0x8a) = (short)(int)*(float *)(*piVar4 + 0x60);
      pfVar5 = (float *)(*piVar4 + 0x60);
      *pfVar5 = *pfVar5 + 64.0;
      *(short *)(iVar9 + 0x88) =
           (short)(int)*(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar10) + 0x60);
      fVar13 = (float)FUN_089a4b3c((float)(int)*(short *)(iVar9 + 0x88),
                                   (float)(int)*(short *)(iVar9 + 0x8a));
      bVar1 = *(byte *)(param_1 + 0x10b9);
      *(char *)(iVar9 + 0x7f) = cVar8;
      *(short *)(iVar9 + 0x8c) = (short)(int)fVar13;
      if ((bVar1 & uVar12) == 0) {
        iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar10);
        *(undefined4 *)(iVar6 + 0xb0) = 0x3f000000;
        *(undefined4 *)(iVar6 + 0xb4) = 0x3f000000;
        *(undefined4 *)(iVar6 + 0xb8) = 0x3f000000;
        *(undefined4 *)(iVar6 + 0xbc) = 0;
        FUN_089f4a90(0,0x41000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10));
      }
      if ((*(byte *)(param_1 + 0x10ba) & uVar12) != 0) {
        iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar10);
        *(undefined4 *)(iVar6 + 0xb0) = 0x3f000000;
        *(undefined4 *)(iVar6 + 0xb4) = 0x3f000000;
        *(undefined4 *)(iVar6 + 0xb8) = 0x3f000000;
        *(undefined4 *)(iVar6 + 0xbc) = 0;
      }
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 4;
      iVar9 = iVar9 + 0x28;
      iVar2 = iVar2 + 0x28;
      cVar8 = cVar8 + '\x02';
    } while (iVar11 < 0x10);
    iVar11 = 0x10;
    iVar9 = 0x40;
    iVar10 = param_1 + 0x2f4;
    do {
      if (((uint)*(byte *)(param_1 + 0x10b9) & 1 << (iVar11 - 0x10U & 0x1f)) == 0) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
        uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9);
      }
      else {
        iVar2 = FUN_08996448(param_1);
        if (iVar2 == 0) {
          piVar4 = (int *)DONE_Get_DAT_08AAC9E0();
          uVar12 = (uint)*(byte *)(param_1 + iVar11 + 0x1090);
          iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
          if ((int)uVar12 < 0) {
            uVar7 = -(-uVar12 & 7) & 0x1f;
          }
          else {
            uVar7 = uVar12 & 7;
          }
          if (((uint)*(byte *)(*piVar4 + ((int)uVar12 >> 3) + 0x8d) & 1 << uVar7) == 0) {
            *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
            uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9);
          }
          else {
            *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
            uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9);
          }
        }
        else {
          iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
          *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
          uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9);
        }
      }
      FUN_089a5408(0x3fc00000,0,uVar3,iVar10,3);
      iVar11 = iVar11 + 1;
      iVar9 = iVar9 + 4;
      iVar10 = iVar10 + 0x28;
    } while (iVar11 < 0x18);
    iVar11 = 0x2a;
    iVar9 = 0xa8;
    iVar10 = param_1 + 0x704;
    do {
      uVar12 = 1 << ((uint)(&DAT_ffffffd6 + iVar11) & 0x1f);
      if ((*(byte *)(param_1 + 0x10b9) & uVar12) == 0) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
        uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9);
      }
      else {
        iVar2 = FUN_08996448(param_1);
        iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
        if (iVar2 == 0) {
          *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
          uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9);
        }
        else if (*(char *)(param_1 + (uint)*(byte *)(param_1 + iVar11 + 0x1076) + 0x11ae) == '\0') {
          *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
          uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9);
        }
        else if ((*(byte *)(param_1 + 0x10b8) & uVar12) == 0) {
          *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
          uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9);
        }
        else {
          *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 1;
          uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9);
        }
      }
      FUN_089a5408(0x3fc00000,0,uVar3,iVar10,3);
      iVar11 = iVar11 + 1;
      iVar9 = iVar9 + 4;
      iVar10 = iVar10 + 0x28;
    } while (iVar11 < 0x32);
  }
  else {
    iVar2 = 0;
    iVar11 = 0;
    iVar9 = param_1 + 0x74;
    cVar8 = '\0';
    iVar10 = param_1;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar11),iVar9,3);
      piVar4 = (int *)(*(int *)(param_1 + 0x1c) + iVar11);
      *(short *)(iVar10 + 0x8a) = (short)(int)(*(float *)(*piVar4 + 0x60) + 64.0);
      *(short *)(iVar10 + 0x88) = (short)(int)*(float *)(*piVar4 + 0x60);
      fVar13 = (float)FUN_089a4b3c((float)(int)*(short *)(iVar10 + 0x88),
                                   (float)(int)*(short *)(iVar10 + 0x8a));
      *(char *)(iVar10 + 0x7f) = cVar8;
      iVar2 = iVar2 + 1;
      iVar11 = iVar11 + 4;
      iVar9 = iVar9 + 0x28;
      cVar8 = cVar8 + '\x02';
      *(short *)(iVar10 + 0x8c) = (short)(int)fVar13;
      iVar10 = iVar10 + 0x28;
    } while (iVar2 < 8);
    iVar10 = param_1 + 0x140;
    iVar2 = 8;
    iVar11 = 0x20;
    iVar9 = param_1 + 0x1b4;
    cVar8 = '\0';
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar11),iVar9,3);
      piVar4 = (int *)(*(int *)(param_1 + 0x1c) + iVar11);
      *(short *)(iVar10 + 0x8a) = (short)(int)(*(float *)(*piVar4 + 0x60) + 64.0);
      *(short *)(iVar10 + 0x88) = (short)(int)*(float *)(*piVar4 + 0x60);
      fVar13 = (float)FUN_089a4b3c((float)(int)*(short *)(iVar10 + 0x88),
                                   (float)(int)*(short *)(iVar10 + 0x8a));
      *(char *)(iVar10 + 0x7f) = cVar8;
      iVar2 = iVar2 + 1;
      iVar11 = iVar11 + 4;
      iVar9 = iVar9 + 0x28;
      cVar8 = cVar8 + '\x02';
      *(short *)(iVar10 + 0x8c) = (short)(int)fVar13;
      iVar10 = iVar10 + 0x28;
    } while (iVar2 < 0x10);
    iVar11 = 0x10;
    iVar9 = 0x40;
    iVar10 = param_1 + 0x2f4;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9),iVar10,3);
      iVar11 = iVar11 + 1;
      iVar9 = iVar9 + 4;
      iVar10 = iVar10 + 0x28;
    } while (iVar11 < 0x18);
    iVar10 = 0x2a;
    iVar9 = 0xa8;
    iVar11 = param_1 + 0x704;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9),iVar11,3);
      iVar10 = iVar10 + 1;
      iVar9 = iVar9 + 4;
      iVar11 = iVar11 + 0x28;
    } while (iVar10 < 0x32);
  }
  return;
}

