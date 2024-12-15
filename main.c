#include <main.h>
int sensor=0;
int temperatura=0;
void main()
{
   setup_adc_ports(AN0);
   setup_adc(ADC_CLOCK_INTERNAL);

   while(TRUE)
   {
      sensor=read_adc();
      temperatura=(sensor*(500.0/1024.0));
      if(temperatura <= 20){
         OUTPUT_LOW(PIN_B1);
         OUTPUT_LOW(PIN_B2);
         OUTPUT_HIGH(PIN_B0);
         delay_ms(500);}
      else if(temperatura >= 30){
         OUTPUT_LOW(PIN_B0);
         OUTPUT_LOW(PIN_B1);
         OUTPUT_HIGH(PIN_B2);
         delay_ms(500);}
      else{
         OUTPUT_LOW(PIN_B0);
         OUTPUT_LOW(PIN_B2);
         OUTPUT_HIGH(PIN_B1);
         delay_ms(500);}

      //TODO: User Code
   }

}
