#include <iostream>
#include <cmath>
#include <Eigen/Core>

int main()
{
	auto angle = 45.0 / 180.0 * acos(-1);
	Eigen::Matrix3f model;
	model <<
		std::cos(angle), -std::sin(angle), 0,
		std::sin(angle), std::cos(angle), 0,
		0, 0, 1;
	Eigen::Matrix3f M_trans;
	M_trans <<
		1, 0, 1,
		0, 1, 2,
		0, 0, 1;
	Eigen::Vector3f p(2.0f, 1.0f, 1.0f);
	auto result = M_trans * model * p;
	std::cout << result << std::endl;
	return 0;
}