#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08965acc(int param_1)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  bVar1 = *(byte *)(param_1 + 0x5114);
  if (bVar1 < 5) {
    if (bVar1 == 1) {
      iVar2 = (uint)*(ushort *)(param_1 + 0x5186) + (int)*(char *)(param_1 + 0x4cdb);
      FUN_089a91a0(0x3fc00000,0x3f800000,0x41000000,0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2 * 4),
                   param_1 + iVar2 * 0x28 + 0x78,3);
      fVar3 = *(float *)(param_1 + 0x510c) + 0.125;
      *(float *)(param_1 + 0x510c) = fVar3;
      *(undefined *)(param_1 + 0x5108) = 1;
      *(undefined *)(param_1 + 0x5109) = 1;
      fVar4 = *(float *)(param_1 + 0x5110) + (1.0 - (fVar3 - 1.0) * (fVar3 - 1.0));
      *(float *)(param_1 + 0x50d0) = fVar4;
      *(float *)(param_1 + 0x50d4) = fVar4;
      if (1.0 <= fVar3) {
        *(char *)(param_1 + 0x5114) = *(char *)(param_1 + 0x5114) + '\x01';
      }
    }
    else if (bVar1 == 2) {
      if (((int)*(char *)(*(int *)(param_1 + 0x20) + 3) & 0x80U) == 0) {
        *(undefined *)(param_1 + 0x5114) = 3;
      }
    }
    else if (bVar1 == 3) {
      iVar2 = (uint)*(ushort *)(param_1 + 0x5186) + (int)*(char *)(param_1 + 0x4cdb);
      FUN_089a5408(0x3fc00000,1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2 * 4),
                   param_1 + iVar2 * 0x28 + 0x78,3);
      *(undefined4 *)(param_1 + 0x510c) = 0;
      *(undefined4 *)(param_1 + 0x5110) = 0x3f800000;
      *(char *)(param_1 + 0x5114) = *(char *)(param_1 + 0x5114) + '\x01';
    }
    else if (bVar1 == 4) {
      iVar2 = (uint)*(ushort *)(param_1 + 0x5186) + (int)*(char *)(param_1 + 0x4cdb);
      FUN_089a91a0(0x3f800000,0x3fc00000,0x41000000,1,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2 * 4),
                   param_1 + iVar2 * 0x28 + 0x78,3);
      fVar3 = *(float *)(param_1 + 0x510c) + 0.125;
      *(undefined *)(param_1 + 0x5108) = 1;
      *(undefined *)(param_1 + 0x5109) = 1;
      *(float *)(param_1 + 0x510c) = fVar3;
      fVar4 = *(float *)(param_1 + 0x5110) - fVar3 * fVar3;
      *(float *)(param_1 + 0x50d0) = fVar4;
      *(float *)(param_1 + 0x50d4) = fVar4;
      if (1.0 <= fVar3) {
        *(char *)(param_1 + 0x5114) = *(char *)(param_1 + 0x5114) + '\x01';
      }
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) +
                      ((uint)*(ushort *)(param_1 + 0x5186) + (int)*(char *)(param_1 + 0x4cdb)) * 4);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) +
                ((uint)*(ushort *)(param_1 + 0x5186) + (int)*(char *)(param_1 + 0x4cdb)) * 4) +
       0x128) = 0x10;
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) +
                ((uint)*(ushort *)(param_1 + 0x5186) + (int)*(char *)(param_1 + 0x4cdb)) * 4) + 0x68
       ) = 0xc3fa0000;
      iVar2 = (uint)*(ushort *)(param_1 + 0x5186) + (int)*(char *)(param_1 + 0x4cdb);
      FUN_089a5408(0x3fc00000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2 * 4),
                   param_1 + iVar2 * 0x28 + 0x78,3);
      FUN_08961cac(param_1,*(undefined *)
                            (param_1 + *(char *)(param_1 + 0x4cdb) * 4 +
                             (int)*(char *)(param_1 + 0x5024) + 0x4fb8));
      FUN_08961dcc(param_1,*(undefined *)
                            (param_1 + *(char *)(param_1 + 0x4cdb) * 4 +
                             (int)*(char *)(param_1 + 0x5024) + 0x4fb8));
      *(undefined *)(param_1 + 0x5108) = 1;
      *(undefined *)(param_1 + 0x5109) = 1;
      *(undefined4 *)(param_1 + 0x50d0) = 0;
      *(undefined4 *)(param_1 + 0x50d4) = 0;
      *(char *)(param_1 + 0x5114) = *(char *)(param_1 + 0x5114) + '\x01';
    }
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x5028);
  FUN_089f51b8(iVar2);
  *(undefined4 *)(iVar2 + 0x84) = 0;
  iVar2 = *(int *)(param_1 + 0x502c);
  FUN_089f51b8(iVar2);
  *(undefined4 *)(iVar2 + 0x84) = 0;
  return 1;
}

