#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089ffeac(int param_1,uint param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  short *psVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = param_2 & 0xff;
  param_2 = param_2 & 0xc0;
  uVar1 = 0;
  if (param_2 == 0xc0) {
    iVar5 = uVar4 * 8;
    param_1 = param_1 + *(short *)(&DAT_08a341b8 + iVar5);
    pcVar2 = *(code **)(&DAT_08a341bc + iVar5);
    if (*(short *)(&DAT_08a341ba + iVar5) != 0) {
      psVar3 = (short *)(*(int *)(pcVar2 + param_1) + *(short *)(&DAT_08a341ba + iVar5) * 8);
      pcVar2 = *(code **)(psVar3 + 2);
      param_1 = param_1 + *psVar3;
    }
    uVar1 = (*pcVar2)(param_1);
  }
  else {
    if (param_2 == 0x80) {
      iVar5 = (int)*(short *)((int)&PTR_caseD_3_08a34398 + uVar4 * 8 + 2);
      param_1 = param_1 + *(short *)(&PTR_caseD_3_08a34398 + uVar4 * 2);
      pcVar2 = (code *)(&PTR_caseD_3_08a3439c)[uVar4 * 2];
      if (iVar5 != 0) {
        psVar3 = (short *)(*(int *)(pcVar2 + param_1) + iVar5 * 8);
        pcVar2 = *(code **)(psVar3 + 2);
        param_1 = param_1 + *psVar3;
      }
      uVar1 = (*pcVar2)(param_1);
      return uVar1;
    }
    if (param_2 == 0x40) {
      iVar5 = uVar4 * 8;
      if (uVar4 < 0x60) {
        iVar5 = (int)*(short *)((int)&switchD_089fa694::switchdataD_08aa3d28 + iVar5 + 2);
        param_1 = param_1 + *(short *)(&switchD_089fa694::switchdataD_08aa3d28 + uVar4 * 2);
        pcVar2 = (code *)(&PTR_caseD_2_08aa3d2c)[uVar4 * 2];
        if (iVar5 != 0) {
          psVar3 = (short *)(*(int *)(pcVar2 + param_1) + iVar5 * 8);
          pcVar2 = *(code **)(psVar3 + 2);
          param_1 = param_1 + *psVar3;
        }
        uVar1 = (*pcVar2)(param_1);
      }
      else {
        param_1 = param_1 + *(short *)("Temps de jeu   %d:%02d:%02d\nBakugan jouables  %d/20" +
                                      iVar5 + 0x2c);
        pcVar2 = *(code **)("Temps de jeu   %d:%02d:%02d\nBakugan jouables  %d/20" + iVar5 + 0x30);
        if (*(short *)("Temps de jeu   %d:%02d:%02d\nBakugan jouables  %d/20" + iVar5 + 0x2e) != 0)
        {
          psVar3 = (short *)(*(int *)(pcVar2 + param_1) +
                            *(short *)("Temps de jeu   %d:%02d:%02d\nBakugan jouables  %d/20" +
                                      iVar5 + 0x2e) * 8);
          pcVar2 = *(code **)(psVar3 + 2);
          param_1 = param_1 + *psVar3;
        }
        uVar1 = (*pcVar2)(param_1);
      }
      return uVar1;
    }
    if (param_2 == 0) {
      param_1 = param_1 + *(short *)(&DAT_08aa1bb8 + uVar4 * 8);
      pcVar2 = (code *)(&PTR_LAB_08aa1bbc)[uVar4 * 2];
      if (*(short *)(&DAT_08aa1bba + uVar4 * 8) != 0) {
        psVar3 = (short *)(*(int *)(pcVar2 + param_1) + *(short *)(&DAT_08aa1bba + uVar4 * 8) * 8);
        pcVar2 = *(code **)(psVar3 + 2);
        param_1 = param_1 + *psVar3;
      }
      uVar1 = (*pcVar2)(param_1);
      return uVar1;
    }
  }
  return uVar1;
}

