#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int eggs = 253; // double - команда дл€ дробей
	double weight_egg = 58.0; // масса одного €йца в граммах
	double weight_chicken = 1.9; // масса курицы в киллограммах 
	double end_egg_weight = eggs * weight_egg;
	double end_egg_weight_ = end_egg_weight / 1000.0;

	double otvet = end_egg_weight_ / weight_chicken;

	puts("Ќа птицефермах продукцию от кур-несушек получают в течении одного года.\n «а год от каждой несушки получают по 253 €йца, масса €иц Ц 58 г. жива€ масса курицы около 1.9 кг. \n¬о сколько раз продукци€ несушки превосходит ее массу");
	printf("ќбща€ масса €иц за год: %.3f кг\n", end_egg_weight_);
	printf("ћасса продукции несушки превосходит ее вес в %.5f раз.\n", otvet);
	printf("ќтвет: в %.5f раз.\n", otvet);

	return 0;
}