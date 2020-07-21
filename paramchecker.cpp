bool iswithinrange(float arg, float min, float max){
   return(arg>min&&arg<max); 
}


bool vitalsAreOk(float bpm, float spo2, float respRate) {
  return (iswithinrange(bpm,70,150)&&iswithinrange(spo2,80,100)&&iswithinrange(respRate,30,60));
}
