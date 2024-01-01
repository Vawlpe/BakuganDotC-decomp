#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08906250(int param_1,int param_2)

{
  if ((uint)*(ushort *)(param_2 + 0x18) == *(uint *)(param_1 + 0x30)) {
    if (*(short *)(param_2 + 0x1a) == 0) {
      *(uint *)(param_1 + 0x48) = (uint)*(ushort *)(param_2 + 0x28);
      *(uint *)(param_1 + 0x4c) = (uint)*(ushort *)(param_2 + 0x2a);
      switch(*(undefined4 *)(param_1 + 0x28)) {
      case 0x19:
      case 0x21:
      case 0x25:
      case 0x29:
      case 0x2d:
      case 0x31:
      case 0x35:
      case 0x39:
      case 0x41:
      case 0x45:
      case 0x49:
      case 0x4d:
      case 0x51:
      case 0x55:
      case 0x59:
      case 0x5d:
      case 0x61:
      case 0x65:
        *(undefined4 *)(param_1 + 0x4c) = 0;
        break;
      case 0x1d:
      case 0x3d:
        *(undefined4 *)(param_1 + 0x4c) = 0;
        break;
      case 0x23:
        *(undefined4 *)(param_1 + 0x4c) = 1;
        break;
      case 0x32:
        *(undefined4 *)(param_1 + 0x4c) = 1;
        break;
      case 0x3f:
        *(undefined4 *)(param_1 + 0x4c) = 2;
        break;
      case 0x5b:
        *(undefined4 *)(param_1 + 0x4c) = 1;
        break;
      case 0x67:
        *(undefined4 *)(param_1 + 0x4c) = 0;
        break;
      case 0x68:
        *(undefined4 *)(param_1 + 0x4c) = 0;
      }
    }
    if (param_2 != 0) {
      (**(code **)(*(int *)(param_2 + 0x14) + 0xc))
                (param_2 + *(short *)(*(int *)(param_2 + 0x14) + 8),3);
    }
  }
  return;
}

