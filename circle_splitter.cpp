#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<cmath>
 


struct point{
	double x;
	double y;	
};
struct circle{
	point center;
	double radius;
	circle();
};

circle::circle(){
	center.x = 0;
	center.y = 0;
	radius = 2;
}

point find_midpoint(point point1, point point2){
	point mid;
	mid.x = (.5 * (point1.x + point2.x)); 
	mid.y = (.5 * (point1.y + point2.y)); 
	return mid;	   
}
double find_radius(point point1, point point2){
	double rad;
	rad = sqrt(pow(point1.x - point2.x, 2) + pow(point1.y - point2.y, 2));
	return rad;
}

int main(){
	srand (time(NULL));
	circle final_circle = circle();
	int points_inside;
	int num_points;
	double radius;
	double temp_radius;
	point midpoint;
	std::cout << "How many points? (must be an even number): " << std::endl;
	std::cin >> num_points;
	if(num_points % 2 == 1){ return -1; }
	point array[num_points];
	for (int i = 0; i < num_points; i++){
		array[i].x = (rand()%10000) * (.0001);
		array[i].y = (rand()%10000) * (.0001);
		std::cout << array[i].x << ", ";	
		std::cout << array[i].y << std::endl;	
	}

	for(int j = 0; j < num_points; j++){
		for(int k = 0; k < j; k++){
			points_inside = 0;
			std::cout << "circle for points:" << std::endl; 
			std::cout << "x1: " << array[j].x  << ", y1: " << array[j].y << ", x2: " << array[k].x << ", y2: " << array[k].y  << std::endl;
			midpoint = find_midpoint(array[j], array[k]);
			radius = find_radius(array[j], array[k]) / 2;
		std::cout << "midpoint: " << midpoint.x << ", " << midpoint.y << std::endl;
			std::cout << "radius: " << radius << std::endl;
			for(int l = 0; l < num_points; l++){
				temp_radius = find_radius(midpoint, array[l]);
				std::cout << "temp radius " << l << " " << temp_radius << std::endl;
				if (temp_radius <= radius && (l != j || l != k)){
					points_inside++;
				} 
			}
			std::cout << "points inside: " << points_inside << std::endl;	
			if((points_inside == num_points/2) && (radius < final_circle.radius)){
				final_circle.center.x = midpoint.x; 	
				final_circle.center.y = midpoint.y;
 				final_circle.radius = radius;
			}
		}	
	} 		
			
	std::cout << "The smallest circle with half the points is midpoint: " << final_circle.center.x << ", " << final_circle.center.y << std::endl;
	std::cout << "Its radius: " << final_circle.radius << std::endl;

 }
