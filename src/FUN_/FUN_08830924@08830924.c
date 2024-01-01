#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08830924(undefined4 param_1,int param_2,float *param_3)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  undefined auStack_60 [16];
  undefined auStack_50 [8];
  float local_48;
  float local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  
  uVar2 = 0xffffffff;
  FUN_089e3584(DAT_08ac5c90,auStack_60);
  FUN_089beef4(auStack_50);
  if ((param_2 != 0) && ((local_48 <= -3.0 || (iVar1 = FUN_089bef00(auStack_60), iVar1 == 0)))) {
    local_40 = *param_3;
    fStack_3c = param_3[1];
    local_38 = param_3[2];
    fStack_34 = param_3[3];
    fVar3 = (float)atan2f(local_38 - *(float *)(DAT_08ac5c90 + 0x58),
                          local_40 - *(float *)(DAT_08ac5c90 + 0x50));
    fVar3 = -*(float *)(DAT_08ac5c90 + 0x150) - fVar3;
    if (3.141593 < fVar3) {
      fVar3 = fVar3 - 6.283185;
    }
    else if (fVar3 <= -3.141593) {
      fVar3 = fVar3 + 6.283185;
    }
    uVar2 = FUN_0883071c(fVar3,param_1);
    FUN_088307f0(param_1,uVar2,param_2);
  }
  return uVar2;
}

