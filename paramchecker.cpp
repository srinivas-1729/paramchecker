#include "paramchecker.h"

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
