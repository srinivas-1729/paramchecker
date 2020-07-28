
bool bpmIsOk(float bpm);
bool spo2IsOk(float spo2);
bool respRateIsOk(float respRate);
bool isReadingsOk(float val, float min_lim, float max_lim);

bool isReadingsOk(float val, float min_lim, float max_lim)
{
 if((val < min_lim) || (val > max_lim))
 {
   return false;
 }
  return true;
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
