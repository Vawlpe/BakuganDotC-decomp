#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089ec414(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    iVar1 = FUN_089eb248(*(int *)(param_1 + 0x74));
    iVar1 = *(int *)(iVar1 + 0x1c);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x5c) == 0) {
        fVar3 = *(float *)(iVar1 + 0x60);
      }
      else {
        if (*(char *)(param_1 + 0x5a) != '\0') {
          fVar4 = *(float *)(iVar1 + 100);
          iVar2 = FUN_089eb248(*(undefined4 *)(param_1 + 0x74));
          fVar3 = *(float *)(iVar1 + 100);
          while( true ) {
            if ((int)fVar3 ==
                (int)(fVar4 + *(float *)(iVar2 + 0x98) *
                              (float)(int)*(short *)(*(int *)(param_1 + 0x5c) + param_2 * 8 + 4))) {
              iVar2 = FUN_089eb248(*(undefined4 *)(param_1 + 0x74));
              return (int)(*(float *)(iVar2 + 0x94) *
                           *(float *)(*(int *)(param_1 + 0x5c) + param_2 * 8) +
                          *(float *)(iVar1 + 0x60));
            }
            iVar1 = *(int *)(iVar1 + 4);
            if (iVar1 == 0) break;
            fVar3 = *(float *)(iVar1 + 100);
          }
          return 0;
        }
        fVar3 = *(float *)(iVar1 + 0x60);
      }
      return (int)fVar3;
    }
  }
  return 0;
}

