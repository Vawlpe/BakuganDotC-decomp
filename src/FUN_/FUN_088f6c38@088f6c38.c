#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f6c38(int param_1)

{
  undefined auVar1 [12];
  int iVar2;
  undefined (*pauVar3) [12];
  float fVar4;
  
  *(undefined *)(param_1 + 0xba) = 0;
  if ((*(int *)(param_1 + 0x104) != 0) && (iVar2 = FUN_088fd564(param_1), iVar2 != 0)) {
    iVar2 = *(int *)(*(int *)(param_1 + 8) + 4);
    pauVar3 = (undefined (*) [12])
              (**(code **)(iVar2 + 0x14))(*(int *)(param_1 + 8) + (int)*(short *)(iVar2 + 0x10));
    auVar1 = vsub_t(*pauVar3,*(undefined (*) [12])(param_1 + 0xa0));
    fVar4 = (float)vdot_t(*(undefined (*) [12])(**(int **)(param_1 + 0x80) + 0x50),
                          *(undefined (*) [12])(*(int *)(param_1 + 0x104) + 0x10));
    if ((fVar4 < 0.0) &&
       (fVar4 = (float)vdot_t(auVar1,*(undefined (*) [12])(*(int *)(param_1 + 0x104) + 0x10)),
       fVar4 < 0.0)) {
      *(undefined *)(param_1 + 0xba) = 1;
    }
  }
  return;
}

