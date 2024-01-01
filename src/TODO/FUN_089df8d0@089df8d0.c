#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089df8d0(int param_1,uint **param_2)

{
  undefined auVar1 [16];
  uint *puVar2;
  uint *puVar3;
  undefined4 in_V74;
  
  if (*(char *)(param_1 + 0xb8) != '\0') {
    DAT_08ac5c2c = param_1;
    if (*(char *)(param_1 + 0xb9) == '\0') {
      DAT_08b02148 = 0;
    }
    else {
      puVar2 = *param_2;
      *puVar2 = *(uint *)(param_1 + 0x10c) & 0xffffff | 0xcf000000;
      puVar2[1] = *(uint *)(param_1 + 0x110) >> 8 | 0xcd000000;
      puVar2[2] = *(uint *)(param_1 + 0x114) >> 8 | 0xce000000;
      *param_2 = puVar2 + 3;
      DAT_08b02148 = *(uint *)(param_1 + 0x10c) & 0xffffff | 0xcf000000;
    }
    auVar1 = vsat0_q(*(undefined (*) [16])(param_1 + 0x60));
    auVar1 = vscl_q(auVar1,in_V74);
    auVar1 = vf2iz_q(auVar1,0x17);
    DAT_08ac5be0 = vi2uc_q(auVar1);
    DAT_08ac5be8 = DAT_08ac5be0 >> 0x18;
    puVar2 = *param_2;
    *puVar2 = DAT_08ac5be0 & 0xffffff | 0x5c000000;
    puVar2[1] = DAT_08ac5be0 >> 0x18 | 0x5d000000;
    *param_2 = puVar2 + 2;
    DAT_08ac5c30 = *(byte *)(param_1 + 0xbc) | 0x17000000;
    **param_2 = DAT_08ac5c30;
    *param_2 = *param_2 + 1;
    auVar1 = vsat0_q(*(undefined (*) [16])(param_1 + 0x70));
    auVar1 = vscl_q(auVar1,in_V74);
    auVar1 = vf2iz_q(auVar1,0x17);
    DAT_08ac5be4 = vi2uc_q(auVar1);
    **param_2 = DAT_08ac5be4 & 0xffffff | 0x90000000;
    *param_2 = *param_2 + 1;
    FUN_089dafd8(*(undefined4 *)(param_1 + 0x130),param_2,0,0xffff);
    puVar2 = DAT_08ac5c74;
    if ((*(char *)(param_1 + 0xb9) != '\0') && (DAT_08ac5c74 != (uint *)0x0)) {
      puVar3 = *param_2;
      *puVar3 = *DAT_08ac5c74 & 0xffffff | 0xcf000000;
      puVar3[1] = puVar2[1] >> 8 | 0xcd000000;
      puVar3[2] = puVar2[2] >> 8 | 0xce000000;
      *param_2 = puVar3 + 3;
    }
  }
  return;
}

