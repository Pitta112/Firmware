#include <px4_platform_common/posix.h>
#include <lib/matrix/matrix/Dcm.hpp>
#include <lib/ecl/ecl.h>
#include <lib/ecl/EKF/ekf.h>



extern "C" __EXPORT int versatile_main(int argc, char *argv[]);

int versatile_main(int argc, char *argv[])
{
	PX4_INFO("Exiting versatile!");
	return 0;
}

class Versatile : public Ekf
{
public:
	matrix::Dcmf earth_to_body = quatToInverseRotMat(_state.quat_nominal);
	void print();
}
