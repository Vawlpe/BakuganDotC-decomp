#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089c9334(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(param_1 + 0x24);
  if ((iVar6 != 0) && (*(char *)(param_1 + 0x54) == '\0')) {
    uVar4 = (uint)*(ushort *)(iVar6 + 8);
    iVar7 = 0;
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
    if (uVar4 != 0) {
      piVar5 = *(int **)(param_1 + 0x2c);
      do {
        *(char *)(param_1 + 0x45) = (char)iVar7;
        if ((*(ushort *)(piVar5 + 1) & 1) != 0) {
          if (*piVar5 == 0) {
            uVar1 = *(ushort *)((int)piVar5 + 6);
            while( true ) {
              *(uint *)(param_1 + 0x30) = iVar6 + uVar4 * 2 + 0x10 + (uint)uVar1;
              uVar2 = FUN_089c9e5c(param_1);
              *(undefined4 *)(param_1 + 0x40) = uVar2;
              *(undefined *)(param_1 + 0x44) = 0;
              iVar3 = (**(code **)(*(int *)(param_1 + 0x20) + 0x14))
                                (param_1 + *(short *)(*(int *)(param_1 + 0x20) + 0x10),
                                 *(undefined *)(param_1 + 0x40));
              piVar5 = *(int **)(param_1 + 0x2c);
              if (iVar3 == 1) break;
              if (iVar3 == 2) goto LAB_089c94e0;
              if (iVar3 == 4) {
                *(ushort *)(piVar5 + 1) = *(ushort *)(piVar5 + 1) & 0xfffe;
                piVar5 = *(int **)(param_1 + 0x2c);
                goto LAB_089c94e0;
              }
              if (iVar3 == 5) {
                *(ushort *)(piVar5 + 1) = *(ushort *)(piVar5 + 1) & 0xfffe;
                return 0xffffffff;
              }
              uVar1 = *(ushort *)((int)piVar5 + 6);
              if (iVar3 != 3) {
                *(ushort *)((int)piVar5 + 6) = uVar1 + *(byte *)(param_1 + 0x41);
                uVar1 = *(ushort *)(*(int *)(param_1 + 0x2c) + 6);
              }
            }
            *(ushort *)((int)piVar5 + 6) =
                 *(short *)((int)piVar5 + 6) + (ushort)*(byte *)(param_1 + 0x41);
            piVar5 = *(int **)(param_1 + 0x2c);
          }
          else {
            *piVar5 = *piVar5 + -1;
            piVar5 = *(int **)(param_1 + 0x2c);
          }
        }
LAB_089c94e0:
        iVar7 = iVar7 + 1;
        *(int **)(param_1 + 0x2c) = piVar5 + 2;
        if ((int)uVar4 <= iVar7) {
          return 0;
        }
        piVar5 = *(int **)(param_1 + 0x2c);
      } while( true );
    }
  }
  return 0;
}

