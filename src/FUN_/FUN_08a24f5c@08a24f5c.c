#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 *
FUN_08a24f5c(undefined4 *param_1,undefined4 *param_2,uint param_3,int param_4,uint param_5,
            undefined4 param_6)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  
  if (((param_1 == (undefined4 *)0x0) || (param_2 == (undefined4 *)0x0)) || (param_4 == 0)) {
    return (undefined4 *)0x0;
  }
  if (param_1 != param_2) {
    if (((param_5 | 1) & param_3) == 0) {
      param_3 = 0;
    }
    FUN_08a12574();
    if (param_3 != 0) {
      uVar9 = param_2[7];
      uVar1 = *(undefined2 *)((int)param_2 + 2);
      *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
      param_1[7] = uVar9;
      *(undefined2 *)((int)param_1 + 2) = uVar1;
      uVar9 = FUN_08a25e20(param_2);
      uVar12 = 1;
      if ((int)param_3 < 0) {
        uVar12 = 2;
      }
      FUN_08a12094(param_1,*(undefined2 *)(param_2 + 4),*(undefined *)((int)param_2 + 0x16),
                   *(undefined2 *)((int)param_2 + 0x12),*(undefined2 *)(param_2 + 5),uVar9,
                   *(undefined *)((int)param_2 + 0x19),*(undefined2 *)(param_2 + 9),
                   *(undefined2 *)((int)param_2 + 0x26),*(undefined *)(param_2 + 10),
                   *(undefined *)((int)param_2 + 0x29),uVar12,param_6,
                   *(undefined2 *)((int)param_2 + 0x2a),0,param_4);
      iVar14 = 0;
      if (*(short *)(param_2 + 9) == 0) {
        uVar9 = param_2[0xb];
      }
      else {
        do {
          uVar9 = FUN_08a25f1c(param_1,iVar14);
          uVar9 = FUN_08a25ed8(param_1,uVar9);
          uVar12 = FUN_08a25f6c(param_1,iVar14);
          uVar12 = FUN_08a25eb4(param_1,uVar12);
          uVar4 = FUN_08a25f1c(param_2,iVar14);
          uVar4 = FUN_08a25ed8(param_2,uVar4);
          uVar5 = FUN_08a25f6c(param_2,iVar14);
          uVar5 = FUN_08a25eb4(param_2,uVar5);
          if (*(short *)((int)param_2 + 0x26) == 0) {
            uVar2 = *(ushort *)(param_2 + 9);
          }
          else {
            iVar13 = 0;
            do {
              uVar6 = FUN_08a25e44(param_1,iVar14,iVar13);
              uVar7 = FUN_08a25e44(param_2,iVar14,iVar13);
              FUN_08a12310(uVar6,uVar9,uVar12,*(undefined *)((int)param_1 + 0x16),uVar7,uVar4,uVar5,
                           *(undefined *)((int)param_2 + 0x16));
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)(uint)*(ushort *)((int)param_2 + 0x26));
            uVar2 = *(ushort *)(param_2 + 9);
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < (int)(uint)uVar2);
        uVar9 = param_2[0xb];
      }
      memcpy_jak(param_1[0xb],uVar9,*(undefined2 *)((int)param_1 + 0x2a));
      zz_sceKernelDcacheWritebackAll();
      return param_1;
    }
    uVar1 = *(undefined2 *)param_1;
    puVar11 = param_2 + 0xc;
    puVar10 = param_1;
    do {
      uVar9 = param_2[1];
      uVar12 = param_2[2];
      uVar4 = param_2[3];
      *puVar10 = *param_2;
      param_2 = param_2 + 4;
      puVar10[1] = uVar9;
      puVar10[2] = uVar12;
      puVar10[3] = uVar4;
      puVar10 = puVar10 + 4;
    } while (param_2 != puVar11);
    *(undefined2 *)param_1 = uVar1;
    param_1[1] = 0;
    FUN_08a0ffa4(0,param_1[8]);
    FUN_08a0ffa4(0,param_1[0xb]);
    iVar13 = (uint)*(ushort *)(param_1 + 9) * (uint)*(ushort *)((int)param_1 + 0x26);
    iVar14 = 0;
    if (0 < iVar13) {
      iVar8 = param_1[8];
      while( true ) {
        iVar3 = iVar14 * 4;
        iVar14 = iVar14 + 1;
        FUN_08a0ffa4(1,*(undefined4 *)(iVar3 + iVar8));
        if (iVar13 == iVar14) break;
        iVar8 = param_1[8];
      }
    }
  }
  return param_1;
}

