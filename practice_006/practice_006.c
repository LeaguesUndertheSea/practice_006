//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(void)
//{
//	bool is_weather_sunny = true;
//	bool is_venue_available = true;
//
//	if (is_weather_sunny && is_venue_available) {
//		printf("����ھ��У�\n");
//	}
//	else {
//		printf("��޷����У�\n");
//		if (!is_weather_sunny) {
//			printf("ԭ������������\n");
//		}
//		if (!is_venue_available) {
//			printf("ԭ�򣺳��ز�����\n");
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(void)
//{
//	bool is_weather_sunny = true;
//	bool is_venue_available = true;
//
//	if (is_weather_sunny && is_venue_available) {
//		printf("����ھ��У�\n");
//	}
//	else {
//		printf("��޷����У�\n");
//		if (!is_weather_sunny) {
//			printf("ԭ������������\n");
//		}
//		if (!is_venue_available) {
//			printf("ԭ�򣺳��ز�����\n");
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(void)
//{
//	bool has_couple = true;
//	bool is_special_event = true;
//
//	if (has_couple || is_special_event) {
//		printf("������ȥ�Է�\n");
//	}
//	else {
//		printf("�ڼҳԷ�\n");
//	}
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(void)
//{
//	uint8_t role = 2; // 1 = Manager; 2 = Employ; 3 = Intern.
//	uint8_t completed_tasks = 6;
//	bool manager_approved = true;
//
//	if (role == 1) {
//		printf("������ʣ����Ǿ���\n");
//	}
//	else if (role == 2 && completed_tasks > 5) {
//		printf("������ʣ�����Ա���������Ѿ������5������!\n");
//	}
//	else if (role == 3 && completed_tasks >10 && manager_approved) {
//		printf("������ʣ�����ʵϰ���������Ѿ������10�����񣬵õ��˾�������׼��\n");
//	}
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(void){
//
//	uint8_t role = 2;
//	
//	uint8_t completed_tasks = 6;
//
//	bool is_manager_approved = true;
//
//	bool access_available = false;
//
//	switch(role) {
//	case 1:
//			access_available = true;
//			break;
//	case 2:
//			if (completed_tasks > 5) {
//				access_available = true;
//				break;
//			}
//	case 3:
//			if (completed_tasks > 10 && is_manager_approved) {
//				access_available = true;
//				break;
//			}
//	default :
//			access_available = false;
//			break;
//	}	
//	if (access_available) {
//		puts("�������\n");
//	}
//	else {
//		puts("�ܾ�����\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(void)
//{
//	uint8_t role = 2;
//	
//	uint8_t completed_tasks = 6;
//
//	bool is_manager_approved = true;
//
//	bool access_available = false;
//
//	switch (role) {
//	case 1:
//		access_available = true;
//		break;
//	case 2:
//		if (completed_tasks > 5) {
//			access_available = true;
//			break;
//		}
//	case 3:
//		if (completed_tasks > 10 && is_manager_approved) {
//			access_available;
//			break;
//		}
//	default : 
//		access_available = false;
//		break;
//	}
//
//	if (access_available) {
//		puts("�������");
//	}
//	else {
//		puts("�ܾ�����");
//	}
//
//	return 0;
//}


//#include <stdio.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(void)
//{
//	uint32_t score = 80;
//
//	char grade;
//
//	grade = (score >= 90) ? 'A' :
//		(score >= 80) ? 'B' :
//		(score >= 70) ? 'C' : 'D';
//	printf("�÷֣�%u, �ȼ���%c\n", score, grade);
//
//	return 0;
//}

//#include <stdio.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(void)
//{
//	uint32_t score = 80;
//	
//	char grade;
//
//	grade = (score >= 90) ? 'A' :
//		(score >= 80) ? 'B' :
//		(score >= 70) ? 'C' : 'D';
//		printf("�÷֣�%u, �ȼ�:%c\n", score, grade);
//
//	return 0;
//}


//#include <stdio.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(void)
//{
//	uint8_t age = 21;
//	uint8_t driving_exp_years = 2;
//
//	if (age < 21) {
//		puts("���������������䲻�㣡");
//	}
//	if (driving_exp_years < 2) {
//		puts("��������������ʻ���鲻�㣡");
//	}
//	puts("�����⳵������");
//
//	return 0;
//}

//#include <stdio.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(void)
//{
//	uint8_t age = 21;
//
//	uint8_t driving_exp_years = 2;
//
//	if (age < 21) {
//		puts("���������������䲻�㣡");
//	}
//	if (driving_exp_years < 2) {
//		puts("��������������ʻ���鲻�㣡");
//	}
//	puts("�����⳵������");
//
//	return 0;
//}


//#include <stdio.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(void)
//{
//	uint32_t number;
//
//	printf("������һ������ �� \n");
//
//	scanf_s("%d",&number);
//
//	printf("�������������: %d\n", number);
//
//	return 0;
//}

//#include <stdio.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(void)
//{
//	uint32_t number;
//
//	printf("������һ��������\n");
//
//	scanf_s("%d",&number);
//
//	printf("�������������: %d\n", number);
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(void)
//{
//	const uint32_t TOTAL_LAPS = 10;
//	
//	uint32_t current_lap = 0;
//
//	while (current_lap < TOTAL_LAPS) {
//		current_lap = current_lap++;
//		printf("�ܲ�������ɵ� %" PRIu32 "Ȧ\n", current_lap);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(void)
//{
//	const uint32_t TOTAL_LAPS = 10;
//
//	uint32_t current_lap = 0;
//
//	while (current_lap < TOTAL_LAPS) {
//		current_lap = current_lap++;
//		printf("�ܲ���������� %" PRIu32 "Ȧ\n", current_lap);
//	}
//
//	return 0;
//}


