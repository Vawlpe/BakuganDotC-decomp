#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a1e4a4(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  
  if (DAT_08afcf54 == 0) {
    iVar4 = -0x7fffffff;
  }
  else {
    uVar3 = zz_sceKernelCpuSuspendIntr();
    if ((int)(&DAT_08afd098)[param_1 * 0x3f] < 0) {
      DAT_08afcf9c = &DAT_08afcfa0 + param_1 * 0x3f;
      (&DAT_08afd098)[param_1 * 0x3f] = DAT_08afcf60;
      DAT_08afcf60 = param_1;
      zz_sceKernelCpuResumeIntr(uVar3);
      puVar2 = DAT_08afcf9c;
      if (param_1 - 3U < 2) {
        DAT_08afcf9c[3] = param_3;
        puVar2[2] = param_2 & 0x1fffffff;
        puVar2[1] = param_2 & 0x1fffffff;
      }
      else {
        uVar6 = param_2 & 0x1fffffff | 0x40000000;
        DAT_08afcf9c[3] = param_3;
        puVar2[2] = uVar6;
        puVar2[1] = uVar6;
        if (-1 < (int)(param_2 << 1)) {
          uVar3 = zz_sceKernelCpuSuspendIntr();
          puVar2 = DAT_08afcf9c;
          cacheOp(0x1b,param_2);
          while( true ) {
            puVar5 = (undefined4 *)puVar2[2];
            if (((uint)puVar5 & 0x3f) == 0) break;
            puVar2[2] = puVar5 + 1;
            *puVar5 = 0;
          }
          zz_sceKernelCpuResumeIntr(uVar3);
        }
      }
      iVar4 = DAT_08afcf6c;
      if (DAT_08afcf60 == 0) {
        DAT_08afcf4c = 0;
        iVar4 = zz_sceGeListEnQueue(DAT_08afcf9c[1],DAT_08afcf9c[2],DAT_08afcf74,&DAT_08aa5bf0);
        if (iVar4 < 0) {
          return iVar4;
        }
      }
      DAT_08afcf6c = iVar4;
      if (DAT_08afcf58 == 0) {
        FUN_08a1ec10(&DAT_08aa5c00);
        FUN_08a1ed3c(0x10,0x10);
        FUN_08a1ed68(7);
        FUN_08a1ed90(0x3f800000);
        FUN_08a1edbc(0x3f800000,0x3f800000);
        DAT_08afcf58 = 1;
      }
      puVar2 = DAT_08afcf9c;
      uVar1 = DAT_08afcf94;
      uVar3 = DAT_08afcf90;
      if (DAT_08afcf60 != 0) {
        return 0;
      }
      if (DAT_08afcf7c == 0) {
        return 0;
      }
      DAT_08afcf9c[0x27] = DAT_08afcf78;
      puVar2[0x28] = uVar3;
      puVar2[0x29] = uVar1;
      puVar8 = (uint *)puVar2[2];
      uVar6 = DAT_08afcf80 & 0xffffff;
      uVar7 = ((DAT_08afcf80 << 4) >> 0x1c) << 0x10 | 0x9d000000 | DAT_08afcf7c;
      *puVar8 = DAT_08afcf78 | 0xd2000000;
      puVar2[2] = puVar8 + 3;
      puVar8[1] = uVar7;
      puVar8[2] = uVar6 | 0x9c000000;
      return 0;
    }
    zz_sceKernelCpuResumeIntr(uVar3);
    iVar4 = -0x7fffffdf;
  }
  DAT_08afcf9c = (undefined4 *)0x0;
  return iVar4;
}

