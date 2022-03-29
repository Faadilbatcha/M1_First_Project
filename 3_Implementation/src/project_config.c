#include<project_config.h>

void temperature(){
	int i;
	printf("\nHot or Cold, let's find it via Temp. Sensor \n");
	char info1[][50]={"1.Ic Name : LM 35","2.Operating Voltage : 5V","3.Peripheral pins : 3 \n"};
	for(i=0;i<3;i++){
		puts(info1[i]);
	}
	flag=1;
	interface();
}
void moisture(){
	int i;
	printf("\nGreat Choice,then Moisture Sensor it is!!!! \n");
	char info1[][50]={"1.Ic Name : HL 69","2.Operating Voltage : 5V","3.Peripheral pins : 6 \n"};
	for(i=0;i<3;i++){
		puts(info1[i]);
	}
	flag=2;
	interface();
}
void ir(){
	int i;
	printf("\nSo lets find out IR's True power!!!\n");
	char info1[][50]={"1.Ic Name : EC 0141","2.Operating Voltage : 3.3V/5V","3.Peripheral pins : 3 \n"};
	for(i=0;i<3;i++){
		puts(info1[i]);
	}
	flag=3;
	interface();
}
void gsm(){
	int i;
	printf("\nNeed to communicate, No worries - GSM's here!!!\n");
	char info1[][50]={"1.Ic Name : SIM900","2.Operating Voltage : 5V","3.Peripheral pins : 4 \n"};
	for(i=0;i<3;i++){
		puts(info1[i]);
	}
	flag=4;
	interface();
}
void bluetooth(){
	int i;
	printf("\nBluetooth - easiest way of communication!!!\n");
	char info1[][50]={"1.Ic Name : HC06","2.Operating Voltage : 5V","3.Peripheral pins : 4 \n"};
	for(i=0;i<3;i++){
		puts(info1[i]);
	}
	flag=5;
	interface();
}
void humidity(){
	int i;
	printf("\nWant the Atmosphere Humidity value? Answer's here!!!!\n");
	char info1[][60]={"1.Ic Name : DHT11","2.Operating Voltage & current : 3.5V-5V & 0.3mA ","3.Peripheral pins : 4\n"};
	for(i=0;i<3;i++){
		puts(info1[i]);
	}
	flag=6;
	interface();
}
void gas(){
	int i;
	printf("\nGAS Sensor - for sensing Gas Leakage!!!\n");
	char info1[][50]={"1.Ic Name : MQ-6","2.Operating Voltage : 5V","3.Peripheral pins : 4 \n"};
	for(i=0;i<3;i++){
		puts(info1[i]);
	}
	flag=7;
	interface();
}
void motion(){
	int i;
	printf("\nGotcha Intruder - Motion Detector's on duty!!!\n");
	char info1[][50]={"1.Ic Name : PIR","2.Operating Voltage : 3.3V-5V","3.Peripheral pins : 3 \n"};
	for(i=0;i<3;i++){
		puts(info1[i]);
	}
	flag=8;
	interface();
}
void pulse(){
	int i;
	printf("\nTo Know Your Heart beat in mere seconds - Pulse sensor!!!\n");
	char info1[][50]={"1.Ic Name : SEN-11574","2.Operating Voltage : 3.3V/5V","3.Peripheral pins : 3 \n"};
	for(i=0;i<3;i++){
		puts(info1[i]);
	}
	flag=9;
	interface();
}
void sound(){
	int i;
	printf("\nIts easy to catch a sound, want to know how?? -> Sound Sensor!!!\n");
	char info1[][50]={"1.Ic Name : FC 04","2.Operating Voltage : 5V","3.Peripheral pins : 3 \n"};
	for(i=0;i<3;i++){
		puts(info1[i]);
	}
	flag=10;
	interface();
}
void interface(){
	printf("\nInterface Info.. \n");
	printf("%d \n", flag);
	if(flag==1){
		printf("Temperature sensor has 3 pins (i.e) Power, Ground, Analog o/p \n");
	}
	if(flag==2){
		printf("Moisture sensor has 6 pins (i.e) Power, Ground, Analog o/p, Digital o/p, 2 probes-To sense Soil Moisture content \n");
	} 
	if(flag==3){
		printf("IR sensor has 3 pins (i.e) Power, Ground, Digital o/p \n");
	}
	if(flag==4){
		printf("GSM sensor has 4 pins (i.e) Power, Ground, RXD, TXD o/p \n");
	}
	if(flag==5){
		printf("Bluetooth sensor has 4 pins (i.e) Power, Ground, RXD, TXD \n");
	}
	if(flag==6){
		printf("Humidity sensor has 4 pins (i.e) Power, Ground, Digital o/p \n");
	}
	if(flag==7){
		printf("GAS sensor has 3 pins (i.e) Power, Ground, Digital o/p \n");
	}
	if(flag==8){
		printf("Motion sensor has 3 pins (i.e) Power, Ground, Digital o/p \n");
	}
	if(flag==9){
		printf("Pulse sensor has 3 pins (i.e) Power, Ground, Digital o/p \n");
	}
	if(flag==10){
		printf("Sound sensor has 3 pins (i.e) Power, Ground, Digital o/p \n");
	}
}
