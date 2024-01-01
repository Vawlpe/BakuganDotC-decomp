#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089655e0(int param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  float fVar3;
  
  param_2 = param_2 & 0xff;
  fVar3 = *(float *)(param_1 + 0x4f64);
  if (fVar3 < 1.0) {
    fVar3 = fVar3 + 0.2;
    *(float *)(param_1 + 0x4f64) = fVar3;
  }
  fVar3 = fVar3 * 0.2 + 1.0;
  if (1.2 < fVar3) {
    fVar3 = 1.2;
  }
  cVar2 = *(char *)(param_1 + 0x5025);
  iVar1 = FUN_0880d354();
  if (iVar1 != 0) {
    cVar2 = *(char *)(param_1 + *(int *)(param_1 + 0x52a0) + 0x5026);
  }
  if (cVar2 < '\x01') {
    if (-1 < cVar2) {
      iVar1 = ((uint)*(ushort *)(param_1 + 0x51aa) + *(ushort *)(param_1 + 0x51ac) * param_2 +
               (int)*(char *)(param_1 + 0x5024) & 0xffff) * 4;
      FUN_089a51fc(fVar3,fVar3,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0x68) = 0xc3480000;
      iVar1 = ((uint)*(ushort *)(param_1 + 0x51ae) + *(ushort *)(param_1 + 0x51b0) * param_2 +
               (int)*(char *)(param_1 + 0x5024) & 0xffff) * 4;
      FUN_089a51fc(fVar3,fVar3,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0x68) = 0xc3490000;
      iVar1 = ((uint)*(ushort *)(param_1 + 0x51ba) + *(ushort *)(param_1 + 0x51bc) * param_2 +
               (int)*(char *)(param_1 + 0x5024) & 0xffff) * 4;
      FUN_089a51fc(fVar3,fVar3,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0x68) = 0xc34b0000;
      iVar1 = ((uint)*(ushort *)(param_1 + 0x51ce) + *(ushort *)(param_1 + 0x51d0) * param_2 +
               (int)*(char *)(param_1 + 0x5024) & 0xffff) * 4;
      FUN_089a51fc(fVar3,fVar3,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0x68) = 0xc34a0000;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar1);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xffffffdf;
      iVar1 = ((uint)*(ushort *)(param_1 + 0x51de) + *(ushort *)(param_1 + 0x51e0) * param_2 +
               (int)*(char *)(param_1 + 0x5024) & 0xffff) * 4;
      FUN_089a51fc(fVar3,fVar3,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0x68) = 0xc34d0000;
      FUN_08962100(param_1,param_2,*(undefined *)(param_1 + 0x5024));
      iVar1 = ((uint)*(ushort *)(param_1 + 0x51e6) + *(ushort *)(param_1 + 0x51e8) * param_2 +
               (int)*(char *)(param_1 + 0x5024) & 0xffff) * 4;
      FUN_089a51fc(fVar3,fVar3,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0x68) = 0xc34c0000;
      iVar1 = ((uint)*(ushort *)(param_1 + 0x51fa) + *(ushort *)(param_1 + 0x51fc) * param_2 +
               (int)*(char *)(param_1 + 0x5024) & 0xffff) * 4;
      FUN_089a51fc(fVar3,fVar3,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0x68) = 0xc34f0000;
      FUN_089624c8(param_1,param_2,*(undefined *)(param_1 + 0x5024));
      FUN_089a51fc(fVar3,fVar3,0,
                   *(undefined4 *)
                    (*(int *)(param_1 + 0x1c) + (*(ushort *)(param_1 + 0x51be) + param_2) * 4));
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x1c) + (*(ushort *)(param_1 + 0x51be) + param_2) * 4) + 0x68) =
           0xc34e0000;
    }
  }
  else if (cVar2 < '\x02') {
    iVar1 = ((uint)*(ushort *)(param_1 + 0x519e) + *(ushort *)(param_1 + 0x51a0) * param_2 & 0xffff)
            * 4;
    FUN_089a51fc(fVar3,fVar3,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0x68) = 0xc3480000;
    iVar1 = ((uint)*(ushort *)(param_1 + 0x51a2) + *(ushort *)(param_1 + 0x51a4) * param_2 & 0xffff)
            * 4;
    FUN_089a51fc(fVar3,fVar3,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0x68) = 0xc3490000;
    FUN_089a51fc(fVar3,fVar3,0,
                 *(undefined4 *)
                  (*(int *)(param_1 + 0x1c) + (*(ushort *)(param_1 + 0x51a6) + param_2) * 4));
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + (*(ushort *)(param_1 + 0x51a6) + param_2) * 4) + 0x68) =
         0xc34a0000;
  }
  return;
}

