#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08962fa4(int param_1)

{
  int iVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x4f64);
  if (fVar2 < 1.0) {
    fVar2 = fVar2 + 0.2;
    *(float *)(param_1 + 0x4f64) = fVar2;
  }
  fVar2 = fVar2 * 0.2 + 1.0;
  if (1.2 < fVar2) {
    fVar2 = 1.2;
  }
  if (*(char *)(param_1 + 0x75) == '\0') {
    FUN_089a51fc(fVar2,fVar2,0,
                 *(undefined4 *)
                  (*(int *)(param_1 + 0x1c) +
                  ((uint)*(ushort *)(param_1 + 0x5164) + (int)*(char *)(param_1 + 0x74)) * 4));
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) +
                    ((uint)*(ushort *)(param_1 + 0x5164) + (int)*(char *)(param_1 + 0x74)) * 4);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xffffffdf;
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) +
              ((uint)*(ushort *)(param_1 + 0x5164) + (int)*(char *)(param_1 + 0x74)) * 4) + 0x68) =
         0xc3480000;
    FUN_089a51fc(fVar2,fVar2,0,
                 *(undefined4 *)
                  (*(int *)(param_1 + 0x1c) +
                  ((uint)*(ushort *)(param_1 + 0x5166) + (int)*(char *)(param_1 + 0x74)) * 4));
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) +
                    ((uint)*(ushort *)(param_1 + 0x5166) + (int)*(char *)(param_1 + 0x74)) * 4);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xffffffdf;
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) +
              ((uint)*(ushort *)(param_1 + 0x5166) + (int)*(char *)(param_1 + 0x74)) * 4) + 0x68) =
         0xc3490000;
    FUN_089a51fc(fVar2,fVar2,0,
                 *(undefined4 *)
                  (*(int *)(param_1 + 0x1c) +
                  ((uint)*(ushort *)(param_1 + 0x5162) + (int)*(char *)(param_1 + 0x74)) * 4));
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) +
                    ((uint)*(ushort *)(param_1 + 0x5162) + (int)*(char *)(param_1 + 0x74)) * 4);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xffffffdf;
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) +
              ((uint)*(ushort *)(param_1 + 0x5162) + (int)*(char *)(param_1 + 0x74)) * 4) + 0x68) =
         0xc34a0000;
    FUN_089a51fc(fVar2,fVar2,0,
                 *(undefined4 *)
                  (*(int *)(param_1 + 0x1c) +
                  ((uint)*(ushort *)(param_1 + 0x51f6) + (int)*(char *)(param_1 + 0x74)) * 4));
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) +
                    ((uint)*(ushort *)(param_1 + 0x51f6) + (int)*(char *)(param_1 + 0x74)) * 4);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xffffffdf;
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) +
              ((uint)*(ushort *)(param_1 + 0x51f6) + (int)*(char *)(param_1 + 0x74)) * 4) + 0x68) =
         0xc34b0000;
    FUN_089a51fc(fVar2,fVar2,0,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516c) * 4)
                );
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516c) * 4) + 0x68) =
         0xc34c0000;
    FUN_089a51fc(fVar2,fVar2,0,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516e) * 4)
                );
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516e) * 4) + 0x68) =
         0xc34d0000;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516e) * 4);
    *(float *)(iVar1 + 100) =
         *(float *)(*(int *)(*(int *)(param_1 + 0x1c) +
                            ((uint)*(ushort *)(param_1 + 0x5162) + (int)*(char *)(param_1 + 0x74)) *
                            4) + 100) - *(float *)(param_1 + 0x5158) * *(float *)(iVar1 + 0x94);
  }
  else {
    FUN_089a51fc(fVar2,fVar2,0,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5168) * 4)
                );
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5168) * 4) + 0x68) =
         0xc3480000;
    FUN_089a51fc(fVar2,fVar2,0,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516a) * 4)
                );
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x516a) * 4) + 0x68) =
         0xc3490000;
    FUN_089a51fc(fVar2,fVar2,0,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x517a) * 4)
                );
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x517a) * 4) + 0x68) =
         0xc34a0000;
    FUN_089a51fc(fVar2,fVar2,0,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x517c) * 4)
                );
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x517c) * 4) + 0x68) =
         0xc34b0000;
  }
  return;
}

