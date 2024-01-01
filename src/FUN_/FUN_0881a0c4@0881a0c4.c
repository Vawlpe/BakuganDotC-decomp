#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0881a0c4(undefined4 param_1,int *param_2,uint param_3)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  int *piVar10;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  short *local_48;
  
  uVar3 = 0;
  if ((-1 < (int)param_3) && (param_3 < 0x40)) {
    psVar7 = (short *)(&PTR_DAT_08ab01f0)[param_3];
    piVar10 = (int *)(&DAT_08a50898 + param_3 * 4);
    iVar9 = 0;
    uVar3 = 1;
    if (0 < *piVar10) {
      local_4c = 3;
      psVar6 = psVar7 + 3;
      psVar8 = psVar7;
      local_50 = param_1;
      do {
        local_60 = (float)(int)*psVar7;
        local_5c = (float)(int)psVar7[1];
        local_58 = (float)(psVar7[2] + 200);
        local_54 = 0;
        iVar4 = FUN_089f5484(local_50,*(undefined4 *)(psVar8 + 8),&local_60,0);
        *param_2 = iVar4;
        local_80 = (float)(int)*psVar6;
        local_7c = (float)(int)psVar6[1];
        local_78 = local_80 + (float)(int)psVar6[2];
        local_74 = local_7c + (float)(int)psVar6[3];
        sVar1 = psVar6[2];
        sVar2 = psVar6[3];
        local_48 = psVar6;
        FUN_089f4150(iVar4,&local_80);
        FUN_089f4924((float)(int)sVar1,(float)(int)sVar2,iVar4);
        iVar5 = *(int *)(iVar4 + 0xe4);
        if (iVar5 < 2) {
          if (iVar5 < 1) {
            iVar4 = *piVar10;
          }
          else {
LAB_0881a278:
            *(float *)(iVar4 + 0x60) = *(float *)(iVar4 + 0x60) + (float)(int)sVar1 * 0.5;
            *(float *)(iVar4 + 100) = *(float *)(iVar4 + 100) + (float)(int)sVar2 * 0.5;
            iVar4 = *piVar10;
          }
        }
        else {
          if (iVar5 == local_4c) goto LAB_0881a278;
          iVar4 = *piVar10;
        }
        iVar9 = iVar9 + 1;
        psVar8 = psVar8 + 10;
        psVar7 = psVar7 + 10;
        param_2 = param_2 + 1;
        psVar6 = local_48 + 10;
      } while (iVar9 < iVar4);
      uVar3 = 1;
    }
  }
  return uVar3;
}

