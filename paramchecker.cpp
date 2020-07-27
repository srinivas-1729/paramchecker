
bool vitalsAreOk(float bpm, float spo2, float respRate) {
  
  bool bpmRetVal = bpmIsOk(bpm);
  
  bool spo2RetVal = spo2IsOk(spo2);
  
  bool respRateRetVal = respRateIsOk(respRate);
  
  return (bpmRetVal && spo2RetVal && respRateRetVal);
}

bool bpmIsOk(float bpm) {
 if(bpm < 70 || bpm > 150) {
    return false;
  }
  return true;
}

bool spo2IsOk(float spo2) {
  if(spo2 < 80) {
    return false;
  }
  return true;
}

bool respRateIsOk(float respRate) {
  if(respRate < 30 || respRate > 60) {
    return false;
  }
  return true;
}
