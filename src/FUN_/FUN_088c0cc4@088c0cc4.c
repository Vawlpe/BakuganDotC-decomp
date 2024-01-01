#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088c0cc4(int param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  FUN_088f47e0(*(undefined4 *)(param_1 + 0x78c),DAT_08b00bd4,DAT_08b00bd6,1);
  if (param_2 != '\0') {
    *(undefined4 *)(param_1 + 0x674) = 0;
    *(undefined4 *)(param_1 + 0x670) = 0;
    *(undefined4 *)(param_1 + 0x678) = 0;
    *(undefined4 *)(param_1 + 0x65c) = 0;
    *(undefined4 *)(param_1 + 0x658) = 0;
    *(undefined4 *)(param_1 + 0x660) = 0;
    FUN_088bf690(param_1,DAT_08b00bd4,DAT_08b00bd6);
  }
  FUN_088c0c4c(param_1,1);
  FUN_088efd08(*(undefined4 *)(param_1 + 0x790),0,0,0,&DAT_08b00bb0,0,DAT_08b00bd4,DAT_08b00bd6);
  puVar4 = DAT_08b00d40;
  if (param_2 != '\0') {
    iVar6 = 0;
    iVar5 = param_1;
    do {
      iVar6 = iVar6 + 1;
      if ((uint)*(byte *)(iVar5 + 0x716) == (int)DAT_08abe907) {
        DAT_08b00d1c = *(undefined4 *)(iVar5 + 0x708);
        DAT_08b00d20 = *(undefined4 *)(iVar5 + 0x70c);
        DAT_08b00d24 = *(undefined4 *)(iVar5 + 0x710);
        DAT_08b00d28 = *(undefined2 *)(iVar5 + 0x714);
        break;
      }
      iVar5 = iVar5 + 0x14;
    } while (iVar6 < 6);
  }
  uVar2 = DAT_08b00d24;
  uVar1 = DAT_08b00d20;
  *DAT_08b00d40 = DAT_08b00d1c;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  puVar4 = DAT_08b00d40;
  uVar3 = DAT_08b00d28;
  *(undefined2 *)(DAT_08b00d40 + 3) = 0;
  *(undefined2 *)((int)puVar4 + 0xe) = uVar3;
  *(undefined2 *)(puVar4 + 4) = 0;
  FUN_088df5d8(*DAT_08abf710);
  iVar5 = *(int *)(*DAT_08abf710 + 0x14);
  (**(code **)(iVar5 + 0x3c))(*DAT_08abf710 + (int)*(short *)(iVar5 + 0x38));
  FUN_088efb94(*(undefined4 *)(param_1 + 0x790));
  *(undefined2 *)(param_1 + 0x794) = 0x10;
  return;
}

