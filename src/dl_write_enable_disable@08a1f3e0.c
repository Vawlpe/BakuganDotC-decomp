#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void dl_write_enable_disable(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  switch(param_2) {
  case 0:
    puVar3 = *(uint **)(param_1 + 8);
    uVar2 = 0x22000000;
    break;
  case 1:
    puVar3 = *(uint **)(param_1 + 8);
    uVar2 = 0x23000000;
    break;
  case 2:
    if (param_3 == 0) {
      iVar1 = *(int *)(param_1 + 0xa4);
      puVar3 = *(uint **)(param_1 + 8);
      iVar4 = *(int *)(param_1 + 0xa0);
      *(undefined4 *)(param_1 + 0xa8) = 0;
      *puVar3 = 0xd4000000;
      uVar2 = (iVar1 + -1) * 0x400 | iVar4 - 1U;
    }
    else {
      puVar3 = *(uint **)(param_1 + 8);
      uVar2 = *(int *)(param_1 + 0xb8) << 10 | *(uint *)(param_1 + 0xb4);
      *(undefined4 *)(param_1 + 0xa8) = 1;
      *puVar3 = *(int *)(param_1 + 0xb0) << 10 | *(uint *)(param_1 + 0xac) | 0xd4000000;
    }
    *(uint **)(param_1 + 8) = puVar3 + 4;
    puVar3[1] = uVar2 | 0xd5000000;
    puVar3[2] = 0x15000000;
    puVar3[3] = uVar2 | 0x16000000;
    return;
  case 3:
    puVar3 = *(uint **)(param_1 + 8);
    uVar2 = 0x24000000;
    break;
  case 4:
    puVar3 = *(uint **)(param_1 + 8);
    uVar2 = 0x21000000;
    break;
  case 5:
    puVar3 = *(uint **)(param_1 + 8);
    uVar2 = 0x1d000000;
    break;
  case 6:
    puVar3 = *(uint **)(param_1 + 8);
    uVar2 = 0x20000000;
    break;
  case 7:
    puVar3 = *(uint **)(param_1 + 8);
    uVar2 = 0x1f000000;
    break;
  case 8:
    puVar3 = *(uint **)(param_1 + 8);
    uVar2 = 0x1c000000;
    break;
  case 9:
    puVar3 = *(uint **)(param_1 + 8);
    uVar2 = 0x1e000000;
    break;
  case 10:
    puVar3 = *(uint **)(param_1 + 8);
    uVar2 = 0x17000000;
    break;
  case 0xb:
    puVar3 = *(uint **)(param_1 + 8);
    uVar2 = 0x18000000;
    break;
  case 0xc:
    puVar3 = *(uint **)(param_1 + 8);
    uVar2 = 0x19000000;
    break;
  case 0xd:
    puVar3 = *(uint **)(param_1 + 8);
    uVar2 = 0x1a000000;
    break;
  case 0xe:
    puVar3 = *(uint **)(param_1 + 8);
    uVar2 = 0x1b000000;
    break;
  case 0xf:
    puVar3 = *(uint **)(param_1 + 8);
    uVar2 = 0x25000000;
    break;
  case 0x10:
    puVar3 = *(uint **)(param_1 + 8);
    uVar2 = 0x26000000;
    break;
  case 0x11:
    puVar3 = *(uint **)(param_1 + 8);
    uVar2 = 0x27000000;
    break;
  case 0x12:
    puVar3 = *(uint **)(param_1 + 8);
    uVar2 = 0x28000000;
    break;
  case 0x13:
    puVar3 = *(uint **)(param_1 + 8);
    uVar2 = 0x51000000;
    break;
  case 0x14:
    puVar3 = *(uint **)(param_1 + 8);
    uVar2 = 0x38000000;
    break;
  case 0x15:
    if (param_3 == 0) {
      *(undefined4 *)(param_1 + 0xe4) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0xe4) = 1;
    }
    puVar3 = *(uint **)(param_1 + 8);
    *puVar3 = *(int *)(param_1 + 0xe4) << 0x10 | *(int *)(param_1 + 0xec) << 8 |
              *(uint *)(param_1 + 0xe8) | 0xc9000000;
    *(uint **)(param_1 + 8) = puVar3 + 1;
    return;
  default:
    return;
  }
  *puVar3 = param_3 | uVar2;
  *(uint **)(param_1 + 8) = puVar3 + 1;
  return;
}

