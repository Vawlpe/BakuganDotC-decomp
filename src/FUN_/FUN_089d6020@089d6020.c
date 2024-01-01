#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089d6020(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined auStack_210 [512];
  
  uVar2 = param_1[0x14];
  uVar3 = 0;
  if (((-1 < (int)uVar2) && (uVar2 < 0x78)) && (iVar1 = FUN_089d6150(param_1), iVar1 == 0)) {
    *(undefined4 *)(param_1[1] + 8) = 0x2a;
    zz_scePsmfPlayerCreate(*param_1,param_1[1]);
    zz_scePsmfPlayerConfigPlayer(*param_1,0,1);
    zz_scePsmfPlayerConfigPlayer(*param_1,1,3);
    FUN_089fb5b0((&PTR_s_movie_ActivisionLogo_pmf_08ac5998)[uVar2],auStack_210);
    zz_scePsmfPlayerSetPsmf(*param_1,auStack_210);
    zz_scePsmfPlayerGetPsmfInfo(*param_1,param_1[3]);
    zz_scePsmfPlayerStart(*param_1,param_1[2],0);
    *(undefined *)(param_1 + 0x10) = 1;
    FUN_089d61a0(param_1,0);
    param_1[0xf] = 0;
    uVar3 = 1;
    *(undefined *)((int)param_1 + 0x42) = 0;
    FUN_08a0fadc(0,FUN_089d5520,0);
    param_1[8] = 0x8061600c;
    *(undefined *)((int)param_1 + 0x4d) = 1;
    *(undefined *)(param_1 + 0x13) = 0;
    FUN_089bbd80(0xd);
  }
  DAT_08ac5b78 = 0;
  return uVar3;
}

