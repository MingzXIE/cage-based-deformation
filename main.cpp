#include <iostream>
#include <vector>
#include <random>
#include <chrono>
#include <igl/readOBJ.h>
#include <igl/opengl/glfw/Viewer.h>
#include <igl/adjacency_list.h>
#include <igl/edge_lengths.h>
#include <igl/jet.h>
#include <Eigen/SparseLU>
#include <nanoflann.hpp>


// Main function starts here
int main(int argc, char *argv[]) {
    // load the model
    Eigen::MatrixXd V;
    Eigen::MatrixXi F;
    igl::readOBJ("../example_meshes/bunny.obj", V, F);

    igl::opengl::glfw::Viewer viewer;
    viewer.data().set_mesh(V, F);
    viewer.launch();
}