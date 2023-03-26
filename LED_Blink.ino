int LED = D2;
int DOT = 300;
int DASH = 900;

const int delay_time = 1500;


void setup() {
    
    pinMode(LED, OUTPUT);
}

void loop() {
    
    JASON();

}



void dot(){
    digitalWrite(LED, HIGH);
    delay(DOT);
    digitalWrite(LED, LOW);
    delay(delay_time);
}

void dash(){
    digitalWrite(LED, HIGH);
    delay(DASH);
    digitalWrite(LED, LOW);
    delay(delay_time);
}

void JASON(){
    dot();
    dash();
    dash();
    dash();
    delay(delay_time);
    
    dot();
    dash();
    delay(delay_time);
    
    dot();
    dot();
    dot();
    delay(delay_time);
    
    dash();
    dash();
    dash();
    delay(delay_time);
    
    dash();
    dot();
    delay(delay_time);
}


/* void J(){
    dot();
    dash();
    dash();
    dash();
}

void A(){
    dot();
    dash();
}
void S(){
    dot();
    dot();
    dot();
    
}
void O(){
    dash();
    dash();
    dash();
    
}
void N(){
    dash();
    dot();
}

*/