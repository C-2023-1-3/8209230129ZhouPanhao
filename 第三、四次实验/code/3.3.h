#pragma once
double celsius_to_fah(double cel) {
	return cel * 1.8 + 32;
}
double fah_to_celsius(double fah) {
	return ((fah - 32) * 5) / 9;
}