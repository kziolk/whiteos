#pragma once
#include <stdint.h>

void outb(uint16_t port, uint8_t value);
uint8_t insb(uint16_t port);
void iowait();
