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
//		printf("活动如期举行！\n");
//	}
//	else {
//		printf("活动无法举行！\n");
//		if (!is_weather_sunny) {
//			printf("原因：天气不晴朗\n");
//		}
//		if (!is_venue_available) {
//			printf("原因：场地不可用\n");
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
//		printf("活动如期举行！\n");
//	}
//	else {
//		printf("活动无法举行！\n");
//		if (!is_weather_sunny) {
//			printf("原因：天气不晴朗\n");
//		}
//		if (!is_venue_available) {
//			printf("原因：场地不可用\n");
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
//		printf("决定出去吃饭\n");
//	}
//	else {
//		printf("在家吃饭\n");
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
//		printf("允许访问，您是经理！\n");
//	}
//	else if (role == 2 && completed_tasks > 5) {
//		printf("允许访问，您是员工，并且已经完成了5个任务!\n");
//	}
//	else if (role == 3 && completed_tasks >10 && manager_approved) {
//		printf("允许访问，您是实习生，并且已经完成了10个任务，得到了经历的批准！\n");
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
//		puts("允许访问\n");
//	}
//	else {
//		puts("拒绝访问\n");
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
//		puts("允许访问");
//	}
//	else {
//		puts("拒绝访问");
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
//	printf("得分：%u, 等级：%c\n", score, grade);
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
//		printf("得分：%u, 等级:%c\n", score, grade);
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
//		puts("不符合条件，年龄不足！");
//	}
//	if (driving_exp_years < 2) {
//		puts("不符合条件，驾驶经验不足！");
//	}
//	puts("满足租车条件。");
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
//		puts("不符合条件，年龄不足！");
//	}
//	if (driving_exp_years < 2) {
//		puts("不符合条件，驾驶经验不足！");
//	}
//	puts("符合租车条件！");
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
//	printf("请输入一个数字 ： \n");
//
//	scanf_s("%d",&number);
//
//	printf("您输入的数字是: %d\n", number);
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
//	printf("请输入一个整数：\n");
//
//	scanf_s("%d",&number);
//
//	printf("您输入的整数是: %d\n", number);
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
//		printf("跑步的人完成第 %" PRIu32 "圈\n", current_lap);
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
//		printf("跑步的人跑完第 %" PRIu32 "圈\n", current_lap);
//	}
//
//	return 0;
//}


