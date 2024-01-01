#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08926530(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  
  bVar1 = *(byte *)(param_1 + 0x2294);
  if (bVar1 == 0) {
    fVar10 = *(float *)(param_1 + 0x2210);
    bVar1 = *(byte *)(param_1 + 0x2137);
    iVar7 = (*(char *)(param_1 + 0x78) + 0x6c) * 4;
    iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
    *(uint *)(iVar8 + 0xd0) = *(uint *)(iVar8 + 0xd0) | 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0xbc) = 0x3f800000;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0x60) =
         *(float *)(param_1 + 0x220c) - *(float *)(param_1 + 0x2214);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 100) =
         (float)((int)(fVar10 - (float)((uint)bVar1 * 0xd + -0xd)) +
                *(char *)(param_1 + 0x78) * 0x1a) - *(float *)(param_1 + 0x2218);
    iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4 + 0x1d0);
    *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
    iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4 + 0x1c0);
    *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
    iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4 + 0x1e0);
    *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
    iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4 + 0x20);
    *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
    *(char *)(param_1 + 0x2294) = *(char *)(param_1 + 0x2294) + '\x01';
  }
  else if (bVar1 < 2) {
    piVar6 = (int *)FUN_0880cc48();
    *(undefined *)(*piVar6 + (uint)*(byte *)(param_1 + 0x78) + 0x84) = 0;
    iVar7 = *(char *)(param_1 + 0x78) + 0xa6;
    FUN_089a5408(0x3f800000,1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7 * 4),
                 param_1 + iVar7 * 0x28 + 0x7c,3);
    iVar7 = *(char *)(param_1 + 0x78) + 0x41;
    FUN_089a5408(0x3f800000,1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7 * 4),
                 param_1 + iVar7 * 0x28 + 0x7c,3);
    iVar8 = *(char *)(param_1 + 0x78) + 0x62;
    iVar9 = iVar8 * 4;
    iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
    *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar9) + 0xbc) = 0;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar9) + 0x128) = 2;
    FUN_089a51fc(0,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9));
    iVar7 = *(char *)(param_1 + 0x78) + 1;
    FUN_089f4a90((float)(iVar7 / 5),(float)(iVar7 % 5),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9));
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar9) + 0x60) =
         (float)((int)*(short *)(param_1 + *(char *)(param_1 + 0x78) * 4 + 0x2154) << 3);
    iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9);
    *(float *)(iVar7 + 100) =
         (float)(*(short *)(param_1 + *(char *)(param_1 + 0x78) * 4 + 0x2156) * 8 + 0x10) -
         *(float *)(param_1 + 0x21b4) * *(float *)(iVar7 + 0x90);
    iVar7 = *(short *)(param_1 + *(char *)(param_1 + 0x78) * 4 + 0x2156) * 8;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar9) + 0x68) =
         (float)(((int)(iVar7 + ((uint)(iVar7 >> 3) >> 0x1d)) >> 3) * -7 + -1);
    FUN_089a5408(0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9),param_1 + iVar8 * 0x28 + 0x7c
                 ,3);
    *(char *)(param_1 + 0x2294) = *(char *)(param_1 + 0x2294) + '\x01';
  }
  else {
    if (2 < bVar1) {
      return 1;
    }
    iVar7 = *(char *)(param_1 + 0x78) + 0xa6;
    iVar8 = iVar7 * 4;
    cVar2 = FUN_089a91a0(0x3f800000,0,0x41f00000,1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8)
                         ,param_1 + iVar7 * 0x28 + 0x7c,3);
    iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
    *(float *)(iVar7 + 100) =
         (float)(*(short *)(param_1 + *(char *)(param_1 + 0x78) * 4 + 0x2156) * 8 + 0x10) -
         *(float *)(param_1 + 0x21a4) * *(float *)(iVar7 + 0x90);
    iVar7 = *(char *)(param_1 + 0x78) + 0x41;
    iVar8 = iVar7 * 4;
    cVar3 = FUN_089a91a0(0x3f800000,0,0x41f00000,1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8)
                         ,param_1 + iVar7 * 0x28 + 0x7c,3);
    iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
    *(float *)(iVar7 + 0x60) =
         (float)((int)*(short *)(param_1 + *(char *)(param_1 + 0x78) * 4 + 0x2154) << 3) -
         *(float *)(param_1 + 0x21a8) * *(float *)(iVar7 + 0x90);
    iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
    *(float *)(iVar7 + 100) =
         (float)(*(short *)(param_1 + *(char *)(param_1 + 0x78) * 4 + 0x2156) * 8 + 0x10) -
         *(float *)(param_1 + 0x21ac) * *(float *)(iVar7 + 0x90);
    iVar7 = *(char *)(param_1 + 0x78) + 0x62;
    iVar8 = iVar7 * 4;
    cVar4 = FUN_089a91a0(0,0x3f800000,0x41f00000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8)
                         ,param_1 + iVar7 * 0x28 + 0x7c,3);
    iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
    *(float *)(iVar7 + 100) =
         (float)(*(short *)(param_1 + *(char *)(param_1 + 0x78) * 4 + 0x2156) * 8 + 0x10) -
         *(float *)(param_1 + 0x21b4) * *(float *)(iVar7 + 0x90);
    cVar5 = FUN_08921fac(param_1,1);
    if ((char)(cVar2 + cVar3 + cVar4 + cVar5) == '\x04') {
      *(undefined *)(param_1 + 0x2294) = 3;
    }
  }
  return 0;
}

