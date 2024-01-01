#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0899e134(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_1 + 0x10bc);
  if (fVar4 < 1.0) {
    fVar4 = fVar4 + 0.1;
    *(float *)(param_1 + 0x10bc) = fVar4;
  }
  fVar4 = fVar4 * 0.1 + 1.0;
  if (1.1 < fVar4) {
    fVar4 = 1.1;
  }
  FUN_089a51fc(fVar4,fVar4,0,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4 + 200));
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4 + 200) + 0x68)
       = 0xc3480000;
  FUN_089a51fc(fVar4,fVar4,0,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4 + 0xe8));
  *(undefined4 *)
   (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4 + 0xe8) + 0x68) = 0xc34a0000
  ;
  iVar1 = *(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4;
  iVar2 = *(int *)(iVar1 + 0xe8);
  *(float *)(iVar2 + 0x60) =
       *(float *)(*(int *)(iVar1 + 200) + 0x60) -
       *(float *)(param_1 + 0x11e8) * *(float *)(iVar2 + 0x90);
  iVar1 = *(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4;
  iVar2 = *(int *)(iVar1 + 0xe8);
  *(float *)(iVar2 + 100) =
       *(float *)(*(int *)(iVar1 + 200) + 100) -
       *(float *)(param_1 + 0x11ec) * *(float *)(iVar2 + 0x94);
  FUN_089a51fc(fVar4,fVar4,0,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4 + 0xf4));
  *(undefined4 *)
   (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4 + 0xf4) + 0x68) = 0xc3490000
  ;
  iVar1 = *(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4;
  iVar2 = *(int *)(iVar1 + 0xf4);
  *(float *)(iVar2 + 0x60) =
       *(float *)(*(int *)(iVar1 + 200) + 0x60) -
       *(float *)(param_1 + 0x11e0) * *(float *)(iVar2 + 0x90);
  iVar1 = *(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4;
  iVar2 = *(int *)(iVar1 + 0xf4);
  *(float *)(iVar2 + 100) =
       *(float *)(*(int *)(iVar1 + 200) + 100) -
       *(float *)(param_1 + 0x11e4) * *(float *)(iVar2 + 0x94);
  FUN_089a51fc(fVar4,fVar4,0,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4 + 0x100));
  *(undefined4 *)
   (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4 + 0x100) + 0x68) =
       0xc34a0000;
  iVar1 = *(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4;
  iVar2 = *(int *)(iVar1 + 0x100);
  *(float *)(iVar2 + 0x60) =
       *(float *)(*(int *)(iVar1 + 200) + 0x60) -
       *(float *)(param_1 + 0x11f0) * *(float *)(iVar2 + 0x90);
  iVar1 = *(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4;
  iVar2 = *(int *)(iVar1 + 0x100);
  *(float *)(iVar2 + 100) =
       *(float *)(*(int *)(iVar1 + 200) + 100) -
       *(float *)(param_1 + 0x11f4) * *(float *)(iVar2 + 0x94);
  FUN_089a51fc(fVar4,fVar4,0,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4 + 0x10c));
  *(undefined4 *)
   (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4 + 0x10c) + 0x68) =
       0xc3490000;
  iVar1 = *(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4;
  iVar2 = *(int *)(iVar1 + 0x10c);
  *(float *)(iVar2 + 0x60) =
       *(float *)(*(int *)(iVar1 + 200) + 0x60) -
       *(float *)(param_1 + 0x11f8) * *(float *)(iVar2 + 0x90);
  iVar1 = *(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4;
  iVar2 = *(int *)(iVar1 + 0x10c);
  *(float *)(iVar2 + 100) =
       *(float *)(*(int *)(iVar1 + 200) + 100) -
       *(float *)(param_1 + 0x11fc) * *(float *)(iVar2 + 0x94);
  FUN_089a51fc(fVar4,fVar4,0,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4 + 0x118));
  *(undefined4 *)
   (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4 + 0x118) + 0x68) =
       0xc34a0000;
  iVar1 = *(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4;
  iVar2 = *(int *)(iVar1 + 0x118);
  *(float *)(iVar2 + 0x60) =
       *(float *)(*(int *)(iVar1 + 200) + 0x60) -
       *(float *)(param_1 + 0x1200) * *(float *)(iVar2 + 0x90);
  iVar1 = *(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4;
  iVar2 = *(int *)(iVar1 + 0x118);
  *(float *)(iVar2 + 100) =
       *(float *)(*(int *)(iVar1 + 200) + 100) -
       *(float *)(param_1 + 0x1204) * *(float *)(iVar2 + 0x94);
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4 + 0x118);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xffffffdf;
  FUN_089a51fc(fVar4,fVar4,0,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4 + 0xdc));
  *(undefined4 *)
   (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4 + 0xdc) + 0x68) = 0xc3490000
  ;
  iVar1 = *(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4;
  iVar2 = *(int *)(iVar1 + 0xdc);
  iVar3 = 0;
  *(float *)(iVar2 + 0x60) =
       *(float *)(*(int *)(iVar1 + 200) + 0x60) -
       *(float *)(param_1 + 0x1208) * *(float *)(iVar2 + 0x90);
  iVar1 = *(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4;
  iVar2 = *(int *)(iVar1 + 0xdc);
  *(float *)(iVar2 + 100) =
       *(float *)(*(int *)(iVar1 + 200) + 100) -
       *(float *)(param_1 + 0x120c) * *(float *)(iVar2 + 0x94);
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = (int)*(char *)(param_1 + 0x109e);
  do {
    FUN_089a51fc(fVar4,fVar4,0,*(undefined4 *)(iVar1 + (iVar3 + iVar2 * 5) * 4 + 0x124));
    *(undefined4 *)
     (*(int *)(*(int *)(param_1 + 0x1c) + (iVar3 + *(char *)(param_1 + 0x109e) * 5) * 4 + 0x124) +
     0x68) = 0xc3490000;
    iVar2 = iVar3 + *(char *)(param_1 + 0x109e) * 5;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2 * 4 + 0x124);
    *(float *)(iVar1 + 0x60) =
         *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4 + 200) +
                   0x60) - *(float *)(param_1 + iVar2 * 8 + 0x1e8c) * *(float *)(iVar1 + 0x90);
    iVar2 = iVar3 + *(char *)(param_1 + 0x109e) * 5;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2 * 4 + 0x124);
    iVar3 = iVar3 + 1;
    *(float *)(iVar1 + 100) =
         *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4 + 200) + 100
                   ) - *(float *)(param_1 + iVar2 * 8 + 0x1e90) * *(float *)(iVar1 + 0x94);
    iVar1 = *(int *)(param_1 + 0x1c);
    iVar2 = (int)*(char *)(param_1 + 0x109e);
  } while (iVar3 < 5);
  FUN_089a51fc(fVar4,fVar4,0,*(undefined4 *)(iVar1 + iVar2 * 4 + 0x160));
  *(undefined4 *)
   (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4 + 0x160) + 0x68) =
       0xc3490000;
  iVar1 = *(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4;
  iVar2 = *(int *)(iVar1 + 0x160);
  *(float *)(iVar2 + 0x60) =
       *(float *)(*(int *)(iVar1 + 200) + 0x60) -
       *(float *)(param_1 + 0x1218) * *(float *)(iVar2 + 0x90);
  iVar1 = *(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4;
  iVar2 = *(int *)(iVar1 + 0x160);
  *(float *)(iVar2 + 100) =
       *(float *)(*(int *)(iVar1 + 200) + 100) -
       *(float *)(param_1 + 0x121c) * *(float *)(iVar2 + 0x94);
  FUN_089a51fc(fVar4,fVar4,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xd4));
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xd4) + 0x68) = 0xc34c0000;
  iVar1 = param_1 + *(char *)(param_1 + 0x109e) * 0x224;
  iVar2 = 0;
  if (0.0 < *(float *)(iVar1 + 0x122c)) {
    iVar3 = 0;
    iVar1 = *(int *)(iVar1 + 0x1240);
    do {
      FUN_089a51fc(fVar4 * 0.8,fVar4 * 0.8,0,iVar1);
      *(undefined4 *)(iVar1 + 0x68) = 0xc34a0000;
      iVar2 = iVar2 + 1;
      *(float *)(iVar1 + 0x60) =
           *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4 + 200) +
                     0x60) -
           *(float *)(param_1 + *(char *)(param_1 + 0x109e) * 0x200 + iVar3 + 0x188c) * fVar4;
      *(float *)(iVar1 + 100) =
           *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x109e) * 4 + 200) +
                     100) -
           *(float *)(param_1 + *(char *)(param_1 + 0x109e) * 0x200 + iVar3 + 0x1890) * fVar4;
      iVar3 = iVar3 + 8;
      iVar1 = *(int *)(iVar1 + 4);
    } while ((float)iVar2 < *(float *)(param_1 + *(char *)(param_1 + 0x109e) * 0x224 + 0x122c));
  }
  return;
}

