#include "paramchecker.h"

typedef struct {
 float vitalVal;
 float vitalMinVal;
 float vitalMaxVal;
}vital_config_s;

typedef struct {
  vital_config_s *vitalValList;
  int numSensors;
}vital_param_s;

#define BPM_VAL 100
#define SPO2_VAL 100
#define RESPRATE_VAL 50 

vital_config_s vitalValList[] = {
 {BPM_VAL, 70, 150},
 {SPO2_VAL, 80, 150},
 {RESPRATE_VAL, 30, 60}
};

vital_param_s vitalList = {
  vitalValList,
  sizeof(vitalValList)/sizeof(vitalValList[0])
};

bool isReadingsOk(float val, float min_lim, float max_lim) {
  bool retVal = true;
  if((val < min_lim) || (val > max_lim))
  {
    retVal = false;
  }
  return retVal;
}

bool vitalsAreOk(vital_param_s *vitalList) {
  
  bool retVal = true;

  for (int i = 0; i < vitalList->numSensors; i++)
  {
   retVal &= isReadingsOk(vitalList->vitalValList->vitalVal, vitalList->vitalValList->vitalMinVal, vitalList->vitalValList->vitalMaxVal);
  }
   return retVal;
}

vitalsAreOk(&vitalList);
