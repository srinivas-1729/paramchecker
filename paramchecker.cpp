bool isReadingsOk(float val, float min_lim, float max_lim)
{
 bool retVal = true;
 if((val < min_lim) || (val > max_lim))
 {
   retVal = false;
 }
  return retVal;
}

bool vitalsAreOk(float bpm, float spo2, float respRate) {
  return (bpmIsOk(bpm) && spo2IsOk(spo2) && respRateIsOk(respRate));
}

bool bpmIsOk(float bpm) {
  isReadingsOk(bpm, 70, 150);
}

bool spo2IsOk(float spo2) {
  isReadingsOk(spo2, 80, 150);
}

bool respRateIsOk(float respRate) {
  isReadingsOk(respRate, 30, 60);
}
