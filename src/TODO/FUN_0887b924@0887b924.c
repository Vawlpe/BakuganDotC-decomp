#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0887b924(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined (*pauVar5) [12];
  undefined (*pauVar6) [12];
  undefined4 uVar7;
  undefined4 in_V7D;
  undefined4 uVar8;
  
  if (0x3c < *(int *)(param_1 + 0xf4)) {
    FUN_08876ee0(param_1);
    FUN_08824658(DAT_08b00920,0x1d1,param_1 + 0x60);
    return;
  }
  if (*(int *)(param_1 + 0xf4) == 0) {
    auVar1 = vscl_t(*(undefined (*) [12])(param_1 + 0x70),0x42340000);
    *(int *)*(undefined (*) [12])(param_1 + 0x70) = auVar1._0_4_;
    *(int *)(param_1 + 0x74) = auVar1._4_4_;
    *(int *)(param_1 + 0x78) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x7c) = in_V7D;
  }
  else {
    pauVar6 = (undefined (*) [12])(param_1 + 0x60);
    if ((*(char *)(param_1 + 0x114) != '\0') ||
       (iVar3 = FUN_088787a0(param_1), param_4 = param_2, iVar3 != 0)) {
      FUN_08823f5c(DAT_08b00920,0x1a,pauVar6,param_4);
      FUN_08876ee0(param_1);
      FUN_08824658(DAT_08b00920,0x1d1,pauVar6);
      return;
    }
    pauVar5 = (undefined (*) [12])(param_1 + 0x70);
    iVar3 = FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,pauVar6,pauVar5,param_2,3,0,
                         0x31bf337e);
    uVar2 = DAT_08b00920;
    if (iVar3 != 0) {
      uVar7 = vdot_t(*pauVar5,*pauVar5);
      uVar8 = vcmp_s(8,uVar7,*(undefined4 *)*pauVar5);
      vrsq_s(uVar7);
      uVar7 = vcmovt_s(in_V7D,(byte)uVar8 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(*pauVar5,uVar7);
      *(int *)*pauVar5 = auVar1._0_4_;
      *(int *)(param_1 + 0x74) = auVar1._4_4_;
      *(int *)(param_1 + 0x78) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x7c) = in_V7D;
      iVar3 = FUN_08824024(uVar2,0x9f,&DAT_08aba930);
      iVar4 = *(int *)(param_1 + 0xb0);
      *(int *)(iVar3 + 0x1fc) = iVar4;
      if (iVar4 != 0) {
        *(undefined4 *)(iVar3 + 0x200) = *(undefined4 *)(iVar4 + 0xc);
      }
      FUN_08876ee0(param_1);
      FUN_08824658(DAT_08b00920,0x1d1,pauVar6);
      return;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x6c);
    auVar1 = vadd_t(*pauVar6,*pauVar5);
    *(int *)*pauVar6 = auVar1._0_4_;
    *(int *)(param_1 + 100) = auVar1._4_4_;
    *(int *)(param_1 + 0x68) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
  }
  return;
}

