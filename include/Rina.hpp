#ifndef RINA_H
#define RINA_H

#include <cstdlib>
#include <string>
#include <iostream>
#include <librina/librina.h>
#ifndef RINA_PREFIX
#define RINA_PREFIX     "iris-rina-app"
#endif
#include <librina/logs.h>

using namespace rina;
using namespace std;

const string app_name = "iris.rina.client.app";
const string app_instance = "1";
const string server_name = "iris.rina.server.app";
const string server_instance = "1";

#endif
