// PB7 -> 13 (LED)
// PE5 -> 3 (BTN_SW)

#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 16000000UL // 수정자의 클럭수 16MHz

int main() { // Entry Point 진입점
  DDRB = 0x80; // 0b1000_0000; // pinMode(13, OUTPUT);
  DDRE = ~0b00100000; // pinMode(3, INPUT);

  for(;;) { // loop()
    bool button_state = PINE & 0x20; // PINE -> E Group // 0b00100000;
    _delay_ms(20UL); // 0.002초 딜레이
    if(button_state == true) {
      PORTB = 0x80; // digitalWrite(13, HIGH);
    } else {
      PORTB = ~0b10000000; // digitalWrite(13, LOW);
    }
  }
  return 0;
}

