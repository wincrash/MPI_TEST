#include <mpi.h>
#include <boost/compute/system.hpp>


#include <unistd.h>

int main(int argc, char** argv) {
    MPI_Init(&argc, &argv);
    int NumberOfProcessors;
    int rank;
    MPI_Comm_size(MPI_COMM_WORLD, &NumberOfProcessors);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    // Get the name of the processor
    char processor_name[MPI_MAX_PROCESSOR_NAME];
    int name_len;
    MPI_Get_processor_name(processor_name, &name_len);
        std::string proc_name=std::string(processor_name);
    std::cout<<"PROC "<<rank<<" host "<<proc_name<<" Using device : "<<boost::compute::system::default_device().name()<<
               " compute_units : "<<boost::compute::system::default_device().compute_units()<<"\n";

    return 0;
}
