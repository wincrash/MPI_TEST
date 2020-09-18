#!/bin/bash
#SBATCH --job-name=MPI_TEST
#SBATCH --output=output.log
#SBATCH --ntasks=16
#SBATCH --cpus-per-task=1
#SBATCH --time=999:99:99
#SBATCH --mail-type=ALL
##SBATCH --mail-user=ruslan.pacevic@vgtu.lt
date;hostname;pwd
mpirun ./MPI_TEST
echo "BAIGEME DARBA!"
date
hostname
pwd
