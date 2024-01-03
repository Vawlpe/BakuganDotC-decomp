#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089278f0(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  
  if (*(byte *)(param_1 + 0x2294) == 0) {
    piVar7 = (int *)DONE_Get_DAT_08AAC9E0();
    uVar9 = (uint)*(byte *)(param_1 + 0x78);
    cVar2 = FUN_0891c54c(0,*(undefined *)(param_1 + *(char *)(param_1 + 0x79) + 0x224e));
    *(char *)(*piVar7 + (uVar9 & 0xff) + 0x84) = cVar2 * '\x03' + *(char *)(param_1 + 0x76) + '\x0e'
    ;
    iVar10 = *(char *)(param_1 + 0x78) + 0xa6;
    iVar11 = iVar10 * 4;
    iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + iVar11);
    *(uint *)(iVar8 + 0xd0) = *(uint *)(iVar8 + 0xd0) | 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar11) + 0xbc) = 0;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar11) + 0x128) = 2;
    FUN_089a51fc(0,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar11));
    uVar12 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar11);
    piVar7 = (int *)DONE_Get_DAT_08AAC9E0();
    bVar1 = *(byte *)(*piVar7 + (uint)*(byte *)(param_1 + 0x78) + 0x84);
    piVar7 = (int *)DONE_Get_DAT_08AAC9E0();
    uVar3 = FUN_0891c54c(1,(int)(*(byte *)(*piVar7 + (uint)*(byte *)(param_1 + 0x78) + 0x84) - 0xe)
                           / 3 & 0xff);
    FUN_0891fd24(param_1,uVar12,(int)(bVar1 - 0xe) % 3 & 0xff,uVar3);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar11) + 0x60) =
         (float)((int)*(short *)(param_1 + *(char *)(param_1 + 0x78) * 4 + 0x2154) << 3);
    iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + iVar11);
    *(float *)(iVar8 + 100) =
         (float)(*(short *)(param_1 + *(char *)(param_1 + 0x78) * 4 + 0x2156) * 8 + 0x10) -
         *(float *)(param_1 + 0x21a4) * *(float *)(iVar8 + 0x90);
    iVar8 = *(short *)(param_1 + *(char *)(param_1 + 0x78) * 4 + 0x2156) * 8;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar11) + 0x68) =
         (float)(((int)(iVar8 + ((uint)(iVar8 >> 3) >> 0x1d)) >> 3) * -7 + -2);
    FUN_089a5408(0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar11),
                 param_1 + iVar10 * 0x28 + 0x7c,3);
    iVar10 = *(char *)(param_1 + 0x78) + 0x41;
    iVar11 = iVar10 * 4;
    iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + iVar11);
    *(uint *)(iVar8 + 0xd0) = *(uint *)(iVar8 + 0xd0) | 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar11) + 0x128) = 2;
    FUN_089a51fc(0,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar11));
    uVar12 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar11);
    piVar7 = (int *)DONE_Get_DAT_08AAC9E0();
    uVar3 = FUN_0891c54c(1,(int)(*(byte *)(*piVar7 + (uint)*(byte *)(param_1 + 0x78) + 0x84) - 0xe)
                           / 3 & 0xff);
    FUN_0891fc88(param_1,uVar12,uVar3,0);
    iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + iVar11);
    *(float *)(iVar8 + 0x60) =
         (float)((int)*(short *)(param_1 + *(char *)(param_1 + 0x78) * 4 + 0x2154) << 3) -
         *(float *)(param_1 + 0x21a8) * *(float *)(iVar8 + 0x90);
    iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + iVar11);
    *(float *)(iVar8 + 100) =
         (float)(*(short *)(param_1 + *(char *)(param_1 + 0x78) * 4 + 0x2156) * 8 + 0x10) -
         *(float *)(param_1 + 0x21ac) * *(float *)(iVar8 + 0x90);
    iVar8 = *(short *)(param_1 + *(char *)(param_1 + 0x78) * 4 + 0x2156) * 8;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar11) + 0x68) =
         (float)(((int)(iVar8 + ((uint)(iVar8 >> 3) >> 0x1d)) >> 3) * -7 + -3);
    FUN_089a5408(0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar11),
                 param_1 + iVar10 * 0x28 + 0x7c,3);
    iVar8 = *(char *)(param_1 + 0x78) + 0x62;
    FUN_089a5408(0x3f800000,1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8 * 4),
                 param_1 + iVar8 * 0x28 + 0x7c,3);
    *(char *)(param_1 + 0x2294) = *(char *)(param_1 + 0x2294) + '\x01';
  }
  else {
    if (1 < *(byte *)(param_1 + 0x2294)) {
      iVar8 = FUN_0891bbc4(param_1);
      if (iVar8 == 1) {
        piVar7 = (int *)DONE_Get_DAT_08AAC9E0();
        *(ushort *)(*piVar7 + 0x82) = *(ushort *)(*piVar7 + 0x82) | 1;
        FUN_0891bc5c(param_1);
      }
      return 1;
    }
    iVar8 = *(char *)(param_1 + 0x78) + 0xa6;
    iVar10 = iVar8 * 4;
    cVar2 = FUN_089a91a0(0,0x3f800000,0x41f00000,0,
                         *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10),
                         param_1 + iVar8 * 0x28 + 0x7c,3);
    iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + iVar10);
    *(float *)(iVar8 + 100) =
         (float)(*(short *)(param_1 + *(char *)(param_1 + 0x78) * 4 + 0x2156) * 8 + 0x10) -
         *(float *)(param_1 + 0x21a4) * *(float *)(iVar8 + 0x90);
    iVar8 = *(char *)(param_1 + 0x78) + 0x41;
    iVar10 = iVar8 * 4;
    cVar4 = FUN_089a91a0(0,0x3f800000,0x41f00000,0,
                         *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10),
                         param_1 + iVar8 * 0x28 + 0x7c,3);
    iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + iVar10);
    *(float *)(iVar8 + 0x60) =
         (float)((int)*(short *)(param_1 + *(char *)(param_1 + 0x78) * 4 + 0x2154) << 3) -
         *(float *)(param_1 + 0x21a8) * *(float *)(iVar8 + 0x90);
    iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + iVar10);
    *(float *)(iVar8 + 100) =
         (float)(*(short *)(param_1 + *(char *)(param_1 + 0x78) * 4 + 0x2156) * 8 + 0x10) -
         *(float *)(param_1 + 0x21ac) * *(float *)(iVar8 + 0x90);
    iVar8 = *(char *)(param_1 + 0x78) + 0x62;
    iVar10 = iVar8 * 4;
    cVar5 = FUN_089a91a0(0x3f800000,0,0x41f00000,1,
                         *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10),
                         param_1 + iVar8 * 0x28 + 0x7c,3);
    iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + iVar10);
    *(float *)(iVar8 + 100) =
         (float)(*(short *)(param_1 + *(char *)(param_1 + 0x78) * 4 + 0x2156) * 8 + 0x10) -
         *(float *)(param_1 + 0x21b4) * *(float *)(iVar8 + 0x90);
    cVar6 = FUN_08921fac(param_1,0);
    if ((char)(cVar2 + cVar4 + cVar5 + cVar6) == '\x04') {
      *(undefined *)(param_1 + 0x2294) = 2;
    }
  }
  return 0;
}

