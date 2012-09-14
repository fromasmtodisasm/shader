#ifndef NOISE_HPP
#define NOISE_HPP

#include <libnoise/noise.h>
#include <glm/glm.hpp>

#include "noiseutils.h"

using namespace noise;

class Noise {
  public:
    static void initialize();
    static const float noise(glm::vec3 r);
    static void heightmap(float, float, float, float);

  private:
    static module::RidgedMulti ridged;
    static module::Billow billow;
    static module::ScaleBias scalebias;
    static module::Perlin perlin;
    static module::Select select;
    static module::Turbulence turbulence;
};

#endif // NOISE_HPP
