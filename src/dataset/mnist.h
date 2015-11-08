/*
 * mnist.h
 *
 *  Created on: Oct 11, 2015
 *      Author: lyx
 */

#ifndef MNIST_H_
#define MNIST_H_

#include "../model/network.h"
#include "../utils/read_data.h"
#include "../utils/image.h"

#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

namespace mnist {

int train();
void camera();

}

#endif /* MNIST_H_ */
